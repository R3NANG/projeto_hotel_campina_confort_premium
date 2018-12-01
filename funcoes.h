#include "login.c"
#include "struct.c"
#include "dados.c"
#include "quartos.c"
#include "babysitter.c"
#include "alugueldecarro.c"
#include "checkout.c"
#include "listarcontratos.c"
#include "pesquisarcontrato.c"
#include "alterarcontrato.c"
#include "contratosabertos.c"
#include "contratosfechados.c"

void cabecalho();
void login();
HOSPEDE dadoscliente(struct dados HOSPEDE);
HOSPEDE quartos(struct dados HOSPEDE);
HOSPEDE babysitter(struct dados HOSPEDE);
HOSPEDE alugueldecarro(struct dados HOSPEDE);
void checkout(struct dados HOSPEDE);
void listarcontratos(struct dados HOSPEDE);
void pesquisarcontrato(struct dados HOSPEDE);
void alterarcontrato(struct dados HOSPEDE);
void contratosabertos(struct dados HOSPEDE);
void contratosfechados(struct dados HOSPEDE);