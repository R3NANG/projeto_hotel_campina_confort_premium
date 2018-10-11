// Em testes.

void quartos() {
	int quantidadeDeQuartos, op1, op2, cont;
	
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
					printf("\nnada\n");
					break;
				case 2:
					do {
						printf("\nDeseja Solicitar Cama Adicional? (Para criancas MENORES de 9 anos).\n");
						printf("1 - Sim / 2 - Nao : ");
						scanf("%d", &op2);
						switch(op2) {
							case 1:
								printf("\nSim.\n");
								break;
							case 2:
								printf("\nNao.\n");
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
								printf("\nSim.\n");
								break;
							case 2:
								printf("\nNao.\n");
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
								printf("\nSim.\n");
								break;
							case 2:
								printf("\nNao.\n");
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
								printf("\nSim.\n");
								break;
							case 2:
								printf("\nNao.\n");
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
								printf("\nSim.\n");
								break;
							case 2:
								printf("\nNao.\n");
								break;
							default:
								printf("\nOpcao Invalida.\n");
								system("pause");
								system("cls");
						}
					} while(op2 < 1 || op2 > 2);
					break;
				case 7:
					printf("\nnada\n");
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
}