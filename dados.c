FILE *p_contrato;

HOSPEDE dadoscliente(HOSPEDE recebimento) {
	cabecalho();
	printf("\nDigite o CPF do Hospede (ex: 952.268.050-80):\n");
	setbuf(stdin, NULL);
	fgets(recebimento.cpf, 16, stdin);
	printf("Digite o Nome Completo do Hospede:\n");
	setbuf(stdin, NULL);
	fgets(recebimento.nome, 100, stdin);
	printf("Digite o Endereco de Residencia do Hospede:\n");
	setbuf(stdin, NULL);
	fgets(recebimento.endereco, 150, stdin);
	printf("Digite a Bandeira do Cartao de Credito do Hospede:\n");
	setbuf(stdin, NULL);
	fgets(recebimento.tipodocartao, 25, stdin);
	printf("Digite o Numero do Cartao (CVV) do Hospede:\n");
	setbuf(stdin, NULL);
	fgets(recebimento.numerodocartao, 25, stdin);
	printf("Digite a Validade do Cartao do Hospede (ex: 13/08/2019):\n");
	setbuf(stdin, NULL);
	fgets(recebimento.validadedocartao, 15, stdin);
	printf("Digite o Codigo de Seguranca do Cartao do Hospede:\n");
	setbuf(stdin, NULL);
	fgets(recebimento.codigodeseguranca, 10, stdin);
	printf("Digite a Data Inicial da Hospedagem do Hospede (ex: 13/03/2019):\n");
	setbuf(stdin, NULL);
	fgets(recebimento.dataInicial, 15, stdin);
	printf("Adicionado ao Contrato!\n");
	system("pause");
	
	do {
		cabecalho();
		printf("\nDigite a Quantidade de Noites que o Hospede ficara Hospedado:\n");
		scanf("%d", &recebimento.qntdenoites);
		if(recebimento.qntdenoites <= 0) {
			printf("Quantidade Invalida.\n");
			system("pause");
		}
		else {
			printf("Adicionado ao Contrato!\n");
			system("pause");
		}
	} while(recebimento.qntdenoites <= 0);
					
	do {
		cabecalho();
		printf("\nO Hospede Deseja se Hospedar em Epoca de Alta Estacao? (ex: Natal, Reveillon, etc.)\n");
		printf("1 - Sim / 2 - Nao: ");
		scanf("%d", &recebimento.altatemp);
		switch(recebimento.altatemp) {
			case 1:
				printf("Adicionado ao Contrato!\n");
				system("pause");
				break;
			case 2:
				printf("Adicionado ao Contrato!\n");
				system("pause");
				break;
			default:
				printf("Opcao Invalida.\n");
				system("pause");
				break;
		}
	} while(recebimento.altatemp < 1 || recebimento.altatemp > 2);
	return recebimento;
}