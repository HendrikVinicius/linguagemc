#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
	Sistema de gest�o escola
	@autor Hendrik Vinicius
*/

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"Portuguese");
	printf(" ______   ______   __  __            _       _                 _       \n");
	printf("|  ____| |  ____| |  \\/  |          (_)     | |               | |      \n");
	printf("| |__    | |__    | \\  / | __ _ _ __ _ _ __ | |__   __ _    __| | ___  \n");
	printf("|  __|   |  __|   | |\\/| |/ _` | '__| | '_ \\| '_ \\ / _` |  / _` |/ _ \\ \n");
	printf("| |____ _| |____  | |  | | (_| | |  | | | | | | | | (_| | | (_| | (_) |\n");
	printf("|______(_)______| |_|  |_|\\__,_|_|  |_|_| |_|_| |_|\\__,_|  \\__,_|\\___/ \n");
                                                                       
                                                                       
	printf(" ____                _ _ \n");
	printf("|  _ \\              (_) |\n");
	printf("| |_) |_ __ __ _ ___ _| |\n");
	printf("|  _ <| '__/ _` / __| | |\n");
	printf("| |_) | | | (_| \\__ \\ | |\n");
	printf("|____/|_|  \\__,_|___/_|_|\n");
                         
	printf("\n");
	system("pause");
	system("cls");
	// Entrada de dados
	char aluno[50];
	char sexo;
	int idade;
	float altura;
	char disciplina[50];
	printf("CADASTRO DE ALUNO \n\n");
	printf("Nome do aluno(a): ");
	gets(aluno);
	printf("Sexo(M/F): ");
	scanf("%c",&sexo);
	printf("Idade: ");
	scanf("%d", &idade);
	printf("Disciplina: ");
	gets(disciplina);
	
	printf("\n");
	printf("_____________________________\n");
	system("pause");
	system("cls");

	//vari�veis
	float nota1,nota2,media;
	//entrada
	printf("Digite a nota 1: ");
	scanf("%f",&nota1);
	printf("Digite a nota 2: ");
	scanf("%f",&nota2);
	//processamento
	media = (nota1 + nota2) / 2;
	//sa�da
	printf("Resultado: %.1f\n", media);
	
	system("pause");
	return 0;
}