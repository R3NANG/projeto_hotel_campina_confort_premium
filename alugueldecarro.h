float alugueldecarro(int altatemp, int qntdenoites) {
	int noitescontratadas, i, carro, op1, op2, cont = 1;
	float aux1 = 0, aux2 = 0, aux3 = 0, aux11 = 0, aux22 = 0, aux33 = 0, auxfinal = 0;
	
	cabecalho();
	printf("\nDigite a Quantidade de Noites que o Hospede Contratara os Servicos de Aluguel de Carro:\n");
	scanf("%d", &noitescontratadas);
	
	if(noitescontratadas < 0) {
		printf("Quantidade Invalida!\n");
		system("pause");
		return alugueldecarro(altatemp, qntdenoites);
	}
	
	p_contrato = fopen("contratos.txt", "a");
	if(p_contrato == NULL) {
		printf("\nFalha na Criacao do Contrato!\n");
		system("pause");
		return 0;
	}
				
	if(noitescontratadas == 0) {
		printf("Adicionado ao Contrato!\n");
		system("pause");
		fprintf(p_contrato, "Nao Foi Contratado Servicos de Aluguel de Carro.\n");
		fclose(p_contrato);
		return auxfinal;
	}
	
	if(noitescontratadas <= qntdenoites && noitescontratadas > 0) {
		for(i = 0; i < noitescontratadas; i++) {
			do {
				aux11 = 0;
				cabecalho();
				printf("\nDigite o Tipo de Carro na Noite %d\n", cont);
				printf("1 - Automovel de Luxo / 2 - Automovel Executivo: ");
				scanf("%d", &carro);
				
				switch(carro) {
					case 1:
						printf("Adicionado ao Contrato!\n");
						system("pause");
						if(altatemp == 1) {
							aux1 = 100 * 1.25;
							aux11 = aux1;
							aux1 = 0;
						}
						if(altatemp == 2) {
							aux1 = 100;
							aux11 = aux1;
							aux1 = 0;
						}
						fprintf(p_contrato, "Servico de Aluguel de Automovel de Luxo na Noite %d no Valor de R$:%.2f\n", cont, aux11);
						break;
					case 2:
						printf("Adicionado ao Contrato!\n");
						system("pause");
						if(altatemp == 1) {
							aux1 = 60 * 1.25;
							aux11 = aux1;
							aux1 = 0;
						}
						if(altatemp == 2) {
							aux1 = 60;
							aux11 = aux1;
							aux1 = 0;
						}
						fprintf(p_contrato, "Servico de Aluguel de Automovel Executivo na Noite %d no Valor de R$:%.2f\n", cont, aux11);
						break;
					default:
						printf("Quantidade Invalida!\n");
						system("pause");
						break;
				}
			} while(carro < 1 || carro > 2);
			
			do {
				aux22 = 0;
				cabecalho();
				printf("\nO Hospede Deseja Contratar o Servico de Tanque Cheio?:\n");
				printf("1 - Sim / 2 - Nao: ");
				scanf("%d", &op1);
						
				switch(op1) {
					case 1:
						if(altatemp == 1) {
							aux2 = 300 * 1.25;
							aux22 = aux2;
							aux2 = 0;
						}
						if(altatemp == 2) {
							aux2 = 300;
							aux22 = aux2;
							aux2 = 0;
						}
						printf("Adicionado ao Contrato!\n");
						system("pause");
						fprintf(p_contrato, "Servico de Tanque Cheio na Noite %d no Valor de R$:%.2f\n", cont, aux22);
						break;
					case 2:
						printf("Adicionado ao Contrato!\n");
						system("pause");
						fprintf(p_contrato, "Nao foi Contratado Servico de Tanque Cheio na Noite %d\n", cont);
						break;
					default:
						printf("Quantidade Invalida!\n");
						system("pause");
						break;
				}
			} while(op1 < 1 || op1 > 2);
			
			do {
				aux33 = 0;
				cabecalho();
				printf("\nO Hospede Deseja Contratar o Servico de Carro Assegurado?:\n");
				printf("1 - Sim / 2 - Nao: ");
				scanf("%d", &op2);
				
				switch(op2) {
					case 1:
						if(altatemp == 1) {
							aux3 = 250 * 1.25;
							aux33 = aux3;
							aux3 = 0;
						}
						if(altatemp == 2) {
							aux3 = 250;
							aux33 = aux3;
							aux3 = 0;
						}
						printf("Adicionado ao Contrato!\n");
						system("pause");
						fprintf(p_contrato, "Servico de Carro Assegurado na Noite %d no Valor de R$:%.2f\n", cont, aux33);
						break;
					case 2:
						printf("Adicionado ao Contrato!\n");
						system("pause");
						fprintf(p_contrato, "Nao foi Contratado Servico de Carro Assegurado na Noite %d\n", cont);
						break;
					default:
						printf("Quantidade Invalida!\n");
						system("pause");
						break;
				}
			} while(op2 < 1 || op2 > 2);
			cont++;
			auxfinal += aux11 + aux22 + aux33;
		}
	}
	else {
		printf("Quantidade Invalida!\n");
		system("pause");
		return alugueldecarro(altatemp, qntdenoites);
	}
	fclose(p_contrato);
	return auxfinal;
}