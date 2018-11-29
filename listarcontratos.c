void listarcontratos(HOSPEDE recebimento) {
	p_contrato = fopen("contratos.dat", "r");
	printf("\n");
	while(fread(&recebimento, sizeof(HOSPEDE), 1, p_contrato)) {
    	printf("CPF: %s", recebimento.cpf);
    	printf("Nome: %s", recebimento.nome);
    	printf("Endereco de Residencia: %s", recebimento.endereco);
    	printf("Bandeira do Cartao de Credito: %s", recebimento.tipodocartao);
        printf("Numero do Cartao (CVV): %s", recebimento.numerodocartao);
        printf("Validade do Cartao: %s", recebimento.validadedocartao);
        printf("Codigo de Seguranca do Cartao: %s", recebimento.codigodeseguranca);
        printf("Data Inicial da Hospedagem: %s", recebimento.dataInicial);
        printf("Quantidade de Noites Hospedado: %d\n", recebimento.qntdenoites);
        if(recebimento.altatemp == 1) printf("Hospede Hospedado em Epoca de Alta Estacao.\n");
		if(recebimento.altatemp == 2) printf("Hospede Hospedado em Epoca Normal.\n");
		if(recebimento.q_presidencial == 1200 * 1.25 || recebimento.q_presidencial == 1200) {
			if(recebimento.seQuartosIguais == 1) {
				recebimento.q_presidencial *= recebimento.quantidadeDeQuartosIguais;
				recebimento.gastosQuartos *= recebimento.quantidadeDeQuartosIguais;
				printf("%d Quarto(s) Presidencial no Valor de: %.2f\n", recebimento.quantidadeDeQuartosIguais, recebimento.q_presidencial);
			}
			else printf("Quarto Presidencial no Valor de: %.2f\n", recebimento.q_presidencial);
		}
		if(recebimento.q_camaLuxoS == 1) {
			if(recebimento.seQuartosIguais == 1) {
				recebimento.q_luxoS *= recebimento.quantidadeDeQuartosIguais;
				recebimento.gastosQuartos *= recebimento.quantidadeDeQuartosIguais;
				printf("%d Quarto(s) de Luxo Simples COM Cama Adicional no Valor de: %.2f\n", recebimento.quantidadeDeQuartosIguais, recebimento.q_luxoS);
			}
			else printf("Quarto de Luxo Simples COM Cama Adicional no Valor de: %.2f\n", recebimento.q_luxoS);
		}
		if(recebimento.q_camaLuxoS == 2) {
			if(recebimento.seQuartosIguais == 1) {
				recebimento.q_luxoS *= recebimento.quantidadeDeQuartosIguais;
				recebimento.gastosQuartos *= recebimento.quantidadeDeQuartosIguais;
				printf("%d Quarto(s) de Luxo Simples SEM Cama Adicional no Valor de: %.2f\n", recebimento.quantidadeDeQuartosIguais, recebimento.q_luxoS);
			}
			else printf("Quarto de Luxo Simples SEM Cama Adicional no Valor de: %.2f\n", recebimento.q_luxoS);
		}
		if(recebimento.q_camaLuxoD == 1) {
			if(recebimento.seQuartosIguais == 1) {
				recebimento.q_luxoD *= recebimento.quantidadeDeQuartosIguais;
				recebimento.gastosQuartos *= recebimento.quantidadeDeQuartosIguais;
				printf("%d Quarto(s) de Luxo Duplo COM Cama Adicional no Valor de: %.2f\n", recebimento.quantidadeDeQuartosIguais, recebimento.q_luxoD);
			}
			else printf("Quarto de Luxo Duplo COM Cama Adicional no Valor de: %.2f\n", recebimento.q_luxoD);
		}
		if(recebimento.q_camaLuxoD == 2) {
			if(recebimento.seQuartosIguais == 1) {
				recebimento.q_luxoD *= recebimento.quantidadeDeQuartosIguais;
				recebimento.gastosQuartos *= recebimento.quantidadeDeQuartosIguais;
				printf("%d Quarto(s) de Luxo Duplo SEM Cama Adicional no Valor de: %.2f\n", recebimento.quantidadeDeQuartosIguais, recebimento.q_luxoD);
			}
			else printf("Quarto de Luxo Duplo SEM Cama Adicional no Valor de: %.2f\n", recebimento.q_luxoD);
		}
		if(recebimento.q_camaLuxoT == 1) {
			if(recebimento.seQuartosIguais == 1) {
				recebimento.q_luxoT *= recebimento.quantidadeDeQuartosIguais;
				recebimento.gastosQuartos *= recebimento.quantidadeDeQuartosIguais;
				printf("%d Quarto(s) de Luxo Triplo COM Cama Adicional no Valor de: %.2f\n", recebimento.quantidadeDeQuartosIguais, recebimento.q_luxoT);
			}
			else printf("Quarto de Luxo Triplo COM Cama Adicional no Valor de: %.2f\n", recebimento.q_luxoT);
		}
		if(recebimento.q_camaLuxoT == 2) {
			if(recebimento.seQuartosIguais == 1) {
				recebimento.q_luxoT *= recebimento.quantidadeDeQuartosIguais;
				recebimento.gastosQuartos *= recebimento.quantidadeDeQuartosIguais;
				printf("%d Quarto(s) de Luxo Triplo SEM Cama Adicional no Valor de: %.2f\n", recebimento.quantidadeDeQuartosIguais, recebimento.q_luxoT);
			}
			else printf("Quarto de Luxo Triplo SEM Cama Adicional no Valor de: %.2f\n", recebimento.q_luxoT);
		}
		if(recebimento.q_camaExecutivoS == 1) {
			if(recebimento.seQuartosIguais == 1) {
				recebimento.q_executivoS *= recebimento.quantidadeDeQuartosIguais;
				recebimento.gastosQuartos *= recebimento.quantidadeDeQuartosIguais;
				printf("%d Quarto(s) Executivo Simples COM Cama Adicional no Valor de: %.2f\n", recebimento.quantidadeDeQuartosIguais, recebimento.q_executivoS);
			}
			else printf("Quarto Executivo Simples COM Cama Adicional no Valor de: %.2f\n", recebimento.q_executivoS);
		}
		if(recebimento.q_camaExecutivoS == 2) {
			if(recebimento.seQuartosIguais == 1) {
				recebimento.q_executivoS *= recebimento.quantidadeDeQuartosIguais;
				recebimento.gastosQuartos *= recebimento.quantidadeDeQuartosIguais;
				printf("%d Quarto(s) Executivo Simples SEM Cama Adicional no Valor de: %.2f\n", recebimento.quantidadeDeQuartosIguais, recebimento.q_executivoS);
			}
			else printf("Quarto Executivo Simples SEM Cama Adicional no Valor de: %.2f\n", recebimento.q_executivoS);
		}
		if(recebimento.q_camaExecutivoD == 1) {
			if(recebimento.seQuartosIguais == 1) {
				recebimento.q_executivoD *= recebimento.quantidadeDeQuartosIguais;
				recebimento.gastosQuartos *= recebimento.quantidadeDeQuartosIguais;
				printf("%d Quarto(s) Executivo Duplo COM Cama Adicional no Valor de: %.2f\n", recebimento.quantidadeDeQuartosIguais, recebimento.q_executivoD);
			}
			else printf("Quarto Executivo Duplo COM Cama Adicional no Valor de: %.2f\n", recebimento.q_executivoD);
		}
		if(recebimento.q_camaExecutivoD == 2) {
			if(recebimento.seQuartosIguais == 1) {
				recebimento.q_executivoD *= recebimento.quantidadeDeQuartosIguais;
				recebimento.gastosQuartos *= recebimento.quantidadeDeQuartosIguais;
				printf("%d Quarto(s) Executivo Duplo SEM Cama Adicional no Valor de: %.2f\n", recebimento.quantidadeDeQuartosIguais, recebimento.q_executivoD);
			}
			else printf("Quarto Executivo Duplo SEM Cama Adicional no Valor de: %.2f\n", recebimento.q_executivoD);
		}
		if(recebimento.q_executivoT == 440 * 1.25 || recebimento.q_executivoT == 440) {
			if(recebimento.seQuartosIguais == 1) {
				recebimento.q_executivoT *= recebimento.quantidadeDeQuartosIguais;
				recebimento.gastosQuartos *= recebimento.quantidadeDeQuartosIguais;
				printf("%d Quarto(s) Executivo Triplo no Valor de: %.2f\n", recebimento.quantidadeDeQuartosIguais, recebimento.q_executivoT);
			}
			else printf("Quarto Executivo Triplo no Valor de: %.2f\n", recebimento.q_executivoT);
		}
		recebimento.gastosQuartos += recebimento.q_presidencial + recebimento.q_luxoS + recebimento.q_luxoD + recebimento.q_luxoT + recebimento.q_executivoS + recebimento.q_executivoD + recebimento.q_executivoT;
		recebimento.gastosQuartos *= recebimento.qntdenoites;
		printf("Gastos com os Quartos: %.2f\n", recebimento.gastosQuartos);
		recebimento.contadorBabysitter2 = 1;
		for(recebimento.contadorBabysitter = 0; recebimento.contadorBabysitter < recebimento.babysitterNoites; recebimento.contadorBabysitter++) {
			if(recebimento.altatemp == 1) {
				printf("Servico de Babysitter na Noite %d: %dhrs no Valor de R$:%.2f\n", recebimento.contadorBabysitter2, recebimento.horas[recebimento.contadorBabysitter], recebimento.valor[recebimento.contadorBabysitter]);
				recebimento.contadorBabysitter2++;
			}
			if(recebimento.altatemp == 2) {
				recebimento.valor[recebimento.contadorBabysitter] = recebimento.horas[recebimento.contadorBabysitter] * 45;
				printf("Servico de Babysitter na Noite %d: %dhrs no Valor de R$:%.2f\n", recebimento.contadorBabysitter2, recebimento.horas[recebimento.contadorBabysitter], recebimento.valor[recebimento.contadorBabysitter]);
				recebimento.contadorBabysitter2++;
			}
		}
		printf("Gastos com a Babysitter: %.2f\n", recebimento.gastosBabysitter);
		printf("\n");
    }
    fclose(p_contrato);
}