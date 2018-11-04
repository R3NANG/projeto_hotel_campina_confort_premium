FILE *p_qntdequartos;

float quartos(int altatemp) {
	p_qntdequartos = fopen("qntdequartos.txt", "r");
	if(p_qntdequartos == NULL) {
		printf("\nFalha na Criacao do Contrato!");
		system("pause");
		return 0;
	}
	int p, ls, ld, lt, es, ed, et;
	fscanf(p_qntdequartos, "%d %d %d %d %d %d %d", &p, &ls, &ld, &lt, &es, &ed, &et);
	fclose(p_qntdequartos);
	int quantidadeDeQuartos, op1, op2, cont;
	float aux1 = 0, aux2 = 0, aux3 = 0, aux4 = 0, aux5 = 0, aux6 = 0, aux7 = 0, aux11 = 0, aux22 = 0, aux33 = 0, aux44 = 0, aux55 = 0, aux66 = 0, aux77 = 0, auxfinal = 0;
	p_contrato = fopen("contratos.txt", "a");
	if(p_contrato == NULL) {
		printf("\nFalha na Criacao do Contrato!\n");
		system("pause");
		return 0;
	}
	
	do {
		cabecalho();
		printf("\nDigite a Quantidade de Quartos: ");
		scanf("%d", &quantidadeDeQuartos);
		
		if(quantidadeDeQuartos > 0) {
			for(cont = 1; cont <= quantidadeDeQuartos; cont++) {
				cabecalho();
				p_qntdequartos = fopen("qntdequartos.txt", "w");
				if(p_qntdequartos == NULL) {
					printf("\nFalha na Quantidade de Quartos!\n");
					system("pause");
					return 0;
				}
				aux11 = 0, aux22 = 0, aux33 = 0, aux44 = 0, aux55 = 0, aux66 = 0, aux77 = 0;
				printf("\nDigite o Tipo do Quarto %d\n", cont);
				printf("Quantidade de Quartos Disponiveis:\n");
				printf("| Presidencial: %d | Luxo Simples: %d | Luxo Duplo: %d | Luxo Triplo: %d |\n| Executivo Simples: %d | Executivo Duplo: %d | Executivo Triplo: %d |\n", p, ls, ld, lt, es, ed, et);
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
						if(altatemp == 1) {
							if(p > 0) {
								printf("Adicionado ao Contrato!\n");
								system("pause");
								aux1 = 1200 * 1.25;
								aux11 = aux1;
								aux1 = 0;
								p--;
								fprintf(p_contrato, "Quarto Presidencial no Valor de: %.2f\n", aux11);
								fprintf(p_qntdequartos, "%d %d %d %d %d %d %d", p, ls, ld, lt, es, ed, et);
								fclose(p_qntdequartos);
							}
							else {
								printf("Quarto Indisponivel.\n");
								system("pause");
								cont--;
							}
						}
						if(altatemp == 2) {
							if(p > 0) {
								printf("Adicionado ao Contrato!\n");
								system("pause");
								aux1 = 1200;
								aux11 = aux1;
								aux1 = 0;
								p--;
								fprintf(p_contrato, "Quarto Presidencial no Valor de: %.2f\n", aux11);
								fprintf(p_qntdequartos, "%d %d %d %d %d %d %d", p, ls, ld, lt, es, ed, et);
								fclose(p_qntdequartos);
							}
							else {
								printf("Quarto Indisponivel.\n");
								system("pause");
								cont--;
							}
						}
						break;
					case 2:
						do {
							cabecalho();
							printf("\nDeseja Solicitar Cama Adicional? (Para criancas MENORES de 9 anos).\n");
							printf("1 - Sim / 2 - Nao : ");
							scanf("%d", &op2);
							switch(op2) {
								case 1:
									if(altatemp == 1) {
										if(ls > 0) {
											printf("Adicionado ao Contrato!\n");
											system("pause");
											aux2 = 520 * 1.25;
											aux22 = aux2;
											aux2 = 0;
											ls--;
											fprintf(p_contrato, "Quarto de Luxo Simples COM Cama Adicional no Valor de: %.2f\n", aux22);
											fprintf(p_qntdequartos, "%d %d %d %d %d %d %d", p, ls, ld, lt, es, ed, et);
											fclose(p_qntdequartos);
										}
										else {
											printf("Quarto Indisponivel.\n");
											system("pause");
											cont--;
										}
									}
									if(altatemp == 2) {
										if(ls > 0) {
											printf("Adicionado ao Contrato!\n");
											system("pause");
											aux2 = 520;
											aux22 = aux2;
											aux2 = 0;
											ls--;
											fprintf(p_contrato, "Quarto de Luxo Simples COM Cama Adicional no Valor de: %.2f\n", aux22);
											fprintf(p_qntdequartos, "%d %d %d %d %d %d %d", p, ls, ld, lt, es, ed, et);
											fclose(p_qntdequartos);
										}
										else {
											printf("Quarto Indisponivel.\n");
											system("pause");
											cont--;
										}
									}
									break;
								case 2:
									if(altatemp == 1) {
										if(ls > 0) {
											printf("Adicionado ao Contrato!\n");
											system("pause");
											aux2 = 520 * 1.25;
											aux22 = aux2;
											aux2 = 0;
											ls--;
											fprintf(p_contrato, "Quarto de Luxo Simples SEM Cama Adicional no Valor de: %.2f\n", aux22);
											fprintf(p_qntdequartos, "%d %d %d %d %d %d %d", p, ls, ld, lt, es, ed, et);
											fclose(p_qntdequartos);
										}
										else {
											printf("Quarto Indisponivel.\n");
											system("pause");
											cont--;
										}
									}
									if(altatemp == 2) {
										if(ls > 0) {
											printf("Adicionado ao Contrato!\n");
											system("pause");
											aux2 = 520;
											aux22 = aux2;
											aux2 = 0;
											ls--;
											fprintf(p_contrato, "Quarto de Luxo Simples SEM Cama Adicional no Valor de: %.2f\n", aux22);
											fprintf(p_qntdequartos, "%d %d %d %d %d %d %d", p, ls, ld, lt, es, ed, et);
											fclose(p_qntdequartos);
										}
										else {
											printf("Quarto Indisponivel.\n");
											system("pause");
											cont--;
										}
									}
									break;
								default:
									printf("\nOpcao Invalida.\n");
									system("pause");
									break;
							}
						} while(op2 < 1 || op2 > 2);
						break;
					case 3:
						do {
							cabecalho();
							printf("\nDeseja Solicitar Cama Adicional? (Para criancas MENORES de 9 anos).\n");
							printf("1 - Sim / 2 - Nao : ");
							scanf("%d", &op2);
							switch(op2) {
								case 1:
									if(altatemp == 1) {
										if(ld > 0) {
											printf("Adicionado ao Contrato!\n");
											system("pause");
											aux3 = 570 * 1.25;
											aux33 = aux3;
											aux3 = 0;
											ld--;
											fprintf(p_contrato, "Quarto de Luxo Duplo COM Cama Adicional no Valor de: %.2f\n", aux33);
											fprintf(p_qntdequartos, "%d %d %d %d %d %d %d", p, ls, ld, lt, es, ed, et);
											fclose(p_qntdequartos);
										}
										else {
											printf("Quarto Indisponivel.\n");
											system("pause");
											cont--;
										}
									}
									if(altatemp == 2) {
										if(ld > 0) {
											printf("Adicionado ao Contrato!\n");
											system("pause");
											aux3 = 570;
											aux33 = aux3;
											aux3 = 0;
											ld--;
											fprintf(p_contrato, "Quarto de Luxo Duplo COM Cama Adicional no Valor de: %.2f\n", aux33);
											fprintf(p_qntdequartos, "%d %d %d %d %d %d %d", p, ls, ld, lt, es, ed, et);
											fclose(p_qntdequartos);
										}
										else {
											printf("Quarto Indisponivel.\n");
											system("pause");
											cont--;
										}
									}
									break;
								case 2:
									if(altatemp == 1) {
										if(ld > 0) {
											printf("Adicionado ao Contrato!\n");
											system("pause");
											aux3 = 570 * 1.25;
											aux33 = aux3;
											aux3 = 0;
											ld--;
											fprintf(p_contrato, "Quarto de Luxo Duplo SEM Cama Adicional no Valor de: %.2f\n", aux33);
											fprintf(p_qntdequartos, "%d %d %d %d %d %d %d", p, ls, ld, lt, es, ed, et);
											fclose(p_qntdequartos);
										}
										else {
											printf("Quarto Indisponivel.\n");
											system("pause");
											cont--;
										}
									}
									if(altatemp == 2) {
										if(ld > 0) {
											printf("Adicionado ao Contrato!\n");
											system("pause");
											aux3 = 570;
											aux33 = aux3;
											aux3 = 0;
											ld--;
											fprintf(p_contrato, "Quarto de Luxo Duplo SEM Cama Adicional no Valor de: %.2f\n", aux33);
											fprintf(p_qntdequartos, "%d %d %d %d %d %d %d", p, ls, ld, lt, es, ed, et);
											fclose(p_qntdequartos);
										}
										else {
											printf("Quarto Indisponivel.\n");
											system("pause");
											cont--;
										}
									}
									break;
								default:
									printf("\nOpcao Invalida.\n");
									system("pause");
									break;
							}
						} while(op2 < 1 || op2 > 2);
						break;
					case 4:
						do {
							cabecalho();
							printf("\nDeseja Solicitar Cama Adicional? (Para criancas MENORES de 9 anos).\n");
							printf("1 - Sim / 2 - Nao : ");
							scanf("%d", &op2);
							switch(op2) {
								case 1:
									if(altatemp == 1) {
										if(lt > 0) {
											printf("Adicionado ao Contrato!\n");
											system("pause");
											aux4 = 620 * 1.25;
											aux44 = aux4;
											aux4 = 0;
											lt--;
											fprintf(p_contrato, "Quarto de Luxo Triplo COM Cama Adicional no Valor de: %.2f\n", aux44);
											fprintf(p_qntdequartos, "%d %d %d %d %d %d %d", p, ls, ld, lt, es, ed, et);
											fclose(p_qntdequartos);
										}
										else {
											printf("Quarto Indisponivel.\n");
											system("pause");
											cont--;
										}
									}
									if(altatemp == 2) {
										if(lt > 0) {
											printf("Adicionado ao Contrato!\n");
											system("pause");
											aux4 = 620;
											aux44 = aux4;
											aux4 = 0;
											lt--;
											fprintf(p_contrato, "Quarto de Luxo Triplo COM Cama Adicional no Valor de: %.2f\n", aux44);
											fprintf(p_qntdequartos, "%d %d %d %d %d %d %d", p, ls, ld, lt, es, ed, et);
											fclose(p_qntdequartos);
										}
										else {
											printf("Quarto Indisponivel.\n");
											system("pause");
											cont--;
										}
									}
									break;
								case 2:
									if(altatemp == 1) {
										if(lt > 0) {
											printf("Adicionado ao Contrato!\n");
											system("pause");
											aux4 = 620 * 1.25;
											aux44 = aux4;
											aux4 = 0;
											lt--;
											fprintf(p_contrato, "Quarto de Luxo Triplo SEM Cama Adicional no Valor de: %.2f\n", aux44);
											fprintf(p_qntdequartos, "%d %d %d %d %d %d %d", p, ls, ld, lt, es, ed, et);
											fclose(p_qntdequartos);
										}
										else {
											printf("Quarto Indisponivel.\n");
											system("pause");
											cont--;
										}
									}
									if(altatemp == 2) {
										if(lt > 0) {
											printf("Adicionado ao Contrato!\n");
											system("pause");
											aux4 = 620;
											aux44 = aux4;
											aux4 = 0;
											lt--;
											fprintf(p_contrato, "Quarto de Luxo Triplo SEM Cama Adicional no Valor de: %.2f\n", aux44);
											fprintf(p_qntdequartos, "%d %d %d %d %d %d %d", p, ls, ld, lt, es, ed, et);
											fclose(p_qntdequartos);
										}
										else {
											printf("Quarto Indisponivel.\n");
											system("pause");
											cont--;
										}
									}
									break;
								default:
									printf("\nOpcao Invalida.\n");
									system("pause");
									break;
							}
						} while(op2 < 1 || op2 > 2);
						break;
					case 5:
						do {
							cabecalho();
							printf("\nDeseja Solicitar Cama Adicional? (Para criancas MENORES de 9 anos).\n");
							printf("1 - Sim / 2 - Nao : ");
							scanf("%d", &op2);
							switch(op2) {
								case 1:
									if(altatemp == 1) {
										if(es > 0) {
											printf("Adicionado ao Contrato!\n");
											system("pause");
											aux5 = 360 * 1.25;
											aux55 = aux5;
											aux5 = 0;
											es--;
											fprintf(p_contrato, "Quarto Executivo Simples COM Cama Adicional no Valor de: %.2f\n", aux55);
											fprintf(p_qntdequartos, "%d %d %d %d %d %d %d", p, ls, ld, lt, es, ed, et);
											fclose(p_qntdequartos);
										}
										else {
											printf("Quarto Indisponivel.\n");
											system("pause");
											cont--;
										}
									}
									if(altatemp == 2) {
										if(es > 0) {
											printf("Adicionado ao Contrato!\n");
											system("pause");
											aux5 = 360;
											aux55 = aux5;
											aux5 = 0;
											es--;
											fprintf(p_contrato, "Quarto Executivo Simples COM Cama Adicional no Valor de: %.2f\n", aux55);
											fprintf(p_qntdequartos, "%d %d %d %d %d %d %d", p, ls, ld, lt, es, ed, et);
											fclose(p_qntdequartos);
										}
										else {
											printf("Quarto Indisponivel.\n");
											system("pause");
											cont--;
										}
									}
									break;
								case 2:
									if(altatemp == 1) {
										if(es > 0) {
											printf("Adicionado ao Contrato!\n");
											system("pause");
											aux5 = 360 * 1.25;
											aux55 = aux5;
											aux5 = 0;
											es--;
											fprintf(p_contrato, "Quarto Executivo Simples SEM Cama Adicional no Valor de: %.2f\n", aux55);
											fprintf(p_qntdequartos, "%d %d %d %d %d %d %d", p, ls, ld, lt, es, ed, et);
											fclose(p_qntdequartos);
										}
										else {
											printf("Quarto Indisponivel.\n");
											system("pause");
											cont--;
										}
									}
									if(altatemp == 2) {
										if(es > 0) {
											printf("Adicionado ao Contrato!\n");
											system("pause");
											aux5 = 360;
											aux55 = aux5;
											aux5 = 0;
											es--;
											fprintf(p_contrato, "Quarto Executivo Simples SEM Cama Adicional no Valor de: %.2f\n", aux55);
											fprintf(p_qntdequartos, "%d %d %d %d %d %d %d", p, ls, ld, lt, es, ed, et);
											fclose(p_qntdequartos);
										}
										else {
											printf("Quarto Indisponivel.\n");
											system("pause");
											cont--;
										}
									}
									break;
								default:
									printf("\nOpcao Invalida.\n");
									system("pause");
									break;
							}
						} while(op2 < 1 || op2 > 2);
						break;
					case 6:
						do {
							cabecalho();
							printf("\nDeseja Solicitar Cama Adicional? (Para criancas MENORES de 9 anos).\n");
							printf("1 - Sim / 2 - Nao : ");
							scanf("%d", &op2);
							switch(op2) {
								case 1:
									if(altatemp == 1) {
										if(ed > 0) {
											printf("Adicionado ao Contrato!\n");
											system("pause");
											aux6 = 385 * 1.25;
											aux66 = aux6;
											aux6 = 0;
											ed--;
											fprintf(p_contrato, "Quarto Executivo Duplo COM Cama Adicional no Valor de: %.2f\n", aux66);
											fprintf(p_qntdequartos, "%d %d %d %d %d %d %d", p, ls, ld, lt, es, ed, et);
											fclose(p_qntdequartos);
										}
										else {
											printf("Quarto Indisponivel.\n");
											system("pause");
											cont--;
										}
									}
									if(altatemp == 2) {
										if(ed > 0) {
											printf("Adicionado ao Contrato!\n");
											system("pause");
											aux6 = 385;
											aux66 = aux6;
											aux6 = 0;
											ed--;
											fprintf(p_contrato, "Quarto Executivo Duplo COM Cama Adicional no Valor de: %.2f\n", aux66);
											fprintf(p_qntdequartos, "%d %d %d %d %d %d %d", p, ls, ld, lt, es, ed, et);
											fclose(p_qntdequartos);
										}
										else {
											printf("Quarto Indisponivel.\n");
											system("pause");
											cont--;
										}
									}
									break;
								case 2:
									if(altatemp == 1) {
										if(ed > 0) {
											printf("Adicionado ao Contrato!\n");
											system("pause");
											aux6 = 385 * 1.25;
											aux66 = aux6;
											aux6 = 0;
											ed--;
											fprintf(p_contrato, "Quarto Executivo Duplo SEM Cama Adicional no Valor de: %.2f\n", aux66);
											fprintf(p_qntdequartos, "%d %d %d %d %d %d %d", p, ls, ld, lt, es, ed, et);
											fclose(p_qntdequartos);
										}
										else {
											printf("Quarto Indisponivel.\n");
											system("pause");
											cont--;
										}
									}
									if(altatemp == 2) {
										if(ed > 0) {
											printf("Adicionado ao Contrato!\n");
											system("pause");
											aux6 = 385;
											aux66 = aux6;
											aux6 = 0;
											ed--;
											fprintf(p_contrato, "Quarto Executivo Duplo SEM Cama Adicional no Valor de: %.2f\n", aux66);
											fprintf(p_qntdequartos, "%d %d %d %d %d %d %d", p, ls, ld, lt, es, ed, et);
											fclose(p_qntdequartos);
										}
										else {
											printf("Quarto Indisponivel.\n");
											system("pause");
											cont--;
										}
									}
									break;
								default:
									printf("\nOpcao Invalida.\n");
									system("pause");
									break;
							}
						} while(op2 < 1 || op2 > 2);
						break;
					case 7:
						if(altatemp == 1) {
							if(et > 0) {
								printf("Adicionado ao Contrato!\n");
								system("pause");
								aux7 = 440 * 1.25;
								aux77 = aux7;
								aux7 = 0;
								et--;
								fprintf(p_contrato, "Quarto Executivo Triplo no Valor de: %.2f\n", aux77);
								fprintf(p_qntdequartos, "%d %d %d %d %d %d %d", p, ls, ld, lt, es, ed, et);
								fclose(p_qntdequartos);
							}
							else {
								printf("Quarto Indisponivel.\n");
								system("pause");
								cont--;
							}
						}
						if(altatemp == 2) {
							if(et > 0) {
								printf("Adicionado ao Contrato!\n");
								system("pause");
								aux7 = 440;
								aux77 = aux7;
								aux7 = 0;
								et--;
								fprintf(p_contrato, "Quarto Executivo Triplo no Valor de: %.2f\n", aux77);
								fprintf(p_qntdequartos, "%d %d %d %d %d %d %d", p, ls, ld, lt, es, ed, et);
								fclose(p_qntdequartos);
							}
							else {
								printf("Quarto Indisponivel.\n");
								system("pause");
								cont--;
							}
						}
						break;
					default:
						printf("\nOpcao Invalida.\n");
						cont--;
						system("pause");
						system("cls");
						break;
				}
				auxfinal += aux11 + aux22 + aux33 + aux44 + aux55 + aux66 + aux77;
			}
		}
		else {
			printf("\nQuantidade Invalida.\n");
			system("pause");
		}
	} while(quantidadeDeQuartos < 1);
	fclose(p_contrato);
	return auxfinal;
}