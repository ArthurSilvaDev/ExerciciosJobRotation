#include <stdio.h>
#include <stdlib.h>

/* 2) Dado a sequ�ncia de Fibonacci, onde se inicia por 0 e 1 e o pr�ximo valor sempre ser� a soma dos 2 valores anteriores (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), escreva um programa na linguagem que desejar onde, informado um n�mero, ele calcule a sequ�ncia de Fibonacci e retorne uma mensagem avisando se o n�mero informado pertence ou n�o a sequ�ncia.



IMPORTANTE:

Esse n�mero pode ser informado atrav�s de qualquer entrada de sua prefer�ncia ou pode ser previamente definido no c�digo; */

int main(int argc, char *argv[]) {
	
	int num;
	int valorComp = 0; // Valor de compara��o
	int v1 = 0; // Valor para calculo
	int v2 = 1; // Valor para calculo
	
	printf("Digite o numero que deseja (precisa ser um numero inteiro): "); // usuario solicita
	scanf("%d", &num);
	
	if (num == 1 || num == 0){ //1 e 0 excluindo possibilidade de 0 e 1
		printf("Este numero pertence a sequencia de fibonaci");
	}
	
	else{ // caso n�o seja 0 ou 1
		
		while (valorComp < num){ //Calcula fibonaci enquanto o valor sendo calculado for menor que o numero informado
			valorComp = v1 + v2;
			v1 = v2;
			v2 = valorComp;
		}
		
		if(valorComp == num){
			printf(" %d Pertence a Fibonaci", num);
		}
		else{
			printf("%d nao pertence a Fibonaci", num);
		}
	}
	
	return 0;
}
