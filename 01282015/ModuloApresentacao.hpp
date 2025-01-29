//
//  ModuloApresentacao.hpp
//  tp1-01271751
//
//  Created by Jasiel Genuíno on 28/01/25.
//

#ifndef MODULOAPRESENTACAO_H_INCLUDED
#define MODULOAPRESENTACAO_H_INCLUDED

// Incluir os outros arquivos
#include <iostream>
#include <stdexcept>
#include <string>
#include "CntrApresentacaoAutenticacao.hpp"
#include "CntrApresentacaoAutenticacao.cpp"
#include "CntrServicoAutenticacao.hpp"
#include "CntrServicoAutenticacao.cpp"
#include "ContainerContas.hpp"
#include "ContainerContas.cpp"
#include "dominios.hpp"
#include "dominios.cpp"
#include "entidades.hpp"
#include "entidades.cpp"
#include "testes.hpp"
#include "testes.cpp"
#include "InterfacesApresentacaoAutenticacao.hpp"
#include "InterfacesApresentacaoContas.hpp"
#include "InterfaceServicoAutenticacao.hpp"
#include "InterfaceServicoContas.hpp"
#include "CntrServicoContas.hpp"
#include "CntrServicoContas.cpp"
#include "CntrApresentcaoContas.hpp"
#include "CntrApresentcaoContas.cpp"

class Apresentacao {
    
private:
    IAAutenticacao *CntrIAAutenticacao;
    //IAContas *cntrAContas;
    //IAViajens *cntrAProjetos;
public :
    void executar();
};


#endif // MODULOAPRESENTACAO_H_INCLUDED
