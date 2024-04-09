#include <stdio.h>
#include <conio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "portuguese");
	float valor1, valor2, resultado;
	char op;
	
	printf("Informe o valor 1: \n");
	scanf("%f", &valor1);
	
	printf("Informe o valor 2: \n");
	scanf("%f", &valor2);
	
	printf("Informe a operação (+|-|*|/): \n");
	op = getche();
	
	switch(op){
		case '+':
			resultado = valor1 + valor2;
			break;
		case '-':
			resultado = valor1 - valor2;
			break;
		case '*':
			resultado = valor1 * valor2;
			break;
		case '/':
			resultado = valor1 / valor2;
			break;
		default:
			printf("\n Operação Inválida!\n");
	}
	printf("\n\n Resultado: %.2f", resultado);
}
