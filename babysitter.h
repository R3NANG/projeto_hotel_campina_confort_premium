float babysitter(int altatemp, int qntdenoites) {
	int noitescontratadas, i, cont = 1;
	
	typedef struct babysitter {
		float aux;
		int horas[noitescontratadas];
		float valor[noitescontratadas];
	}VARIAVEIS;
	
	VARIAVEIS recebido;
	
	recebido.aux = 0;
	cabecalho();
	printf("\nDigite a Quantidade de Noites que o Hospede Contratara os Servicos de Babysitter:\n");
	scanf("%d", &noitescontratadas);
	
	if(noitescontratadas < 0) {
		printf("Quantidade Invalida!\n");
		system("pause");
		return babysitter(altatemp, qntdenoites);
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
		fprintf(p_contrato, "Nao Foi Contratado Servicos de Babysitter.\n");
		fclose(p_contrato);
		return recebido.aux;
	}
	
	if(noitescontratadas <= qntdenoites && noitescontratadas > 0) {
		for(i = 0; i < noitescontratadas; i++) {
			cabecalho();
			printf("\nDigite a Quantidade de Horas de Servico na Noite %d: ", cont);
			setbuf(stdin, NULL);
			scanf("%d", &recebido.horas[i]);
			setbuf(stdin, NULL);
			cont++;
		}
		cont = 1;
		
		for(i = 0; i < noitescontratadas; i++) {
			if(altatemp == 1) {
				recebido.valor[i] = recebido.horas[i] * (45 * 1.25);
				fprintf(p_contrato, "Servico de Babysitter na Noite %d: %dhrs no Valor de R$:%.2f\n", cont, recebido.horas[i], recebido.valor[i]);
				cont++;
			}
			if(altatemp == 2) {
				recebido.valor[i] = recebido.horas[i] * 45;
				fprintf(p_contrato, "Servico de Babysitter na Noite %d: %dhrs no Valor de R$:%.2f\n", cont, recebido.horas[i], recebido.valor[i]);
				cont++;
			}
		}
		
		for(i = 0; i < noitescontratadas; i++) {
			recebido.aux += recebido.valor[i];
		}
		printf("Adicionado ao Contrato!\n");
		system("pause");
	}
	
	else {
		printf("Quantidade Invalida!\n");
		system("pause");
		return babysitter(altatemp, qntdenoites);
	}
	fclose(p_contrato);
	return recebido.aux;
}