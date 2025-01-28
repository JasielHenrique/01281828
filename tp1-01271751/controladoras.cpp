#include "controladoras.hpp"

bool CntrIAAutenticacao::autenticar(Codigo *codigo){
    Senha senha;
    string entrada;

    while(true){
        cout << endl << "Autenticacao de usuario" << endl << endl;

        try{
            cout << "Digite o codigo: ";
            cin >> entrada;
            codigo->setValor(entrada);
            cout << "Digite a senha: ";
            cin >> entrada;
            senha.setSenha(entrada);
            break;
        }
        catch(const invalid_argument &exp){
            cout << endl << "Entrada em formato incorreto" << endl;
        }
    }

    bool resultado = cntrISAutenticacao-> autenticar(*codigo, senha);

    return resultado;

}

void CntrIAConta::criarConta(const Conta& conta) {
    cntrISConta->criar(conta);
}

Conta CntrIAConta::lerConta(const Codigo& codigo) {
    return cntrISConta->ler(codigo);
}

void CntrIAConta::atualizarConta(const Conta& conta) {
    cntrISConta->atualizar(conta);
}

void CntrIAConta::executarConta(const Codigo& codigo) {
    Conta conta = lerConta(codigo);
    // Lógica adicional de execução (ex: exibir dados)
    cout << "Executando conta: " << conta.getCodigo().getValor() << endl;
}
