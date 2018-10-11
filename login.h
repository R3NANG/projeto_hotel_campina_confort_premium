#define TAM1 6
#define TAM2 6

void login() {
	char logindefinido[TAM1] = "admin";
	char loginrecebido[TAM1];
	char senhadefinida[TAM2] = "admin";
	char senharecebida[TAM2];
	
	do {
		printf("Pressione qualquer tecla para inserir informacoes de Login e Senha.\n");
		system("pause");
		system("cls");
		printf("Login: ");
		scanf("%s", loginrecebido);
		printf("Senha: ");
		scanf("%s", senharecebida);
	
		if(strcmp(logindefinido, loginrecebido) == 0) {
			if(strcmp(senhadefinida, senharecebida) == 0) {
				printf("Logado com Sucesso!\n\n");
			}
			else printf("Login ou Senha Incorreto!\n");
		}
		else printf("Login ou Senha Incorreto!\n");
	} while((strcmp(logindefinido, loginrecebido) != 0 || strcmp(senhadefinida, senharecebida) != 0));
}