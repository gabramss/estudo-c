#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

void criaVetor (float *vetor, int tamanho){ //Cria um vetor
    setlocale(LC_ALL, "");
    for (int i = 0; i < tamanho; i++){
        printf("Digite um valor para o �ndice [%i] do Vetor: ", i);
        scanf("%f", &vetor[i]);
    }
    Sleep(200);
    printf(".");
    Sleep(200);
    printf(".");
    Sleep(200);
    printf(".");
    Sleep(200);
    system("CLS");
    printf("Os valores s�o\n");
    criaLinha(tamanho);
    for (int mostraVetor = 0; mostraVetor < tamanho; mostraVetor++){
        Sleep(100);
        printf("%.2f ", vetor[mostraVetor]);
    }
}
void criaLinha (int tamanhoLinha){ //Cria as linhas para a est�tica do programa
    for (int linha = 0; linha < tamanhoLinha ; linha++){
        Sleep(80);
        printf("-----");
    }
    printf("\n");
}
int main (){ //Roda o programa
    setlocale(LC_ALL, "");
    int tam;
    printf("Digite um n�mero para o tamanho do vetor: ");
    scanf("%i", &tam);
    int v[tam];
    criaVetor(v, tam);
    printf("\n");
    criaLinha(tam);
}
