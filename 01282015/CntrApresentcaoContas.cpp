#include "CntrApresentcaoContas.hpp"
#include "ComandosContas.hpp"
#include "ModuloApresentacao.hpp"

bool CntrAContas::executar(Codigo &Codigo)
{
	 Apresentacao *apresentacao = new Apresentacao(); 
	 ComandoContas *comando;
	 int opcao;
	 while (true)
	 {
		  cin.clear();
		  cin.ignore(256, '\n');
		  cout << "Selecione uma opcao :" << endl << endl;
		  cout << "Excluir - " << EXCLUIR << endl;
		  cout << "Editar - " << ATUALIZAR << endl;
		  cout << "Vizualizar - " << LER << endl;
		  cout << "Retornar  - " << RETORNAR << endl;
		  cin >> opcao;

		  switch (opcao)
		  {
		  case EXCLUIR:
				comando = new ComandoExcluir();
				comando->executar(cntrSContas, Codigo);
				delete comando;
				return true;
				// break;

		  case ATUALIZAR:
				comando = new ComandoAtualizar();
				comando->executar(cntrSContas, Codigo);
				delete comando;
				break;

		  case LER:
				comando = new ComandoLer();
				comando->executar(cntrSContas, Codigo);
				break;
		  }

		  if (opcao == RETORNAR)
		  {
				break;
		  }
	 }
	 return false;
}

void CntrAContas ::cadastrar()
{
	 Senha senha;
	 Codigo Codigo;
	 Conta conta;
	 while (true)
	 {
		  while (true)
		  {
				try
				{
					 string valor;
					 cout << "Digite o Codigo da conta : " << endl;
					 cin >> valor;
					 Codigo.setValor(valor);
					 break;
				}
				catch (invalid_argument &exp)
				{
					 cout << "Digite um Codigo valido " << endl;
				}
		  }
		  while (true)
		  {
				try
				{
					 string valor;
					 cout << "Digite a senha da conta : " << endl;
					 cin >> valor;
					 senha.setSenha(valor);
					 break;
				}
				catch (invalid_argument &exp)
				{
					 cout << "Digite uma senha valida. " << endl;
				}
		  }
		  
		  break;
	 }
	 conta.setCodigo(Codigo);
	 conta.setSenha(senha);
	 bool resultado;
	 resultado = cntrSContas->criar(conta);
	 if (resultado)
	 {
		  cout << "Conta criada com sucesso" << endl;
	 }
	 else
	 {
		  cout << "Erro na criacao. " << endl;
	 }
}
