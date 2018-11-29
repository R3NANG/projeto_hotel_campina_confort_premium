#include "login.c"
#include "struct.c"
#include "dados.c"
#include "quartos.c"
#include "babysitter.c"
#include "alugueldecarro.c"
#include "listarcontratos.c"

void login();
HOSPEDE dadoscliente(struct dados HOSPEDE);
HOSPEDE quartos(struct dados HOSPEDE);
HOSPEDE babysitter(struct dados HOSPEDE);
float alugueldecarro(int altatemp, int qntdenoites);
void listarcontratos(struct dados HOSPEDE);