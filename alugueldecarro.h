float alugueldecarro(int altatemp, int qntdenoites) {
	int noitescontratadas, i, carro, op1, op2, cont = 1;
	float aux1 = 0, aux2 = 0, aux3 = 0, aux4 = 0;
	
	printf("\nDigite a Quantidade de Noites que o Hospede Contratara os Servicos de Aluguel de Carro:\n");
	scanf("%d", &noitescontratadas);
	
	if(noitescontratadas < 0) {
		printf("Quantidade Invalida!\n");
		system("pause");
		system("cls");
		return alugueldecarro(altatemp, qntdenoites);
	}
	
	p_contrato = fopen("contratos.txt", "a");
	if(p_contrato == NULL) {
		printf("\nFalha na Criacao do Contrato!");
		system("pause");
		return 0;
	}
				
	if(noitescontratadas == 0) {
		printf("Adicionado ao Contrato!\n");
		fprintf(p_contrato, "Nao Foi Contratado Servicos de Aluguel de Carro.\n");
		fclose(p_contrato);
		return aux4;
	}
	
	if(noitescontratadas <= qntdenoites && noitescontratadas > 0) {
		for(i = 0; i < noitescontratadas; i++) {
			do {
				printf("\nDigite o Tipo de Carro na Noite %d\n", cont);
				printf("1 - Automovel de Luxo / 2 - Automovel Executivo: ");
				scanf("%d", &carro);
				
				switch(carro) {
					case 1:
						printf("Adicionado ao Contrato!\n");
						if(altatemp == 1) {
							aux1 = 100 * 1.25;
						}
						if(altatemp == 2) {
							aux1 = 100;
						}
						fprintf(p_contrato, "Servico de Aluguel de Automovel de Luxo na Noite %d no Valor de R$:%.2f\n", cont, aux1);
						break;
					case 2:
						printf("Adicionado ao Contrato!\n");
						if(altatemp == 1) {
							aux1 = 60 * 1.25;
						}
						if(altatemp == 2) {
							aux1 = 60;
						}
						fprintf(p_contrato, "Servico de Aluguel de Automovel Executivo na Noite %d no Valor de R$:%.2f\n", cont, aux1);
						break;
					default:
						printf("Quantidade Invalida!\n");
						i--;
						system("pause");
						system("cls");
						break;
				}
			} while(carro < 1 || carro > 2);
			
			do {
				printf("\nO Hospede Deseja Contratar o Servico de Tanque Cheio?:\n");
				printf("1 - Sim / 2 - Nao: ");
				scanf("%d", &op1);
						
				switch(op1) {
					case 1:
						if(altatemp == 1) {
							aux2 = 300 * 1.25;
						}
						if(altatemp == 2) {
							aux2 = 300;
						}
						printf("Adicionado ao Contrato!\n");
						fprintf(p_contrato, "Servico de Tanque Cheio na Noite %d no Valor de R$:%.2f\n", cont, aux2);
						break;
					case 2:
						printf("Adicionado ao Contrato!\n");
						fprintf(p_contrato, "Nao foi Contratado Servico de Tanque Cheio na Noite %d\n", cont);
						break;
					default:
						printf("Quantidade Invalida!\n");
						i--;
						system("pause");
						system("cls");
						break;
				}
			} while(op1 < 1 || op1 > 2);
			
			do {
				printf("\nO Hospede Deseja Contratar o Servico de Carro Assegurado?:\n");
				printf("1 - Sim / 2 - Nao: ");
				scanf("%d", &op2);
				
				switch(op2) {
					case 1:
						if(altatemp == 1) {
							aux3 = 250 * 1.25;
						}
						if(altatemp == 2) {
							aux3 = 250;
						}
						printf("Adicionado ao Contrato!\n");
						fprintf(p_contrato, "Servico de Carro Assegurado na Noite %d no Valor de R$:%.2f\n", cont, aux3);
						break;
					case 2:
						printf("Adicionado ao Contrato!\n");
						fprintf(p_contrato, "Nao foi Contratado Servico de Carro Assegurado na Noite %d\n", cont);
						break;
					default:
						printf("Quantidade Invalida!\n");
						i--;
						system("pause");
						system("cls");
						break;
				}
			} while(op2 < 1 || op2 > 2);
			cont++;
			aux4 += aux1 + aux2 + aux3;
		}
	}
	else {
		printf("Quantidade Invalida!\n");
		system("pause");
		system("cls");
		return alugueldecarro(altatemp, qntdenoites);
	}
	fclose(p_contrato);
	return aux4;
}