#include "CntrApresentacaoAutenticacao.hpp"
//#include "CntrServicoAutenticacao.hpp"

bool CntrIAAutenticacao :: autenticar(Codigo *Codigo) {
    Senha senha;
    string entrada;
            while (true){
                    try{
                    cout << "Digite a senha : ";
                    cin >> entrada;
                    senha.setSenha(entrada);
                    break;
                       }catch (const invalid_argument &exp) {
            cout << endl << "Senha em formato incorreto. Por favor, digite uma senha valida." << endl;
                                            };
                        }
    bool resultado = cntrISAutenticacao-> autenticar(Codigo , senha);
    return resultado;


}
