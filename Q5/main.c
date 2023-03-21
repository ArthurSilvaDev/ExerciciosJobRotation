#include <stdio.h>
#include <stdlib.h>

/*  Escreva um programa que inverta os caracteres de um string.



IMPORTANTE:

a) Essa string pode ser informada através de qualquer entrada de sua preferência ou pode ser previamente definida no código;

b) Evite usar funções prontas, como, por exemplo, reverse; */

void inverterPalavra(char str[]) {
    int a;
    int b;
    char palavra;
    
    int tamanho = strlen(str); // tamanho da segunda palavra = a primeira

    for (a = 0, b = tamanho - 1; a < b; a++, b--) {
        palavra = str[a]; // recebe
        str[a] = str[b]; // transfere
        str[b] = palavra; // devolve
    }
}


int main(int argc, char *argv[]) {
	
	char string[200];
	
	printf("Digite uma palavra ou frase: ");
	scanf("%[^\n]s", string);
	
	inverterPalavra(string);
	
	printf("String ao contrario: %s", string);
	
	return 0;
}
