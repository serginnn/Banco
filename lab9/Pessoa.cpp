#include "Pessoa.h"

using namespace std;

Pessoa::Pessoa(const string& nome, const string& cpf) : nome(nome), cpf(cpf) {}

string Pessoa::getNome() const {
    return nome;
}

string Pessoa::getCPF() const {
    return cpf;
}



