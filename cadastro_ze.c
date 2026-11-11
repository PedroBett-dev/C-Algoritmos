#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_PRODUTOS 100

struct Produto {
    int codigo;
    char nome[50];
    float preco;
    int quantidade;
};

struct Produto produtos[MAX_PRODUTOS];
int total = 0;

void limparTela() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void pausar() {
    printf("\nPressione Enter para voltar ao menu...");
    getchar();
}

int buscar(int codigo) {
    int i;
    for (i = 0; i < total; i++) {
        if (produtos[i].codigo == codigo) {
            return i;
        }
    }
    return -1;
}

void cadastrar() {
    struct Produto p;

    if (total >= MAX_PRODUTOS) {
        printf("Limite de produtos atingido!\n");
        return;
    }

    printf("Codigo: ");
    scanf("%d%*c", &p.codigo);

    if (buscar(p.codigo) != -1) {
        printf("Ja existe um produto com esse codigo!\n");
        return;
    }

    printf("Nome: ");
    fgets(p.nome, sizeof(p.nome), stdin);
    p.nome[strcspn(p.nome, "\n")] = '\0';

    printf("Preco: ");
    scanf("%f", &p.preco);

    printf("Quantidade: ");
    scanf("%d%*c", &p.quantidade);

    produtos[total] = p;
    total++;

    printf("Produto cadastrado com sucesso!\n");
}

void mostrar(struct Produto p) {
    printf("Codigo: %d | Nome: %s | Preco: R$ %.2f | Quantidade: %d\n",
           p.codigo, p.nome, p.preco, p.quantidade);
}

void consultar() {
    int codigo, pos;

    printf("Codigo do produto: ");
    scanf("%d%*c", &codigo);

    pos = buscar(codigo);
    if (pos == -1) {
        printf("Produto nao encontrado!\n");
    } else {
        mostrar(produtos[pos]);
    }
}

void listar() {
    int i;

    if (total == 0) {
        printf("Nenhum produto cadastrado.\n");
        return;
    }

    printf("--- Lista de Produtos ---\n");
    for (i = 0; i < total; i++) {
        mostrar(produtos[i]);
    }
}

void remover() {
    int codigo, pos, i;

    printf("Codigo do produto a remover: ");
    scanf("%d%*c", &codigo);

    pos = buscar(codigo);
    if (pos == -1) {
        printf("Produto nao encontrado!\n");
        return;
    }

    for (i = pos; i < total - 1; i++) {
        produtos[i] = produtos[i + 1];
    }
    total--;

    printf("Produto removido com sucesso!\n");
}

int main() {
    int opcao;

    do {
        limparTela();
        printf("===== CADASTRO DE PRODUTOS =====\n");
        printf("1 - Cadastrar\n");
        printf("2 - Consultar\n");
        printf("3 - Listar\n");
        printf("4 - Remover\n");
        printf("0 - Sair\n");
        printf("Opcao: ");
        scanf("%d%*c", &opcao);

        limparTela();

        switch (opcao) {
            case 1: cadastrar(); break;
            case 2: consultar(); break;
            case 3: listar();    break;
            case 4: remover();   break;
            case 0: printf("Saindo...\n"); break;
            default: printf("Opcao invalida!\n");
        }

        if (opcao != 0) {
            pausar();
        }
    } while (opcao != 0);

    return 0;
}