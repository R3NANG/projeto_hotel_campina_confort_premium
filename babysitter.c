HOSPEDE babysitter(HOSPEDE recebimento) {
	int i = 0;
	int cont = 1;
	
	cabecalho();
	printf("\nDigite a Quantidade de Noites que o Hospede Contratara os Servicos de Babysitter: ");
	scanf("%d", &recebimento.babysitterNoites);
	
	if(recebimento.babysitterNoites < 0) {
		printf("\nQuantidade Invalida!\n");
		system("pause");
		return babysitter(recebimento);
	}
				
	if(recebimento.babysitterNoites == 0) {
		printf("\nAdicionado ao Contrato!\n");
		system("pause");
		return recebimento;
	}
	
	if(recebimento.babysitterNoites <= recebimento.qntdenoites && recebimento.babysitterNoites > 0) {
		for(i = 0; i < recebimento.babysitterNoites; i++) {
			cabecalho();
			printf("\nDigite a Quantidade de Horas de Servico na Noite %d: ", cont);
			scanf("%d", &recebimento.horas[i]);
			cont++;
		}
		
		for(i = 0; i < recebimento.babysitterNoites; i++) {
			if(recebimento.altatemp == 1) {
				recebimento.valor[i] = recebimento.horas[i] * (45 * 1.25);
			}
			if(recebimento.altatemp == 2) {
				recebimento.valor[i] = recebimento.horas[i] * 45;
			}
		}
		
		for(i = 0; i < recebimento.babysitterNoites; i++) {
			recebimento.gastosBabysitter += recebimento.valor[i];
		}
		printf("\nAdicionado ao Contrato!\n");
		system("pause");
	}
	
	else {
		printf("\nQuantidade Invalida!\n");
		system("pause");
		return babysitter(recebimento);
	}
	return recebimento;
}