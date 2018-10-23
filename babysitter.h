float babysitter(int altatemp, int qntdenoites) {
	int noitescontratadas, i, cont = 1;
	float aux = 0;
	int horas[noitescontratadas];
	float valor[noitescontratadas];
	
	printf("\nDigite a Quantidade de Noites que o Hospede Contratara os Servicos de Babysitter:\n");
	scanf("%d", &noitescontratadas);
	
	if(noitescontratadas < 0) {
		printf("Quantidade Invalida!\n");
		system("pause");
		system("cls");
		return babysitter(altatemp, qntdenoites);
	}
	
	p_contrato = fopen("contratos.txt", "a");
	if(p_contrato == NULL) {
		printf("\nFalha na Criacao do Contrato!");
		system("pause");
		return 0;
	}
				
	if(noitescontratadas == 0) {
		printf("Adicionado ao Contrato!\n");
		fprintf(p_contrato, "Nao Foi Contratado Servicos de Babysitter.\n");
		fclose(p_contrato);
		return aux;
	}
	
	if(noitescontratadas <= qntdenoites && noitescontratadas > 0) {
		for(i = 0; i < noitescontratadas; i++) {
			printf("Digite a Quantidade de Horas de Servico na Noite %d: ", cont);
			scanf("%d", &horas[i]);
			cont++;
		}
		cont = 1;
		
		for(i = 0; i < noitescontratadas; i++) {
			if(altatemp == 1) {
				valor[i] = horas[i] * (45 * 1.25);
				fprintf(p_contrato, "Servico de Babysitter na Noite %d: %dhrs no Valor de R$:%.2f\n", cont, horas[i], valor[i]);
				cont++;
			}
			if(altatemp == 2) {
				valor[i] = horas[i] * 45;
				fprintf(p_contrato, "Servico de Babysitter na Noite %d: %dhrs no Valor de R$:%.2f\n", cont, horas[i], valor[i]);
				cont++;
			}
		}
		
		for(i = 0; i < noitescontratadas; i++) {
			aux += valor[i];
		}
		printf("Adicionado ao Contrato!\n");
	}
	
	else {
		printf("Quantidade Invalida!\n");
		system("pause");
		system("cls");
		return babysitter(altatemp, qntdenoites);
	}
	fclose(p_contrato);
	return aux;
}