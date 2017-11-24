// Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Variáveis inteiras
int escolha = 0;
int linha_A = 0, coluna_A = 0, flag_A = 0;
int linha_B = 0, coluna_B = 0, flag_B = 0;
int linha_C = 0, coluna_C = 0, flag_C = 0;

// Variáveis reais
float MATRIZ_A[10][10], MATRIZ_B[10][10], MATRIZ_C[10][10];

// Função definir tamanho da matriz A
int tamanho_A()
{
    // Interação com o usuário
    printf("DEFINIR TAMANHO DA MATRIZ A\n\n");
    printf("DIGITE O NUMERO DE LINHAS (MAX 10): ");
    scanf("%d", & linha_A);
    printf("DIGITE O NUMERO DE COLUNAS (MAX 10): ");
    scanf("%d", & coluna_A);

    // Verifica se a condição foi atendida
    if(linha_A > 0 && linha_A <= 10 && coluna_A > 0 && coluna_A <= 10){
        // Sinaliza a flag que a matriz possue tamanho válido
        flag_A = 1;
    }
    else{
        // Informa o erro
        printf("\nERRO: O TAMANHO MAXIMO DE 10x10 NAO FOI RESPEITADO\n");

        // Sinaliza a flag que a matriz está inválida
        flag_A = 0;
    }
}

// Função definir tamanho da matriz B
int tamanho_B()
{
    // Interação com o usuário
    printf("DEFINIR TAMANHO DA MATRIZ B\n\n");
    printf("DIGITE O NUMERO DE LINHAS (MAX 10): ");
    scanf("%d", & linha_B);
    printf("DIGITE O NUMERO DE COLUNAS (MAX 10): ");
    scanf("%d", & coluna_B);

    // Verifica se a condição foi atendida
    if(linha_B > 0 && linha_B <= 10 && coluna_B > 0 && coluna_B <= 10){
        // Sinaliza a flag que a matriz possue tamanho válido
        flag_B = 1;
    }
    else{
        // Informa o erro
        printf("\nERRO: O TAMANHO MAXIMO DE 10x10 NAO FOI RESPEITADO\n");

        // Sinaliza a flag que a matriz está inválida
        flag_B = 0;
    }
}

// Função para preenche a matriz A com valores aleatórios
int aleatorio_A()
{
    // Variáveis
    int i = 0, j = 0;

    // Verifica se a matriz possue um tamanho definido pelo usuário
    if(flag_A == 1){
        // Informa que a matriz foi preenchida
        printf("A MATRIZ FOI PREENCHIDA\n");
    }
    else{
        // Informa que a matriz será 10x10 já que ela não tem tamanho definido
        printf("A MATRIZ FOI PREENCHIDA E POR PADRAO, SERA UMA MATRIZ 10x10\n");

        // Retorna as dimensões
        linha_A = 10;
        coluna_A = 10;
    }

    // Define a raiz
    srand(time(NULL));

    // Preenche a matriz
    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            MATRIZ_A[i][j] = rand() % 100;
        }
    }

    // Sinaliza que a matriz possue valores
    flag_A = 1;
}

// Função para preenche a matriz B com valores aleatórios
int aleatorio_B()
{
    // Variáveis
    int i = 0, j = 0;

    // Verifica se a matriz possue um tamanho definido pelo usuário
    if(flag_B == 1){
        // Informa que a matriz foi preenchida
        printf("A MATRIZ FOI PREENCHIDA\n");
    }
    else{
        // Informa que a matriz será 10x10 já que ela não tem tamanho definido
        printf("A MATRIZ FOI PREENCHIDA E POR PADRAO, SERA UMA MATRIZ 10x10\n");

        // Retorna as dimensões
        linha_B = 10;
        coluna_B = 10;
    }

    // Define a raiz
    srand(time(NULL));

    // Preenche a matriz
    for(i = 0; i < 10; i++){
        for(j = 0; j < 10; j++){
            MATRIZ_B[i][j] = rand() % 100;
        }
    }

    // Sinaliza que a matriz possue valores
    flag_B = 1;
}

