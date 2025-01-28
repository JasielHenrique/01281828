#include "stubs.hpp"

#include <iostream>

using namespace std;

const std::string StubISAutenticacao::TRIGGER_FALHA = "a.c123";
const std::string StubISAutenticacao::TRIGGER_ERRO_SISTEMA = "asdadasdas";

bool StubISAutenticacao::autenticar(const Codigo& codigo, const Senha& senha){

    cout << endl << "StubISAutenticacao:: autenticar" << endl;
    cout << "Codigo = " << codigo.getValor() << endl;
    cout << "Senha = " << senha.getSenha() << endl;


    if(codigo.getValor() == TRIGGER_FALHA)
        return false;
    else if(codigo.getValor() == TRIGGER_ERRO_SISTEMA)
        throw runtime_error("Erro no sistema");

    return true;

}
