#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include "funcoes.h"

void cabecalho() {
	system("cls");
	printf("===================================\n");
	printf("   HOTEL CAMPINA CONFORT PREMIUM\n");
	printf("===================================\n");
}

main() {
	login();
	int op1 = 0;
	
	while(1) {
		do {
			cabecalho();
			printf("\n1 - Check-in.\n");
			printf("2 - Check-out.\n");
			printf("3 - Listar Contratos.\n");
			printf("4 - Pesquisar Contrato.\n");
			printf("5 - Pesquisar e Modificar Contrato.\n");
			printf("6 - Listar Contratos Abertos.\n");
			printf("7 - Listar Contratos Fechados.\n");
			printf("8 - Sair do Programa.\n");
			printf("Qual opcao voce deseja?: ");
			scanf("%d", &op1);
		
			switch(op1) {
				case 1:
					recebimento = dadoscliente(recebimento);
					recebimento = quartos(recebimento);
					recebimento = babysitter(recebimento);
					recebimento = alugueldecarro(recebimento);
					
					recebimento.statusContrato = 1;
					recebimento.gastosTotais += recebimento.gastosQuartos + recebimento.gastosBabysitter + recebimento.gastosAluguelDeCarro;
					
					p_contrato = fopen("contratos.dat", "ab+");
					if(p_contrato == NULL) {
						printf("\nFalha na Criacao do Contrato!\n");
						system("pause");
						exit(1);
					}
					fwrite(&recebimento, sizeof(HOSPEDE), 1, p_contrato);
					fclose(p_contrato);
					break;
				case 2:
					checkout(recebimento);
					break;
				case 3:
					listarcontratos(recebimento);
					break;
				case 4:
					pesquisarcontrato(recebimento);
					break;
				case 5:
					alterarcontrato(recebimento);
					break;
				case 6:
					contratosabertos(recebimento);
					break;
				case 7:
					contratosfechados(recebimento);
					break;
				case 8:
					printf("\nPrograma Encerrado.\n");
					system("pause");
					return 0;
					break;
				default:
					printf("\nOpcao Invalida.\n");
					system("pause");
					break;
			}
		} while(op1 < 1 || op1 > 8);
	}
}