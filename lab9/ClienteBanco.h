
#ifndef LAB9_CLIENTEBANCO_H
#define LAB9_CLIENTEBANCO_H
#include "Pessoa.h"
#include <iostream>

using namespace std;
class ClienteBanco : public Pessoa {
public:
    ClienteBanco(const string& nome, const string& cpf,  string& numeroConta, string& agencia);

    string getNumeroConta() const;
    string getAgencia() const;

private:
    string numeroConta;
    string agencia;
};
#endif //LAB9_CLIENTEBANCO_H
