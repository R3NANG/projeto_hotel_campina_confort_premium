HOSPEDE babysitter(HOSPEDE recebimento) {
	recebimento.contadorBabysitter2 = 1;
	
	cabecalho();
	printf("\nDigite a Quantidade de Noites que o Hospede Contratara os Servicos de Babysitter: ");
	scanf("%d", &recebimento.babysitterNoites);
	
	if(recebimento.babysitterNoites < 0) {
		printf("Quantidade Invalida!\n");
		system("pause");
		return babysitter(recebimento);
	}
				
	if(recebimento.babysitterNoites == 0) {
		printf("Adicionado ao Contrato!\n");
		system("pause");
		fprintf(p_contrato, "Nao Foi Contratado Servicos de Babysitter.\n");
		fclose(p_contrato);
		return recebimento;
	}
	
	if(recebimento.babysitterNoites <= recebimento.qntdenoites && recebimento.babysitterNoites > 0) {
		for(recebimento.contadorBabysitter = 0; recebimento.contadorBabysitter < recebimento.babysitterNoites; recebimento.contadorBabysitter++) {
			cabecalho();
			printf("\nDigite a Quantidade de Horas de Servico na Noite %d: ", recebimento.contadorBabysitter2);
			scanf("%d", &recebimento.horas[recebimento.contadorBabysitter]);
			recebimento.contadorBabysitter2++;
		}
		recebimento.contadorBabysitter2 = 1;
		
		for(recebimento.contadorBabysitter = 0; recebimento.contadorBabysitter < recebimento.babysitterNoites; recebimento.contadorBabysitter++) {
			if(recebimento.altatemp == 1) {
				recebimento.valor[recebimento.contadorBabysitter] = recebimento.horas[recebimento.contadorBabysitter] * (45 * 1.25);
				recebimento.contadorBabysitter2++;
			}
			if(recebimento.altatemp == 2) {
				recebimento.valor[recebimento.contadorBabysitter] = recebimento.horas[recebimento.contadorBabysitter] * 45;
				recebimento.contadorBabysitter2++;
			}
		}
		
		for(recebimento.contadorBabysitter = 0; recebimento.contadorBabysitter < recebimento.babysitterNoites; recebimento.contadorBabysitter++) {
			recebimento.gastosBabysitter += recebimento.valor[recebimento.contadorBabysitter];
		}
		printf("Adicionado ao Contrato!\n");
		system("pause");
	}
	
	else {
		printf("Quantidade Invalida!\n");
		system("pause");
		return babysitter(recebimento);
	}
	return recebimento;
}