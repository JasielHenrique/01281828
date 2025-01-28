#ifndef STUBS_HPP_INCLUDED
#define STUBS_HPP_INCLUDED


#include "interfaces.hpp"

#include <stdexcept>
#include <iostream>
#include <typeinfo>

class StubISAutenticacao: public ISAutenticacao {
private:
    const static std::string TRIGGER_FALHA;
    const static std::string TRIGGER_ERRO_SISTEMA;

public:
    bool autenticar(const Codigo&, const Senha&);
};

class StubISConta : public ISConta {
public:
    void criar(const Conta& conta) override {
        cout << "Stub: Conta criada - " << conta.getCodigo().getValor() << endl;
    }
    
    Conta ler(const Codigo& codigo) override {
        Conta conta;
        conta.setCodigo(codigo);
        return conta;
    }
    
    void atualizar(const Conta& conta) override {
        cout << "Stub: Conta atualizada - " << conta.getCodigo().getValor() << endl;
    }
};
#endif // STUBS_HPP_INCLUDED
