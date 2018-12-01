FILE *p_qntdequartos;

HOSPEDE quartos(struct dados HOSPEDE) {
	p_qntdequartos = fopen("qntdequartos.txt", "r");
	if(p_qntdequartos == NULL) {
		printf("\nFalha na Criacao do Contrato!\n");
		system("pause");
		exit(1);
	}
	int p, ls, ld, lt, es, ed, et;
	fscanf(p_qntdequartos, "%d %d %d %d %d %d %d", &p, &ls, &ld, &lt, &es, &ed, &et);
	fclose(p_qntdequartos);
	int op1 = 0, cont = 0;
	
	do {
		cabecalho();
		printf("\nHa Algum Quarto Igual?\n");
		printf("1 - Sim / 2 - Nao : ");
		scanf("%d", &recebimento.seQuartosIguais);
		
		if(recebimento.seQuartosIguais < 1 || recebimento.seQuartosIguais > 2) {
			printf("\nQuantidade Invalida.\n");
			system("pause");
		}
		
		if(recebimento.seQuartosIguais == 1) {
			do {
				cabecalho();
				printf("\nDigite a Quantidade de Quartos Iguais: ");
				scanf("%d", &recebimento.quantidadeDeQuartosIguais);
				
				if(recebimento.quantidadeDeQuartosIguais < 1) {
					printf("\nQuantidade Invalida.\n");
					system("pause");
				}
			} while(recebimento.quantidadeDeQuartosIguais < 1);
		}
		
		do {
			if(recebimento.seQuartosIguais == 1) {
				recebimento.quantidadeDeQuartos = 1;
			}
			else {
				cabecalho();
				printf("\nDigite a Quantidade de Quartos: ");
				scanf("%d", &recebimento.quantidadeDeQuartos);
			}
			
			if(recebimento.quantidadeDeQuartos > 0) {
				for(cont = 1; cont <= recebimento.quantidadeDeQuartos; cont++) {
					cabecalho();
					p_qntdequartos = fopen("qntdequartos.txt", "w");
					if(p_qntdequartos == NULL) {
						printf("\nFalha na Quantidade de Quartos!\n");
						system("pause");
						exit(1);
					}
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
							if(recebimento.altatemp == 1) {
								if(p > 0) {
									printf("Adicionado ao Contrato!\n");
									system("pause");
									recebimento.q_presidencial = 1200 * 1.25;
									p--;
									fprintf(p_qntdequartos, "%d %d %d %d %d %d %d", p, ls, ld, lt, es, ed, et);
									fclose(p_qntdequartos);
								}
								else {
									printf("Quarto Indisponivel.\n");
									system("pause");
									cont--;
								}
							}
							if(recebimento.altatemp == 2) {
								if(p > 0) {
									printf("Adicionado ao Contrato!\n");
									system("pause");
									recebimento.q_presidencial = 1200;
									p--;
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
								scanf("%d", &recebimento.q_camaLuxoS);
								switch(recebimento.q_camaLuxoS) {
									case 1:
										if(recebimento.altatemp == 1) {
											if(ls > 0) {
												printf("Adicionado ao Contrato!\n");
												system("pause");
												recebimento.q_luxoS = 520 * 1.25;
												ls--;
												fprintf(p_qntdequartos, "%d %d %d %d %d %d %d", p, ls, ld, lt, es, ed, et);
												fclose(p_qntdequartos);
											}
											else {
												printf("Quarto Indisponivel.\n");
												system("pause");
												cont--;
											}
										}
										if(recebimento.altatemp == 2) {
											if(ls > 0) {
												printf("Adicionado ao Contrato!\n");
												system("pause");
												recebimento.q_luxoS = 520;
												ls--;
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
										if(recebimento.altatemp == 1) {
											if(ls > 0) {
												printf("Adicionado ao Contrato!\n");
												system("pause");
												recebimento.q_luxoS = 520 * 1.25;
												ls--;
												fprintf(p_qntdequartos, "%d %d %d %d %d %d %d", p, ls, ld, lt, es, ed, et);
												fclose(p_qntdequartos);
											}
											else {
												printf("Quarto Indisponivel.\n");
												system("pause");
												cont--;
											}
										}
										if(recebimento.altatemp == 2) {
											if(ls > 0) {
												printf("Adicionado ao Contrato!\n");
												system("pause");
												recebimento.q_luxoS = 520;
												ls--;
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
							} while(recebimento.q_camaLuxoS < 1 || recebimento.q_camaLuxoS > 2);
							break;
						case 3:
							do {
								cabecalho();
								printf("\nDeseja Solicitar Cama Adicional? (Para criancas MENORES de 9 anos).\n");
								printf("1 - Sim / 2 - Nao : ");
								scanf("%d", &recebimento.q_camaLuxoD);
								switch(recebimento.q_camaLuxoD) {
									case 1:
										if(recebimento.altatemp == 1) {
											if(ld > 0) {
												printf("Adicionado ao Contrato!\n");
												system("pause");
												recebimento.q_luxoD = 570 * 1.25;
												ld--;
												fprintf(p_qntdequartos, "%d %d %d %d %d %d %d", p, ls, ld, lt, es, ed, et);
												fclose(p_qntdequartos);
											}
											else {
												printf("Quarto Indisponivel.\n");
												system("pause");
												cont--;
											}
										}
										if(recebimento.altatemp == 2) {
											if(ld > 0) {
												printf("Adicionado ao Contrato!\n");
												system("pause");
												recebimento.q_luxoD = 570;
												ld--;
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
										if(recebimento.altatemp == 1) {
											if(ld > 0) {
												printf("Adicionado ao Contrato!\n");
												system("pause");
												recebimento.q_luxoD = 570 * 1.25;
												ld--;
												fprintf(p_qntdequartos, "%d %d %d %d %d %d %d", p, ls, ld, lt, es, ed, et);
												fclose(p_qntdequartos);
											}
											else {
												printf("Quarto Indisponivel.\n");
												system("pause");
												cont--;
											}
										}
										if(recebimento.altatemp == 2) {
											if(ld > 0) {
												printf("Adicionado ao Contrato!\n");
												system("pause");
												recebimento.q_luxoD = 570;
												ld--;
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
							} while(recebimento.q_camaLuxoD < 1 || recebimento.q_camaLuxoD > 2);
							break;
						case 4:
							do {
								cabecalho();
								printf("\nDeseja Solicitar Cama Adicional? (Para criancas MENORES de 9 anos).\n");
								printf("1 - Sim / 2 - Nao : ");
								scanf("%d", &recebimento.q_camaLuxoT);
								switch(recebimento.q_camaLuxoT) {
									case 1:
										if(recebimento.altatemp == 1) {
											if(lt > 0) {
												printf("Adicionado ao Contrato!\n");
												system("pause");
												recebimento.q_luxoT = 620 * 1.25;
												lt--;
												fprintf(p_qntdequartos, "%d %d %d %d %d %d %d", p, ls, ld, lt, es, ed, et);
												fclose(p_qntdequartos);
											}
											else {
												printf("Quarto Indisponivel.\n");
												system("pause");
												cont--;
											}
										}
										if(recebimento.altatemp == 2) {
											if(lt > 0) {
												printf("Adicionado ao Contrato!\n");
												system("pause");
												recebimento.q_luxoT = 620;
												lt--;
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
										if(recebimento.altatemp == 1) {
											if(lt > 0) {
												printf("Adicionado ao Contrato!\n");
												system("pause");
												recebimento.q_luxoT = 620 * 1.25;
												lt--;
												fprintf(p_qntdequartos, "%d %d %d %d %d %d %d", p, ls, ld, lt, es, ed, et);
												fclose(p_qntdequartos);
											}
											else {
												printf("Quarto Indisponivel.\n");
												system("pause");
												cont--;
											}
										}
										if(recebimento.altatemp == 2) {
											if(lt > 0) {
												printf("Adicionado ao Contrato!\n");
												system("pause");
												recebimento.q_luxoT = 620;
												lt--;
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
							} while(recebimento.q_camaLuxoT < 1 || recebimento.q_camaLuxoT > 2);
							break;
						case 5:
							do {
								cabecalho();
								printf("\nDeseja Solicitar Cama Adicional? (Para criancas MENORES de 9 anos).\n");
								printf("1 - Sim / 2 - Nao : ");
								scanf("%d", &recebimento.q_camaExecutivoS);
								switch(recebimento.q_camaExecutivoS) {
									case 1:
										if(recebimento.altatemp == 1) {
											if(es > 0) {
												printf("Adicionado ao Contrato!\n");
												system("pause");
												recebimento.q_executivoS = 360 * 1.25;
												es--;
												fprintf(p_qntdequartos, "%d %d %d %d %d %d %d", p, ls, ld, lt, es, ed, et);
												fclose(p_qntdequartos);
											}
											else {
												printf("Quarto Indisponivel.\n");
												system("pause");
												cont--;
											}
										}
										if(recebimento.altatemp == 2) {
											if(es > 0) {
												printf("Adicionado ao Contrato!\n");
												system("pause");
												recebimento.q_executivoS = 360;
												es--;
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
										if(recebimento.altatemp == 1) {
											if(es > 0) {
												printf("Adicionado ao Contrato!\n");
												system("pause");
												recebimento.q_executivoS = 360 * 1.25;
												es--;
												fprintf(p_qntdequartos, "%d %d %d %d %d %d %d", p, ls, ld, lt, es, ed, et);
												fclose(p_qntdequartos);
											}
											else {
												printf("Quarto Indisponivel.\n");
												system("pause");
												cont--;
											}
										}
										if(recebimento.altatemp == 2) {
											if(es > 0) {
												printf("Adicionado ao Contrato!\n");
												system("pause");
												recebimento.q_executivoS = 360;
												es--;
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
							} while(recebimento.q_camaExecutivoS < 1 || recebimento.q_camaExecutivoS > 2);
							break;
						case 6:
							do {
								cabecalho();
								printf("\nDeseja Solicitar Cama Adicional? (Para criancas MENORES de 9 anos).\n");
								printf("1 - Sim / 2 - Nao : ");
								scanf("%d", &recebimento.q_camaExecutivoD);
								switch(recebimento.q_camaExecutivoD) {
									case 1:
										if(recebimento.altatemp == 1) {
											if(ed > 0) {
												printf("Adicionado ao Contrato!\n");
												system("pause");
												recebimento.q_executivoD = 385 * 1.25;
												ed--;
												fprintf(p_qntdequartos, "%d %d %d %d %d %d %d", p, ls, ld, lt, es, ed, et);
												fclose(p_qntdequartos);
											}
											else {
												printf("Quarto Indisponivel.\n");
												system("pause");
												cont--;
											}
										}
										if(recebimento.altatemp == 2) {
											if(ed > 0) {
												printf("Adicionado ao Contrato!\n");
												system("pause");
												recebimento.q_executivoD = 385;
												ed--;
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
										if(recebimento.altatemp == 1) {
											if(ed > 0) {
												printf("Adicionado ao Contrato!\n");
												system("pause");
												recebimento.q_executivoD = 385 * 1.25;
												ed--;
												fprintf(p_qntdequartos, "%d %d %d %d %d %d %d", p, ls, ld, lt, es, ed, et);
												fclose(p_qntdequartos);
											}
											else {
												printf("Quarto Indisponivel.\n");
												system("pause");
												cont--;
											}
										}
										if(recebimento.altatemp == 2) {
											if(ed > 0) {
												printf("Adicionado ao Contrato!\n");
												system("pause");
												recebimento.q_executivoD = 385;
												ed--;
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
							} while(recebimento.q_camaExecutivoD < 1 || recebimento.q_camaExecutivoD > 2);
							break;
						case 7:
							if(recebimento.altatemp == 1) {
								if(et > 0) {
									printf("Adicionado ao Contrato!\n");
									system("pause");
									recebimento.q_executivoT = 440 * 1.25;
									et--;
									fprintf(p_qntdequartos, "%d %d %d %d %d %d %d", p, ls, ld, lt, es, ed, et);
									fclose(p_qntdequartos);
								}
								else {
									printf("Quarto Indisponivel.\n");
									system("pause");
									cont--;
								}
							}
							if(recebimento.altatemp == 2) {
								if(et > 0) {
									printf("Adicionado ao Contrato!\n");
									system("pause");
									recebimento.q_executivoT = 440;
									et--;
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
				}
			}
			else {
				printf("\nQuantidade Invalida.\n");
				system("pause");
			}
		} while(recebimento.quantidadeDeQuartos < 0);
	} while(recebimento.seQuartosIguais < 1 || recebimento.seQuartosIguais > 2);
	recebimento.gastosQuartos += recebimento.q_presidencial + recebimento.q_luxoS + recebimento.q_luxoD + recebimento.q_luxoT + recebimento.q_executivoS + recebimento.q_executivoD + recebimento.q_executivoT;
	recebimento.gastosQuartos *= recebimento.qntdenoites;
	return recebimento;
}