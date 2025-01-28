#ifndef CNTRSERVICOAUTENTICACAO_H_INCLUDED
#define CNTRSERVICOAUTENTICACAO_H_INCLUDED
#include "InterfaceServicoAutenticacao.hpp"
#include <stdexcept>
#include <iostream>
//#include "ontainerContas.h"

using namespace std;


class CntrSAutenticacao : public ISAutenticacao {
public:
    bool autenticar(Codigo* , Senha&);
};

#endif // CNTRSERVICOAUTENTICACAO_H_INCLUDED
