#ifndef FUNCOES_NOTAS
#define FUNCOES_NOTAS

    #define MEDIA_ESPERADA 6.0

    #define QUANTIDADE_DE_POSICOES_ARRAY 6

    #define POSICAO_1_PROVA         1
    #define POSICAO_2_PROVA         2
    #define POSICAO_1_FALTA         3
    #define POSICAO_2_FALTA         4
    #define POSICAO_MEDIA_BIMESTRAL 5
    #define POSICAO_FALTA_BIMESTRAL 6

    extern float notas_1_bim[QUANTIDADE_DE_POSICOES_ARRAY];
    extern float notas_2_bim[QUANTIDADE_DE_POSICOES_ARRAY];
    extern float notas_3_bim[QUANTIDADE_DE_POSICOES_ARRAY];
    extern float notas_4_bim[QUANTIDADE_DE_POSICOES_ARRAY];

    //utils
    void limpa_tela();
    int atribui_valores_array_notas(float *a, float prova_1, float prova_2, float faltas_1, float faltas_2);
    float *retorna_array_respectivo_bimestre(int bimestre);

    //calculos
    int precisa_de_recuperacao(float *a);

    //notas
    int insercao_de_notas(int bimestre);

#endif