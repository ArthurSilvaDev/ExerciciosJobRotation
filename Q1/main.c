#include <stdio.h>
#include <stdlib.h>

/* 1) Observe o trecho de c�digo abaixo:

int INDICE = 13, SOMA = 0, K = 0;

enquanto K < INDICE fa�a

{

K = K + 1;

SOMA = SOMA + K;

}

imprimir(SOMA);



Ao final do processamento, qual ser� o valor da vari�vel SOMA? */

int main(int argc, char *argv[]) {
	
int INDICE = 13;
int SOMA = 0;
int K = 0;

while(K < INDICE){
K = K + 1;
SOMA = SOMA + K;
}

printf("O valor de 'Soma' e: %d", SOMA);
	
	return 0;
}
