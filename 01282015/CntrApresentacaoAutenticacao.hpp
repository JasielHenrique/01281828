#ifndef CNTRAPRESENTACAOAUTENTICACAO_H_INCLUDED
#define CNTRAPRESENTACAOAUTENTICACAO_H_INCLUDED

#include "InterfacesApresentacaoAutenticacao.hpp"
#include <stdexcept>
#include <iostream>
#include <typeinfo>
#include "InterfaceServicoAutenticacao.hpp"
#include "dominios.hpp"
#include "entidades.hpp"

using namespace std;

class CntrIAAutenticacao: public IAAutenticacao {
private:
    ISAutenticacao *cntrISAutenticacao;
public:
    bool autenticar(Codigo*);
    void setCntrISAutenticacao(ISAutenticacao*);
};

void inline CntrIAAutenticacao::setCntrISAutenticacao(ISAutenticacao *cntrISAutenticacao){
    this-> cntrISAutenticacao = cntrISAutenticacao;
}


#endif // CNTRAPRESENTACAOAUTENTICACAO_H_INCLUDED