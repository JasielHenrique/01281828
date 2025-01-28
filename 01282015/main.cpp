#include <iostream>
#include <stdexcept>
#include <string>
#include "dominios.hpp"
#include "testes.hpp"
#include "entidades.hpp"
#include "stubs.hpp"
#include "controladoras.hpp"
#include "interfaces.hpp"
#include "interfaces.hpp"


using namespace std;

int main() {

    IAAutenticacao *cntrIAAutenticacao = new CntrIAAutenticacao();
    ISAutenticacao *stubISAutenticacao = new StubISAutenticacao();

    cntrIAAutenticacao-> setCntrISAutenticacao(stubISAutenticacao);

    bool resultado;

    Codigo codigo;

    while(true){
        cout << endl << "Tela inicial de sistema" << endl;

        try {
            resultado = cntrIAAutenticacao->autenticar(&codigo);
        }
        catch(const runtime_error &exp){
            cout << "Erro de sistema" << endl;
            break;
        }

        if(resultado){
            cout << endl << "Sucesso autenticacao." << endl;
            cout << endl << "Codigo = " << codigo.getValor() << endl;
            break;
        }
        else {
            cout << endl << "Erro autenticacao" << endl;
            break;
        }
    }
    
    // Gerenciamento de Conta
        IAConta* cntrIAConta = new CntrIAConta();
        ISConta* stubISConta = new StubISConta();
        cntrIAConta->setCntrISConta(stubISConta);

        // Exemplo: Criar conta
        Conta novaConta;
        Codigo codigoConta;
        codigoConta.setValor("ABC123");
        novaConta.setCodigo(codigoConta);
        cntrIAConta->criarConta(novaConta);

        // Exemplo: Executar conta
        cntrIAConta->executarConta(codigoConta);

        delete cntrIAConta;
        delete stubISConta;

    delete cntrIAAutenticacao;
    delete stubISAutenticacao;


    return 0;
}
