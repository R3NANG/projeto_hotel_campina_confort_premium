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
	return recebimento;
}