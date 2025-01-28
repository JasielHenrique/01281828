#include "CntrServicoAutenticacao.hpp"
#include "ContainerContas.hpp"

bool CntrSAutenticacao :: autenticar (Codigo* Codigo, Senha &Senha){
    bool resultado;
    ContainerContas *containerContas = ContainerContas :: getInstancia();
    resultado=containerContas->autenticar(Codigo,Senha);
    if(resultado){
        return true;
    }else{return false;}
}

