#ifndef CONTAINERCONTAS_H_INCLUDED
#define CONTAINERCONTAS_H_INCLUDED
#include "entidades.hpp"
#include "dominios.hpp"
#include <list>

using namespace std;


class ContainerContas{
private:
    list<Conta> container;
    static ContainerContas* instancia ;
    ContainerContas();

public:
    static ContainerContas* getInstancia() {
        if (instancia == nullptr) {
            instancia = new ContainerContas();
        }
        return instancia;
    }

    bool incluir(Conta);
    bool remover (Codigo&);
    Conta vizualizar (Codigo*);
    bool atualizar (Conta);
    bool autenticar (Codigo *,Senha&);
};



#endif // CONTAINERCONTAS_H_INCLUDED
