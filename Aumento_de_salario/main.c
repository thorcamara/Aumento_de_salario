#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	float sal, perc, aumento, novo_sal;
	
	printf("Insira o salario:\n");
	scanf("%f", &sal);
	
	printf("Insira o percentual de aumento:\n");
	scanf("%f", &perc);
	
	aumento = sal * perc/100;
	novo_sal = sal + aumento;
	
	printf("\nValor do aumento: %.2f.\n", aumento);
	printf("\nValor do novo salario: %.2f.\n", novo_sal);
	
	return 0;
}
