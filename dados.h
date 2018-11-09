FILE *p_contrato;

int dados() {
	p_contrato = fopen("contratos.txt", "a");
	if(p_contrato == NULL) {
		printf("\nFalha na Criacao do Contrato!\n");
		system("pause");
		return 0;
	}
	
	struct dados {
		char cpf[16];
		char nome[100];
		char endereco[150];
		char tipodocartao[25];
		char numerodocartao[25];
		char validadedocartao[15];
		char codigodeseguranca[10];
		char dataInicial[15];
	};
	
	struct dados recebimento;
	
	cabecalho();
	printf("\nDigite o CPF do Hospede (ex: 952.268.050-80):\n");
	setbuf(stdin, NULL);
	fgets(recebimento.cpf, 16, stdin);
	fprintf(p_contrato, "CPF: %s", recebimento.cpf);
	printf("Digite o Nome Completo do Hospede:\n");
	setbuf(stdin, NULL);
	fgets(recebimento.nome, 100, stdin);
	fprintf(p_contrato, "Nome: %s", recebimento.nome);
	printf("Digite o Endereco de Residencia do Hospede:\n");
	setbuf(stdin, NULL);
	fgets(recebimento.endereco, 150, stdin);
	fprintf(p_contrato, "Endereco de Residencia: %s", recebimento.endereco);
	printf("Digite a Bandeira do Cartao de Credito do Hospede:\n");
	setbuf(stdin, NULL);
	fgets(recebimento.tipodocartao, 25, stdin);
	fprintf(p_contrato, "Bandeira do Cartao de Credito: %s", recebimento.tipodocartao);
	printf("Digite o Numero do Cartao (CVV) do Hospede:\n");
	setbuf(stdin, NULL);
	fgets(recebimento.numerodocartao, 25, stdin);
	fprintf(p_contrato, "Numero do Cartao (CVV): %s", recebimento.numerodocartao);
	printf("Digite a Validade do Cartao do Hospede (ex: 13/08/2019):\n");
	setbuf(stdin, NULL);
	fgets(recebimento.validadedocartao, 15, stdin);
	fprintf(p_contrato, "Validade do Cartao: %s", recebimento.validadedocartao);
	printf("Digite o Codigo de Seguranca do Cartao do Hospede:\n");
	setbuf(stdin, NULL);
	fgets(recebimento.codigodeseguranca, 10, stdin);
	fprintf(p_contrato, "Codigo de Seguranca do Cartao: %s", recebimento.codigodeseguranca);
	printf("Digite a Data Inicial da Hospedagem do Hospede (ex: 13/03/2019):\n");
	setbuf(stdin, NULL);
	fgets(recebimento.dataInicial, 15, stdin);
	fprintf(p_contrato, "Data Inicial da Hospedagem: %s", recebimento.dataInicial);
	fclose(p_contrato);
	printf("Adicionado ao Contrato!\n");
	system("pause");
}