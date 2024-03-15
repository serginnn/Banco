
#ifndef LAB9_FILABANCO_H
#define LAB9_FILABANCO_H
#include "ClienteBanco.h"
#include <vector>
#include <iostream>
using namespace std;

class FilaBanco {
public:
    void enqueue(const ClienteBanco& cliente);
    void enqueuePriority(const ClienteBanco& cliente);
    void dequeue();
    void printQueue() const;
    bool isEmpty() const;

private:
    vector<ClienteBanco> fila;
};
#endif //LAB9_FILABANCO_H
