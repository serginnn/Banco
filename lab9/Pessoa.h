
#ifndef LAB9_PESSOA_H
#define LAB9_PESSOA_H
#include <iostream>

using namespace std;
#include <string>

class Pessoa {
public:
    Pessoa(const string& nome, const string& cpf);
    virtual ~Pessoa() = default;

    string getNome() const;
    string getCPF() const;

private:
    string nome;
    string cpf;
};




#endif //LAB9_PESSOA_H
