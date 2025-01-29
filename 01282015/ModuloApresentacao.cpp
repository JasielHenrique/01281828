#include "ModuloApresentacao.hpp"

void Apresentacao ::executar()
{
	 IAAutenticacao *cntrAAutenticacao = new CntrAAutenticacao();
	 ISAutenticacao *cntrSAutenticacao = new CntrSAutenticacao();
	 cntrAAutenticacao->setCntrSAutenticacao(cntrSAutenticacao);
	 IAContas *cntrAContas = new CntrAContas();
	 ISContas *cntrSContas = new CntrSContas();
	 cntrAContas->setCntrSContas(cntrSContas);
	 
	 cout << "Bem vindo(a). Pressione ENTER para comecar" << endl;
	 while (true)
	 {
		  cin.clear();
		  cin.ignore(256, '\n');
		  int valor;
		  cout << endl << "Escolha uma opcao : " << endl;
		  cout << "1- Criar conta" << endl;
		  cout << "2- Autenticar" << endl;
		  cout << "3- Sair" << endl;
		  cin >> valor;
		  switch (valor)
		  {
		  case 1:
				cntrAContas->criar();
				break;

		  case 2:
				Codigo Codigo;
				while (true)
				{
					 try
					 {
						  string entrada;
						  cout << "Digite o Email : ";
						  cin >> entrada;
						  Codigo.setValor(entrada);
						  break;
					 }
					 catch (const invalid_argument &exp)
					 {
						  cout << endl
								 << "Código em formato incorreto. Por favor, digite um código "
									 "valido."
								 << endl;
					 }
				}
				bool resultado;
				resultado = cntrAAutenticacao->autenticar(&Codigo);
				if (resultado)
				{
					 while (true)
					 {
						  cin.clear();
						  cin.ignore(256, '\n');
						  int opcao;
						  cout << endl << "Escolha uma opcao : " << endl;
						  cout << "1- Servico relacionados a contas" << endl;
						  cout << "2- Servico relacionados a Viagens" << endl;
						  cout << "3- Sair" << endl;
						  cin >> opcao;
						  switch (opcao)
						  {
						  case 1:
								if (cntrAContas->executar(Codigo))
									 opcao = 3;
								break;
						  case 2:
								//cntrViagens->executar(Codigo);
								break;
						  }
						  if (opcao == 3)
						  {
								break;
						  }
					 }
				}
				else
				{
					 cout << "Falha na autenticacao" << endl;
				}
				break;
		  }
		  if (valor == 3)
		  {
				break;
		  }
	 }
}
