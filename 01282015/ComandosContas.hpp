#ifndef COMANDOSCONTAS_H_INCLUDED
#define COMANDOSCONTAS_H_INCLUDED
#include <stdexcept>
#include <iostream>
#include <cstdlib>
#include "dominios.hpp"
#include "entidades.hpp"
#include "InterfacesApresentacaoContas.hpp"
#include "InterfaceServicoContas.hpp"


class ComandoContas {
public:
    virtual void executar(ISContas*,Codigo&)=0;
    virtual ~ ComandoContas() {}
};


class ComandoExcluir : public ComandoContas{
public:
    void executar(ISContas*,Codigo&);
    };


class ComandoLer : public ComandoContas {
public:
    void executar(ISContas*,Codigo&);
    };


class ComandoAtualizar : public ComandoContas{
public:
    void executar(ISContas*,Codigo&);
    };







#endif // COMANDOSCONTAS_H_INCLUDED
