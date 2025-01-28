#ifndef INTERFACES_HPP_INCLUDED
#define INTERFACES_HPP_INCLUDED

#include "dominios.hpp"
#include "entidades.hpp"

using namespace std;

class ISAutenticacao;

class IAAutenticacao{
public:
    virtual bool autenticar(Codigo*) = 0;
    virtual void setCntrISAutenticacao(ISAutenticacao *) = 0;
    virtual ~IAAutenticacao(){}
};

class ISAutenticacao{
public:
    virtual bool autenticar(const Codigo&, const Senha&) = 0;
    virtual ~ISAutenticacao(){}
};



class ISConta; // Forward declaration

class IAConta {
public:
    virtual void criarConta(const Conta&) = 0;
    virtual Conta lerConta(const Codigo&) = 0;
    virtual void atualizarConta(const Conta&) = 0;
    virtual void executarConta(const Codigo&) = 0;
    virtual void setCntrISConta(ISConta*) = 0;
    virtual ~IAConta(){}
};

class ISConta {
public:
    virtual void criar(const Conta&) = 0;
    virtual Conta ler(const Codigo&) = 0;
    virtual void atualizar(const Conta&) = 0;
    virtual ~ISConta(){}
};

#endif // INTERFACES_HPP_INCLUDED
