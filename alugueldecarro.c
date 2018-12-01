HOSPEDE alugueldecarro(HOSPEDE recebimento) {
	int i = 0, op1 = 0, op2 = 0, op3 = 0, cont = 1;
	
	cabecalho();
	printf("\nDigite a Quantidade de Noites que o Hospede Contratara os Servicos de Aluguel de Carro: ");
	scanf("%d", &recebimento.carrosNoites);
	
	if(recebimento.carrosNoites < 0) {
		printf("\nQuantidade Invalida!\n");
		system("pause");
		return alugueldecarro(recebimento);
	}
				
	if(recebimento.carrosNoites == 0) {
		printf("\nAdicionado ao Contrato!\n");
		system("pause");
		return recebimento;
	}
	
	if(recebimento.carrosNoites <= recebimento.qntdenoites && recebimento.carrosNoites > 0) {
		for(i = 0; i < recebimento.carrosNoites; i++) {
			do {
				cabecalho();
				printf("\nDigite o Tipo de Carro na Noite %d\n", cont);
				printf("1 - Automovel de Luxo / 2 - Automovel Executivo: ");
				scanf("%d", &op1);
				
				switch(op1) {
					case 1:
						printf("Adicionado ao Contrato!\n");
						system("pause");
						if(recebimento.altatemp == 1) {
							recebimento.tipoDeCarro[i] = 100 * 1.25;
						}
						if(recebimento.altatemp == 2) {
							recebimento.tipoDeCarro[i] = 100;
						}
						break;
					case 2:
						printf("Adicionado ao Contrato!\n");
						system("pause");
						if(recebimento.altatemp == 1) {
							recebimento.tipoDeCarro[i] = 60 * 1.25;
						}
						if(recebimento.altatemp == 2) {
							recebimento.tipoDeCarro[i] = 60;
						}
						break;
					default:
						printf("Quantidade Invalida!\n");
						system("pause");
						break;
				}
			} while(op1 < 1 || op1 > 2);
			
			do {
				cabecalho();
				printf("\nO Hospede Deseja Contratar o Servico de Tanque Cheio?:\n");
				printf("1 - Sim / 2 - Nao: ");
				scanf("%d", &op2);
						
				switch(op2) {
					case 1:
						if(recebimento.altatemp == 1) {
							recebimento.tanqueCheio[i] = 300 * 1.25;
						}
						if(recebimento.altatemp == 2) {
							recebimento.tanqueCheio[i] = 300;
						}
						printf("Adicionado ao Contrato!\n");
						system("pause");
						break;
					case 2:
						printf("Adicionado ao Contrato!\n");
						system("pause");
						break;
					default:
						printf("Quantidade Invalida!\n");
						system("pause");
						break;
				}
			} while(op2 < 1 || op2 > 2);
			
			do {
				cabecalho();
				printf("\nO Hospede Deseja Contratar o Servico de Carro Assegurado?:\n");
				printf("1 - Sim / 2 - Nao: ");
				scanf("%d", &op3);
				
				switch(op3) {
					case 1:
						if(recebimento.altatemp == 1) {
							recebimento.carroAssegurado[i] = 250 * 1.25;
						}
						if(recebimento.altatemp == 2) {
							recebimento.carroAssegurado[i] = 250;
						}
						printf("Adicionado ao Contrato!\n");
						system("pause");
						break;
					case 2:
						printf("Adicionado ao Contrato!\n");
						system("pause");
						break;
					default:
						printf("Quantidade Invalida!\n");
						system("pause");
						break;
				}
			} while(op3 < 1 || op3 > 2);
			cont++;
		}
		for(i = 0; i < recebimento.carrosNoites; i++) {
			recebimento.gastosAluguelDeCarro += recebimento.tipoDeCarro[i] + recebimento.tanqueCheio[i] + recebimento.carroAssegurado[i];
		}
	}
	else {
		printf("Quantidade Invalida!\n");
		system("pause");
		return alugueldecarro(recebimento);
	}
	return recebimento;
}