// Função para atribuir valores a um elemente da matriz A
int elemento_matriz_A()
{
    // Variáveis
    int indice = 0, jndice = 0;

    // Interação com o usuário
    printf("PREENCHER VALOR A UM ELEMENTO DA MATRIZ A\n\n");

    // Verifica se a matriz possue tamanho válido
    if(flag_A == 0){
        // Indica o erro
        printf("ERRO: A MATRIZ NAO POSSUE UM TAMANHO DEFINIDO OU VALIDO\n");
    }
    else{
        // Interação com o usuário
        printf("ELEMENTO NA LINHA: ");
        scanf("%d", & indice);
        printf("ELEMENTO NA COLUNA: ");
        scanf("%d", & jndice);

        // Verifica se o usuário escreveu o elemento em uma posição válida
        if(indice <= 0 || indice > linha_A || jndice <= 0 || jndice > coluna_A){
            // Indica o erro
            printf("\nERRO: VOCE ESCOLHEU UMA POSICAO INVALIDA\n");
        }
        else{
            // Interação com o usuário
            printf("\nDIGITE O VALOR: ");
            scanf("%f", & MATRIZ_A[indice-1][jndice-1]);
        }
    }
}

// Função para atribuir valores a um elemente da matriz B
int elemento_matriz_B()
{
    // Variáveis
    int indice = 0, jndice = 0;

    // Interação com o usuário
    printf("PREENCHER VALOR A UM ELEMENTO DA MATRIZ B\n\n");

    // Verifica se a matriz possue tamanho válido
    if(flag_B == 0){
        // Indica o erro
        printf("ERRO: A MATRIZ NAO POSSUE UM TAMANHO DEFINIDO OU VALIDO\n");
    }
    else{
        // Interação com o usuário
        printf("ELEMENTO NA LINHA: ");
        scanf("%d", & indice);
        printf("ELEMENTO NA COLUNA: ");
        scanf("%d", & jndice);

        // Verifica se o usuário escreveu o elemento em uma posição válida
        if(indice <= 0 || indice > linha_B || jndice <= 0 || jndice > coluna_B){
            // Indica o erro
            printf("\nERRO: VOCE ESCOLHEU UMA POSICAO INVALIDA\n");
        }
        else{
            // Interação com o usuário
            printf("\nDIGITE O VALOR: ");
            scanf("%f", & MATRIZ_B[indice-1][jndice-1]);
        }
    }
}

// Função para soma e subtrair as duas matrizes
int operacao_basica()
{
    // Variáveis
    int i = 0, j = 0;

    // Verifica se as matrizes possuem um tamanho definido ou válido
    if(flag_A == 1 && flag_B == 1){
        // Verifica se as matrizes possuem o mesmo tamanho
        if(linha_A == linha_B && coluna_A == coluna_B){
            // Indica ao usuário que a operação ocorreu
            printf("OPERACAO REALIZADA\n");

            // Indica que a matriz C está pronta
            flag_C = 1;

            // Verifica qual a maior linha
            if(linha_A > linha_B){
                linha_C = linha_A;
            }
            else if(linha_B >= linha_A){
                linha_C = linha_B;
            }

            // Verifica qual a maior coluna
            if(coluna_A > coluna_B){
                coluna_C = coluna_A;
            }
            else if(coluna_B >= coluna_A){
                coluna_C = coluna_B;
            }

            // Realiza as operações
            for(i = 0; i < linha_C; i++){
                for(j = 0; j < coluna_C; j++){
                    // Verifica qual a operação requisitada
                    if(escolha == 7){
                        MATRIZ_C[i][j] = MATRIZ_A[i][j] + MATRIZ_B[i][j];
                    }
                    else if(escolha == 8){
                        MATRIZ_C[i][j] = MATRIZ_A[i][j] - MATRIZ_B[i][j];
                    }
                }
            }
        }
        else{
            // Informa o erro
            printf("ERRO: AS MATRIZES PRECISAM TER O MESMO TAMANHO\n");
        }
    }
    else{
        // Informa o erro
        printf("ERRO: UMA OU MAIS MATRIZ NAO POSSUI UM TAMANHO VALIDO\n");
    }
}

