#include "FilaBanco.h"
#include <iostream>

using namespace std;

int main() {
    FilaBanco filaBanco;

    int escolha;
    do {
        cout << "\nMenu:\n";
        cout << "1. Adicionar cliente na fila\n";
        cout << "2. Remover cliente da fila\n";
        cout << "3. Listar clientes na fila\n";
        cout << "4. Checar se a fila ta vazia\n";
        cout << "5. Adicionar cliente com atendimento prioritario\n";
        cout << "0. Sair\n";

        cout << "Escolha uma opcao: ";
        cin >> escolha;

        switch (escolha) {
            case 1: {
                string nome, cpf, numeroConta, agencia;
                cout << "Digite o nome do cliente: ";
                cin >> nome;
                cout << "Digite o CPF do cliente: ";
                cin >> cpf;
                cout << "Digite o número da conta: ";
                cin >> numeroConta;
                cout << "Digite a agencia: ";
                cin >> agencia;

                ClienteBanco novoCliente(nome, cpf, numeroConta, agencia);
                filaBanco.enqueue(novoCliente);
                cout << "Cliente adicionado a fila.\n";
                break;
            }
            case 2:
                filaBanco.dequeue();
                break;
            case 3:
                filaBanco.printQueue();
                break;
            case 4:
                if (filaBanco.isEmpty()) {
                    cout << "A fila esta vazia.\n";
                } else {
                    cout << "A fila nao esta vazia.\n";
                }
                break;
            case 5: {
                string nome, cpf, numeroConta, agencia;
                cout << "Digite o nome do cliente: ";
                cin >> nome;
                cout << "Digite o CPF do cliente: ";
                cin >> cpf;
                cout << "Digite o número da conta: ";
                cin >> numeroConta;
                cout << "Digite a agencia: ";
                cin >> agencia;

                ClienteBanco novoCliente(nome, cpf, numeroConta, agencia);
                filaBanco.enqueuePriority(novoCliente);
                cout << "Cliente com atendimento prioritario adicionado a fila.\n";
                break;
            }
            case 0:
                cout << "Encerrando o programa.\n";
                break;
            default:
                cout << "Opcao invalida. Tente novamente.\n";
        }
    } while (escolha != 0);

    return 0;
}

