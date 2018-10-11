#include <stdio.h>
#include <string.h>
#include "login.h"
#include "quartos.h"

main() {
	//login();
	int op1;
	do {
		printf("1 - Check-in.");
		printf("\n2 - Check-out.");
		printf("\n3 - Pesquisa de Contrato.");
		printf("\n4 - Sair do Programa.");
		printf("\nQual opcao voce deseja?: ");
		scanf("%d", &op1);
	
		switch(op1) {
			case 1:
				//quartos();
				printf("sla");
				break;
			case 2:
				printf("slaoq");
				break;
			case 3:
				printf("slaoqtb");
				break;
			case 4:
				printf("\nPrograma Encerrado.");
				break;
			default:
				printf("\nOpcao Invalida.\n");
				system("pause");
				system("cls");
				break;
		}
	} while(op1 < 1 || op1 > 4);
}