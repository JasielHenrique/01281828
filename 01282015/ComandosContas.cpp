#include "ComandosContas.hpp"
void ComandoExcluir ::executar(ISContas *cntrSConta, Codigo &Codigo)
{
	 cntrSConta->excluir(Codigo);
}

void ComandoAtualizar ::executar(ISContas *cntrSConta, Codigo &Codigo)
{
	 Conta conta;
	 while (true)
	 {
		  
		  Senha senha;
		
		  while (true)
		  {
				try
				{
					 string valor;
					 cout << "Digite a nova senha :" << endl;
					 cin >> valor;
					 senha.setSenha(valor);

					 break;
				}
				catch (invalid_argument &exp)
				{
					 cout << "Digite uma senha valida" << endl;
				}
		  }

		 
		  conta.setSenha(senha);
		  conta.setCodigo(Codigo);
		  break;
	 }
	 bool resultado;
	 resultado = cntrSConta->atualizar(conta);
	 if (resultado)
	 {
		  cout << "Dados alterados com sucesso." << endl << endl;
	 }
	 else
	 {
		  cout << "Erro" << endl;
	 }
}

void ComandoLer ::executar(ISContas *cntrSConta, Codigo &Codigo)
{
	 cntrSConta->ler(&Codigo);
}
