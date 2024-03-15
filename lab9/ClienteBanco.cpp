
#include "ClienteBanco.h"

using namespace std;

ClienteBanco:: ClienteBanco(const string& nome, const string& cpf,  string& numeroConta, string& agencia)
        : Pessoa(nome, cpf), numeroConta(numeroConta), agencia(agencia) {}

string ClienteBanco::getNumeroConta() const {
    return numeroConta;
}

string ClienteBanco::getAgencia() const {
    return agencia;
}

