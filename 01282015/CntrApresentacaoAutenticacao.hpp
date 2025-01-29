#ifndef CNTRAPRESENTACAOAUTENTICACAO_HPP_INCLUDED
#define CNTRAPRESENTACAOAUTENTICACAO_HPP_INCLUDED

#include "InterfacesApresentacaoAutenticacao.hpp"
#include <stdexcept>
#include <iostream>
#include <typeinfo>
#include "InterfaceServicoAutenticacao.hpp"
#include "dominios.hpp"
#include "entidades.hpp"

using namespace std;


class CntrAAutenticacao : public IAAutenticacao
{
  private:
	 ISAutenticacao *cntrSAutenticacao;

  public:
	 bool autenticar(Codigo *);
	 void setCntrSAutenticacao(ISAutenticacao *);
};
inline void CntrAAutenticacao::setCntrSAutenticacao(ISAutenticacao *ptrCntrSAutenticacao)
{
	 this->cntrSAutenticacao = ptrCntrSAutenticacao;
}



#endif // CNTRAPRESENTACAOAUTENTICACAO_HPP_INCLUDED