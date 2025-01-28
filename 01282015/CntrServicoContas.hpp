#ifndef CNTRSERVICOCONTAS_HPP_INCLUDED
#define CNTRSERVICOCONTAS_HPP_INCLUDED
#include "InterfaceServicoContas.hpp"
#include <stdexcept>
#include <iostream>
#include "ContainerContas.hpp"

using namespace std;


class CntrSContas : public ISContas  {
public:
    bool criar (Conta&);
    bool excluir(Codigo&);
    bool atualizar (Conta&);
    void ler(Codigo*);
};


#endif // CNTRSERVICOCONTAS_HPP_INCLUDED
