#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcoes.h"

FILE *tamanhodocontrato;

void cabecalho() {
	system("cls");
	printf("===================================\n");
	printf("   HOTEL CAMPINA CONFORT PREMIUM\n");
	printf("===================================\n");
}

main() {
	//login();
	int op1 = 0, op2 = 0, tamContrato = 0, i = 0;
	float soma1 = 0, soma2 = 0, soma3 = 0, somafinal = 0;
	char listarContratos[tamContrato];
	
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
					//recebimento = dadoscliente(recebimento);
					
					do {
						cabecalho();
						printf("\nDigite a Quantidade de Noites que o Hospede ficara Hospedado:\n");
						scanf("%d", &recebimento.qntdenoites);
						if(recebimento.qntdenoites <= 0) {
							printf("Quantidade Invalida.\n");
							system("pause");
						}
						else {
							printf("Adicionado ao Contrato!\n");
							system("pause");
						}
					} while(recebimento.qntdenoites <= 0);
					
					do {
						cabecalho();
						printf("\nO Hospede Deseja se Hospedar em Epoca de Alta Estacao? (ex: Natal, Reveillon, etc.)\n");
						printf("1 - Sim / 2 - Nao: ");
						scanf("%d", &recebimento.altatemp);
						switch(recebimento.altatemp) {
							case 1:
								printf("Adicionado ao Contrato!\n");
								system("pause");
								break;
							case 2:
								printf("Adicionado ao Contrato!\n");
								system("pause");
								break;
							default:
								printf("Opcao Invalida.\n");
								system("pause");
								break;
						}
					} while(recebimento.altatemp < 1 || recebimento.altatemp > 2);
					
					//recebimento = quartos(recebimento);
					recebimento = babysitter(recebimento);
					
					p_contrato = fopen("contratos.dat", "a");
					if(p_contrato == NULL) {
						printf("\nFalha na Criacao do Contrato!\n");
						system("pause");
						return 0;
					}
					fwrite(&recebimento, sizeof(HOSPEDE), 1, p_contrato);
					fclose(p_contrato);
					return 0;
					/*soma3 = alugueldecarro(altatemp, qntdenoites);
					somafinal = soma1 + soma2 + soma3;
					tamanhodocontrato = fopen("tamanhodocontrato.txt", "r");
					fscanf(tamanhodocontrato, "%d", &tamContrato);
					fclose(tamanhodocontrato);
					tamContrato += 1000;
					tamanhodocontrato = fopen("tamanhodocontrato.txt", "w");
					fprintf(tamanhodocontrato, "%d", tamContrato);
					fclose(tamanhodocontrato);
					p_contrato = fopen("contratos.dat", "a");
					fprintf(p_contrato, "SOMA TOTAL: %.2f\n", somafinal);
					fprintf(p_contrato, "Status do Contrato: [ABERTO]\n\n");
					fclose(p_contrato);*/
					break;
				case 2:
					/*p_contrato = fopen("contratos.dat", "r");
					printf("\n");
					while(fread(&recebimento, sizeof(HOSPEDE), 1, p_contrato)) {
        				printf("CPF: %s", recebimento.cpf);
        				printf("Nome: %s", recebimento.nome);
        				printf("Endereco de Residencia: %s", recebimento.endereco);
        				printf("Bandeira do Cartao de Credito: %s", recebimento.tipodocartao);
        				printf("Numero do Cartao (CVV): %s", recebimento.numerodocartao);
        				printf("Validade do Cartao: %s", recebimento.validadedocartao);
        				printf("Codigo de Seguranca do Cartao: %s", recebimento.codigodeseguranca);
        				printf("Data Inicial da Hospedagem: %s\n", recebimento.dataInicial);
    				}
    				fclose(p_contrato);
    				system("pause");*/
					break;
				case 3:
					listarcontratos(recebimento);
    				system("pause");
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
		} while(op1 < 1 || op1 > 5);
	}
}