// Função para multiplicar as matrizes
int multiplicacao()
{
    // Variáveis
    float VETOR_A[10], VETOR_B[10];
    int indice = 0, linha_atual_A = 0, coluna_atual_B = 0, auxiliar = 0;

    // Verifica se as matrizes possuem tamanho válido
    if(flag_A == 1 && flag_B == 1){
        // Verifica se a coluna da matriz A é igual as linhas da matriz B
        if(coluna_A == linha_B){
            // Realiza a operação
			linha_C = linha_A;
			coluna_C = coluna_B;

			// Mostra sucesso
			printf("OPERACAO REALIZADA\n");

			// Laço Principal
			while(linha_atual_A < linha_A && coluna_atual_B < coluna_B){
				// Preenche o primeiro vetor
				for(indice = 0; indice < coluna_A; indice++){
					VETOR_A[indice] = MATRIZ_A[linha_atual_A][indice];
				}

				// Preenche o segundo vetor
				for(indice = 0; indice < coluna_A; indice++){
					VETOR_B[indice] = MATRIZ_B[indice][coluna_atual_B];
				}

				// Preenche o auxiliar
				for(indice = 0; indice < coluna_A; indice++){
					auxiliar += VETOR_A[indice] * VETOR_B[indice];
				}

				// Preenche a Matriz C
				MATRIZ_C[linha_atual_A][coluna_atual_B] = auxiliar;

				// Altera a linha
				coluna_atual_B = coluna_atual_B + 1;
				if(coluna_atual_B >= coluna_C){
					coluna_atual_B = 0;
					linha_atual_A = linha_atual_A + 1;
				}

				// Limpa o auxiliar
				auxiliar = 0;
			}

			// Indica flag
			flag_C = 1;
        }
        else{
            // indica o erro
            printf("ERRO: O NUMERO DE COLUNAS DA MATRIZ A DEVE SER IGUAL AO NUMERO DE LINHAS DA MATRIZ B\n");
        }
    }
    else{
        printf("ERRO: UMA OU MAIS MATRIZ NAO POSSUI UM TAMANHO VALIDO\n");
    }
}

// Função para imprimir matrizes
void imprimir_matriz(float matriz[10][10], int linha, int coluna, int flag_tamanho, char nome)
{
    // Variáveis
    int i = 0, j = 0;

    // Verifica se a matriz possue um tamanho válido
    if(flag_tamanho == 0){
        // Indica o erro
        printf("ERRO: A MATRIZ NAO ESTA DEFINIDA OU NAO TEM TAMANHO VALIDO\n");
    }
    else{
        // Interação com o usuário
        printf("IMPRIMIR MATRIZ %c\n\n", nome);

        // Imprime a matriz
        for(i = 0; i < linha; i++){
            for(j = 0; j < coluna; j++){
                printf("%.1f\t", matriz[i][j]);
            }
            // Pula linha antes do fim
            if(i < linha-1){
                printf("\n\n");
            }
        }

        // Pula linha
        printf("\n");
    }
}

// Função menu/switch
int menu()
{
     // Laço que segura o menu
     while(escolha != 13){
        // Principal
        printf("------------------------------------------\n");
        printf("(1) DEFINIR TAMANHO DA MATRIZ A\n");
        printf("(2) DEFINIR TAMANHO DA MATRIZ B\n");
        printf("(3) PREENCHER MATRIZ A COM VALOR ALEATORIO\n");
        printf("(4) PREENCHER MATRIZ B COM VALOR ALEATORIO\n");
        printf("(5) ATRIBUIR VALOR A UM ELEMENTO DA A\n");
        printf("(6) ATRIBUIR VALOR A UM ELEMENTO DA B\n");
        printf("(7) CALCULAR A + B\n");
        printf("(8) CALCULAR A - B\n");
        printf("(9) CALCULAR A * B\n");
        printf("(10) IMPRIMIR MATRIZ A\n");
        printf("(11) IMPRIMIR MATRIZ B\n");
        printf("(12) IMPRIMIR MATRIZ C\n");
        printf("(13) SAIR\n\n");
        printf("SUA ESCOLHA: ");
        scanf("%d", & escolha);
        printf("------------------------------------------\n");

        // Switch
        switch(escolha){
        case (1):
            tamanho_A();
            break;
        case (2):
            tamanho_B();
            break;
        case (3):
            aleatorio_A();
            break;
        case (4):
            aleatorio_B();
            break;
        case (5):
            elemento_matriz_A();
            break;
        case (6):
            elemento_matriz_B();
            break;
        case (7):
            operacao_basica();
            break;
        case (8):
            operacao_basica();
            break;
        case (9):
            multiplicacao();
            break;
        case (10):
            imprimir_matriz(MATRIZ_A, linha_A, coluna_A, flag_A, 'A');
            break;
        case (11):
            imprimir_matriz(MATRIZ_B, linha_B, coluna_B, flag_B, 'B');
            break;
        case (12):
            imprimir_matriz(MATRIZ_C, linha_C, coluna_C, flag_C, 'C');
            break;
        case (13):
            return 1;
        default:
            printf("ERRO: DIGITE UMA OPCAO VALIDA\n");
        }
    }
}

// Função principal
int main()
{
    menu();
}
