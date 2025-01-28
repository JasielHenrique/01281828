#ifndef INTERFACESERVICOCONTAS_HPP_INCLUDED
#define INTERFACESERVICOCONTAS_HPP_INCLUDED
#include "entidades.hpp"
#include "dominios.hpp"


class ISContas{
    public:
        virtual bool criar (Conta&)=0;
        virtual bool excluir(Codigo&) =0;
        virtual bool atualizar(Conta&)=0;
        virtual void ler (Codigo*)=0;
        virtual ~ ISContas  () {};




};

#endif // INTERFACESERVICOCONTAS_H_INCLUDED
