#ifndef CONTROLADORAS_HPP_INCLUDED
#define CONTROLADORAS_HPP_INCLUDED

#include "interfaces.hpp"

#include <stdexcept>
#include <iostream>
#include <typeinfo>

#include "interfaces.hpp"
#include "dominios.hpp"

#include <stdexcept>
#include <iostream>

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




class CntrIAConta : public IAConta {
private:
    ISConta* cntrISConta;
public:
    void criarConta(const Conta&) override;
    Conta lerConta(const Codigo&) override;
    void atualizarConta(const Conta&) override;
    void executarConta(const Codigo&) override;
    void setCntrISConta(ISConta*) override;
};

// Implementação inline (se necessário)
inline void CntrIAConta::setCntrISConta(ISConta* cntr) {
    this->cntrISConta = cntr;
}
#endif // CONTROLADORAS_HPP_INCLUDED
