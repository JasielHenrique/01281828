#ifndef INTERFACESERVICOAUTENTICACAO_H_INCLUDED
#define INTERFACESERVICOAUTENTICACAO_H_INCLUDED
#include "dominios.hpp"
#include "entidades.hpp"



class ISAutenticacao{
    public:
        virtual bool autenticar(Codigo*,Senha&)=0;
        virtual ~ ISAutenticacao() {};
    };

#endif // INTERFACESERVICOAUTENTICACAO_H_INCLUDED
