FILE *p_contrato;

void cabecalho();

int dados() {
	p_contrato = fopen("contratos.txt", "a");
	if(p_contrato == NULL) {
		printf("\nFalha na Criacao do Contrato!");
		system("pause");
		return 0;
	}
	cabecalho();
	printf("\nDigite o Nome Completo do Hospede:\n");
	char nome[100];
	setbuf(stdin, NULL);
	fgets(nome, 100, stdin);
	fprintf(p_contrato, "Nome: ");
	fprintf(p_contrato, "%s", nome);
	printf("Digite o CPF do Hospede (ex: 952.268.050-80):\n");
	char cpf[16];
	setbuf(stdin, NULL);
	fgets(cpf, 16, stdin);
	fprintf(p_contrato, "CPF: ");
	fprintf(p_contrato, "%s", cpf);
	printf("Digite o Endereco de Residencia do Hospede:\n");
	char ende[150];
	setbuf(stdin, NULL);
	fgets(ende, 150, stdin);
	fprintf(p_contrato, "Endereco de Residencia: ");
	fprintf(p_contrato, "%s", ende);
	printf("Digite a Bandeira do Cartao de Credito do Hospede:\n");
	char tipoc[25];
	setbuf(stdin, NULL);
	fgets(tipoc, 25, stdin);
	fprintf(p_contrato, "Bandeira do Cartao de Credito: ");
	fprintf(p_contrato, "%s", tipoc);
	printf("Digite o Numero do Cartao (CVV) do Hospede:\n");
	char numeroc[25];
	setbuf(stdin, NULL);
	fgets(numeroc, 25, stdin);
	fprintf(p_contrato, "Numero do Cartao (CVV): ");
	fprintf(p_contrato, "%s", numeroc);
	printf("Digite a Validade do Cartao do Hospede (ex: 13/08/2019):\n");
	char validade[15];
	setbuf(stdin, NULL);
	fgets(validade, 15, stdin);
	fprintf(p_contrato, "Validade do Cartao: ");
	fprintf(p_contrato, "%s", validade);
	printf("Digite o Codigo de Seguranca do Cartao do Hospede:\n");
	char codigodes[10];
	setbuf(stdin, NULL);
	fgets(codigodes, 10, stdin);
	fprintf(p_contrato, "Codigo de Seguranca do Cartao: ");
	fprintf(p_contrato, "%s", codigodes);
	printf("Digite a Data Inicial da Hospedagem do Hospede (ex: 13/03/2019):\n");
	char dataInicial[15];
	setbuf(stdin, NULL);
	fgets(dataInicial, 15, stdin);
	fprintf(p_contrato, "Data Inicial da Hospedagem: ");
	fprintf(p_contrato, "%s", dataInicial);
	fclose(p_contrato);
	printf("Adicionado ao Contrato!\n");
	system("pause");
}