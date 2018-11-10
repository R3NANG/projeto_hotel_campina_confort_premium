#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "login.h"
#include "dados.h"
#include "quartos.h"
#include "babysitter.h"
#include "alugueldecarro.h"

void cabecalho() {
	system("cls");
	printf("===================================\n");
	printf("   HOTEL CAMPINA CONFORT PREMIUM\n");
	printf("===================================\n");
}

main() {
	login();
	int op1, altatemp, qntdenoites;
	float soma1 = 0, soma2 = 0, soma3 = 0;
	
	while(1) {
		do {
			cabecalho();
			printf("\n1 - Check-in.\n");
			printf("2 - Check-out.\n");
			printf("3 - Listar Contratos.\n");
			printf("4 - Pesquisar Contrato.\n");
			printf("5 - Sair do Programa.\n");
			printf("Qual opcao voce deseja?: ");
			scanf("%d", &op1);
		
			switch(op1) {
				case 1:
					dados();
					p_contrato = fopen("contratos.txt", "a");
					if(p_contrato == NULL) {
						printf("\nFalha na Criacao do Contrato!\n");
						system("pause");
						return 0;
					}
					
					do {
						cabecalho();
						printf("\nDigite a Quantidade de Noites que o Hospede ficara Hospedado:\n");
						scanf("%d", &qntdenoites);
						if(qntdenoites <= 0) {
							printf("Quantidade Invalida.\n");
							system("pause");
						}
						else {
							fprintf(p_contrato, "Quantidade de Noites Hospedado: %d\n", qntdenoites);
							printf("Adicionado ao Contrato!\n");
							system("pause");
						}
					} while(qntdenoites <= 0);
						
					do {
						cabecalho();
						printf("\nO Hospede Deseja se Hospedar em Epoca de Alta Estacao? (ex: Natal, Reveillon, etc.)\n");
						printf("1 - Sim / 2 - Nao: ");
						scanf("%d", &altatemp);
						switch(altatemp) {
							case 1:
								printf("Adicionado ao Contrato!\n");
								system("pause");
								fprintf(p_contrato, "Hospede Hospedado em Epoca de Alta Estacao.\n");
								break;
							case 2:
								printf("Adicionado ao Contrato!\n");
								system("pause");
								fprintf(p_contrato, "Hospede Hospedado em Epoca Normal.\n");
								break;
							default:
								printf("Opcao Invalida.\n");
								system("pause");
								break;
						}
					} while(altatemp < 1 || altatemp > 2);
					
					fclose(p_contrato);
					soma1 = quartos(altatemp);
					soma1 *= qntdenoites;
					soma2 = babysitter(altatemp, qntdenoites);
					soma3 = alugueldecarro(altatemp, qntdenoites);
					
					struct final {
						float somafinal;
					};
					
					struct final soma;
					
					soma.somafinal = soma1 + soma2 + soma3;
					
					p_contrato = fopen("contratos.txt", "a");
					fprintf(p_contrato, "SOMA TOTAL: %.2f\n\n", soma.somafinal);
					fclose(p_contrato);
					break;
				case 2:
					printf("slaoq");
					break;
				case 3:
					printf("slaoqtb");
					break;
				case 4:
					printf("slaoqtb2");
					break;
				case 5:
					printf("\nPrograma Encerrado.\n");
					system("pause");
					return 0;
					break;
				default:
					printf("\nOpcao Invalida.\n");
					system("pause");
					break;
			}
		} while(op1 < 1 || op1 > 4);
	}
}