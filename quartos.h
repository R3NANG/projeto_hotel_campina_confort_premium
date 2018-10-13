float quartos(int altatemp) {
	int quantidadeDeQuartos, op1, op2, cont;
	float aux1 = 0, aux2 = 0, aux3 = 0, aux4 = 0, aux5 = 0, aux6 = 0, aux7 = 0;
	p_contrato = fopen("contratos.txt", "a");
	if(p_contrato == NULL) {
		printf("\nFalha na Criacao do Contrato!");
		system("pause");
		return 0;
	}
	
	do {
		printf("Digite a Quantidade de Quartos: ");
		scanf("%d", &quantidadeDeQuartos);
		
		if(quantidadeDeQuartos > 0) {
			for(cont = 1; cont <= quantidadeDeQuartos; cont++) {
			printf("\nDigite o Tipo do Quarto %d\n", cont);
			printf("Tipos de Quartos:\n");
			printf("1 - Presidencial.\n");
			printf("2 - Luxo Simples.\n");
			printf("3 - Luxo Duplo.\n");
			printf("4 - Luxo Triplo.\n");
			printf("5 - Executivo Simples.\n");
			printf("6 - Executivo Duplo.\n");
			printf("7 - Executivo Triplo.\n");
			printf("Qual opcao voce deseja?: ");
			scanf("%d", &op1);
				
			switch(op1) {
				case 1:
					printf("\nAdicionado ao Contrato!\n");
					if(altatemp == 1) {
						aux1 = 1200 * 1.25;
					}
					if(altatemp == 2) {
						aux1 = 1200;
					}
					fprintf(p_contrato, "Quarto Presidencial no Valor de: %.2f\n", aux1);
					break;
				case 2:
					do {
						printf("\nDeseja Solicitar Cama Adicional? (Para criancas MENORES de 9 anos).\n");
						printf("1 - Sim / 2 - Nao : ");
						scanf("%d", &op2);
						switch(op2) {
							case 1:
								printf("\nAdicionado ao Contrato!\n");
								if(altatemp == 1) {
									aux2 = 520 * 1.25;
								}
								if(altatemp == 2) {
									aux2 = 520;
								}
								fprintf(p_contrato, "Quarto de Luxo Simples COM Cama Adicional no Valor de: %.2f\n", aux2);
								break;
							case 2:
								printf("\nAdicionado ao Contrato!\n");
								if(altatemp == 1) {
									aux2 = 520 * 1.25;
								}
								if(altatemp == 2) {
									aux2 = 520;
								}
								fprintf(p_contrato, "Quarto de Luxo Simples SEM Cama Adicional no Valor de: %.2f\n", aux2);
								break;
							default:
								printf("\nOpcao Invalida.\n");
								system("pause");
								system("cls");
						}
					} while(op2 < 1 || op2 > 2);
					break;
				case 3:
					do {
						printf("\nDeseja Solicitar Cama Adicional? (Para criancas MENORES de 9 anos).\n");
						printf("1 - Sim / 2 - Nao : ");
						scanf("%d", &op2);
						switch(op2) {
							case 1:
								printf("\nAdicionado ao Contrato!\n");
								if(altatemp == 1) {
									aux3 = 570 * 1.25;
								}
								if(altatemp == 2) {
									aux3 = 570;
								}
								fprintf(p_contrato, "Quarto de Luxo Duplo COM Cama Adicional no Valor de: %.2f\n", aux3);
								break;
							case 2:
								printf("\nAdicionado ao Contrato!\n");
								if(altatemp == 1) {
									aux3 = 570 * 1.25;
								}
								if(altatemp == 2) {
									aux3 = 570;
								}
								fprintf(p_contrato, "Quarto de Luxo Duplo SEM Cama Adicional no Valor de: %.2f\n", aux3);
								break;
							default:
								printf("\nOpcao Invalida.\n");
								system("pause");
								system("cls");
						}
					} while(op2 < 1 || op2 > 2);
					break;
				case 4:
					do {
						printf("\nDeseja Solicitar Cama Adicional? (Para criancas MENORES de 9 anos).\n");
						printf("1 - Sim / 2 - Nao : ");
						scanf("%d", &op2);
						switch(op2) {
							case 1:
								printf("\nAdicionado ao Contrato!\n");
								if(altatemp == 1) {
									aux4 = 620 * 1.25;
								}
								if(altatemp == 2) {
									aux4 = 620;
								}
								fprintf(p_contrato, "Quarto de Luxo Triplo COM Cama Adicional no Valor de: %.2f\n", aux4);
								break;
							case 2:
								printf("\nAdicionado ao Contrato!\n");
								if(altatemp == 1) {
									aux4 = 620 * 1.25;
								}
								if(altatemp == 2) {
									aux4 = 620;
								}
								fprintf(p_contrato, "Quarto de Luxo Triplo SEM Cama Adicional no Valor de: %.2f\n", aux4);
								break;
							default:
								printf("\nOpcao Invalida.\n");
								system("pause");
								system("cls");
						}
					} while(op2 < 1 || op2 > 2);
					break;
				case 5:
					do {
						printf("\nDeseja Solicitar Cama Adicional? (Para criancas MENORES de 9 anos).\n");
						printf("1 - Sim / 2 - Nao : ");
						scanf("%d", &op2);
						switch(op2) {
							case 1:
								printf("\nAdicionado ao Contrato!\n");
								if(altatemp == 1) {
									aux5 = 360 * 1.25;
								}
								if(altatemp == 2) {
									aux5 = 360;
								}
								fprintf(p_contrato, "Quarto Executivo Simples COM Cama Adicional no Valor de: %.2f\n", aux5);
								break;
							case 2:
								printf("\nAdicionado ao Contrato!\n");
								if(altatemp == 1) {
									aux5 = 360 * 1.25;
								}
								if(altatemp == 2) {
									aux5 = 360;
								}
								fprintf(p_contrato, "Quarto Executivo Simples SEM Cama Adicional no Valor de: %.2f\n", aux5);
								break;
							default:
								printf("\nOpcao Invalida.\n");
								system("pause");
								system("cls");
						}
					} while(op2 < 1 || op2 > 2);
					break;
				case 6:
					do {
						printf("\nDeseja Solicitar Cama Adicional? (Para criancas MENORES de 9 anos).\n");
						printf("1 - Sim / 2 - Nao : ");
						scanf("%d", &op2);
						switch(op2) {
							case 1:
								printf("\nAdicionado ao Contrato!\n");
								if(altatemp == 1) {
									aux6 = 385 * 1.25;
								}
								if(altatemp == 2) {
									aux6 = 385;
								}
								fprintf(p_contrato, "Quarto Executivo Duplo COM Cama Adicional no Valor de: %.2f\n", aux6);
								break;
							case 2:
								printf("\nAdicionado ao Contrato!\n");
								if(altatemp == 1) {
									aux6 = 385 * 1.25;
								}
								if(altatemp == 2) {
									aux6 = 385;
								}
								fprintf(p_contrato, "Quarto Executivo Duplo SEM Cama Adicional no Valor de: %.2f\n", aux6);
								break;
							default:
								printf("\nOpcao Invalida.\n");
								system("pause");
								system("cls");
						}
					} while(op2 < 1 || op2 > 2);
					break;
				case 7:
					printf("\nAdicionado ao Contrato!\n");
					if(altatemp == 1) {
						aux7 = 440 * 1.25;
					}
					if(altatemp == 2) {
						aux7 = 440;
					}
					fprintf(p_contrato, "Quarto Executivo Triplo no Valor de: %.2f\n", aux7);
					break;
				default:
					printf("\nOpcao Invalida.\n");
					cont--;
					system("pause");
					system("cls");
			}
			}
		} else {
			printf("\nQuantidade Invalida.\n");
			system("pause");
			system("cls");
		}
	} while(quantidadeDeQuartos < 1);
	fclose(p_contrato);
	return aux1 + aux2 + aux3 + aux4 + aux5 + aux6 + aux7;
}