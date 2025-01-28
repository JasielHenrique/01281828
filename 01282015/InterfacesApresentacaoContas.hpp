#ifndef INTERFACEAPRESENTACAOCONTAS_HPP_INCLUDED
#define INTERFACEAPRESENTACAOCONTAS_HPP_INCLUDED
#include "InterfaceServicoContas.hpp"

 class IAContas {
public:
    virtual bool executar(Codigo&) =0;
    virtual void setCntrSContas(ISContas*)=0;
    virtual void criar() =0;
    virtual ~ IAContas () {};


 };


#endif // INTERFACEAPRESENTACAOCONTAS_HPP_INCLUDED
