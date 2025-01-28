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
#include "controladoras.hpp"
#include "controladoras.cpp"
#include "interfaces.hpp"
#include "dominios.hpp"
#include "dominios.cpp"
#include "entidades.hpp"
#include "entidades.cpp"
#include "stubs.hpp"
#include "stubs.cpp"
#include "testes.hpp"
#include "testes.cpp"
#include "main.cpp"




class Apresentacao {
    
private:
    IAAutenticacao *CntrIAAutenticacao;
    IAContas *cntrAContas;
    IAViajens *cntrAProjetos;
public :
    void executar();
};


#endif // MODULOAPRESENTACAO_H_INCLUDED
