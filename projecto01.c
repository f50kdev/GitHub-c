#include <stdio.h>
#include <stdlib.h>

int main(){
	int idade = 0;
	int nota1 , nota2 , media;
	char nome;
	
	printf("\n O valor inciar da idade %d\n:" ,idade );
	printf("Insira a Sua idade");
	scanf("%d" ,&idade );
	printf("\n  A idade insirida foi : %d\n", idade);
	
	//progrma que Calcula
	//media final de uma prova 
	
	printf("Insira  o Seu nome\n");
	scanf("%s", &nome);
	
	//captura de notas
	
	printf("\n insira a sua primeira nota da  prova\n");
	scanf("%d", &nota1);
	
		printf("\n insira a sua primeira nota da  prova\n");
	scanf("%d", &nota2);
	
	media=(nota1+nota2)/2;
	
	printf("Senhor %c",nome);
	printf("sua media e de %d :" , media);
	
	
	
	
	
	
	
	return 0;
}