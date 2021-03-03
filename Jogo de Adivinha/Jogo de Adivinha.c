#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <windows.h>
int main (){
    setlocale(LC_ALL, "pt_BR");
    srand(time(NULL));
    int tentativas = 0;
    int a = (rand() % 15) + 1 , b, i = 0;
    int vetor [15];
    printf("Tenta advinhar o numero que estou pensando, dica: é um nº entre 1 e 15\n");
    do{
        printf("Digite um número: ", a);
            scanf("%d", &b);
                if (b == a){
                    printf("Parabéns, você acertou após %d tentativa(s)\n", tentativas);
                    i++;
                    system("pause");
            }
                else if (b < a){
                    printf("O número digitado é menor do que o número certo.\n");
                    tentativas++;
            }
                else if (b > a){
                    printf("O número digitado é maior do que o número certo.\n");
                    tentativas++;
            }
        }while(i < 1);
}
