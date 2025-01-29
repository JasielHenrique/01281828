#ifndef CNTRAPRESENTACAOCONTAS_HPP_INCLUDED
#define CNTRAPRESENTACAOCONTAS_HPP_INCLUDED
#include "InterfacesApresentacaoContas.hpp"
#include "InterfaceServicoContas.hpp"
#include "dominios.hpp"
#include "entidades.hpp"
#include <stdexcept>
#include <iostream>

using namespace std;

// 221007152
class CntrAContas : public IAContas {
    private:
        ISContas *cntrSContas;
        const static int EXCLUIR = 1;
        const static int ATUALIZAR = 2;
        const static int LER = 3;
        const static int RETORNAR = 4;
    public :
        bool executar (Codigo&);
        void setCntrSContas(ISContas*);
        void cadastrar();


};
inline void CntrAContas :: setCntrSContas(ISContas *cntr){
    this-> cntrSContas = cntr;


}




#endif // CNTRAPRESENTACAOCONTAS_HPP_INCLUDED
