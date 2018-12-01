#define TAM1 6
#define TAM2 6

void cabecalho();

void login() {
	int i = 0;
	char logindefinido[TAM1] = "admin";
	char loginrecebido[TAM1];
	char senhadefinida[TAM2] = "admin";
	char senharecebida[TAM2];
	
	do {
		cabecalho();
		printf("\nInsira Informacoes de Login e Senha.\n");
		system("pause");
		cabecalho();
		printf("\nLogin: ");
		scanf("%s", loginrecebido);
		printf("Senha: ");
		fflush(stdin);
		for(i = 0; i < TAM2; i++) {
			senharecebida[i] = getch();
			putchar('*');
		}
		i = 5;
		senharecebida[i] = '\0';
	
		if(strcmp(logindefinido, loginrecebido) == 0) {
			if(strcmp(senhadefinida, senharecebida) == 0) {
				printf("\n\nLogado com Sucesso!\n");
				system("pause");
			}
			else {
				printf("\n\nLogin ou Senha Incorreto!\n");
				system("pause");
			}
		}
		else {
			printf("\n\nLogin ou Senha Incorreto!\n");
			system("pause");
		}
	} while((strcmp(logindefinido, loginrecebido) != 0 || strcmp(senhadefinida, senharecebida) != 0));
}