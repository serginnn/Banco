#include "FilaBanco.h"
#include <iostream>

using namespace std;

void FilaBanco::enqueue(const ClienteBanco& cliente) {
    fila.push_back(cliente);
}

void FilaBanco::enqueuePriority(const ClienteBanco& cliente) {
    fila.insert(fila.begin(), cliente);
}

void FilaBanco::dequeue() {
    if (!fila.empty()) {
        cout << "Removendo cliente: " << fila.front().getNome() << "\n";
        fila.erase(fila.begin());
    } else {
        cout << "Fila vazia. Nenhum cliente para remover.\n";
    }
}

void FilaBanco::printQueue() const {
    if (isEmpty()) {
        cout << "Fila vazia.\n";
    } else {
        cout << "Clientes na fila:\n";
        for (const auto& cliente : fila) {
            cout << "Nome: " << cliente.getNome() << ", CPF: " << cliente.getCPF()
                 << ", Conta: " << cliente.getNumeroConta() << ", Agencia: " << cliente.getAgencia() << "\n";
        }
    }
}

bool FilaBanco::isEmpty() const {
    return fila.empty();
}

