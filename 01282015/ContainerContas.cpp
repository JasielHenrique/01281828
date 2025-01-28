#include "ContainerContas.hpp"
#include "entidades.hpp"
//#include "ContainerViagens.hpp"
ContainerContas *ContainerContas::instancia = nullptr;
bool ContainerContas::incluir(Conta conta)
{
	 for (list<Conta>::iterator elemento = container.begin(); elemento != container.end(); elemento++)
	 {
		  if (elemento->getCodigo().getValor() == conta.getCodigo().getValor())
		  {
				return false;
		  }
	 }
	 container.push_back(conta); // Incluir objeto.
	 return true;
}

bool ContainerContas::remover(Codigo &Codigo)
{
	//  for (list<Conta>::iterator elemento = container.begin(); elemento != container.end(); elemento++)
	//  {
	// 	  if (elemento->getEmailConta().getEmail() == email.getEmail())
	// 	  {
	// 			container.erase(elemento); // Remover objeto localizado.

	// 			ContainerQuadros *containerQuadros = ContainerQuadros ::getInstancia();
	// 			list<Quadro> quadrosDoUsuario = containerQuadros->filtrarPorEmail(email);
	// 			for (list<Quadro>::iterator elemento = quadrosDoUsuario.begin(); elemento != quadrosDoUsuario.end();
	// 				  elemento++)
	// 			{
	// 				 Codigo codigoQuadro = elemento->getCodigoQuadro();
	// 				 containerQuadros->removerQuadro(codigoQuadro);
	// 			}

	// 			return true;
	// 	  }
	//  }
	 return false;
}

Conta ContainerContas::vizualizar(Codigo *Codigo)
{
	 Conta conta;
	 for (list<Conta>::iterator elemento = container.begin(); elemento != container.end(); elemento++)
	 {
		  if (elemento->getCodigo().getValor() == Codigo->getValor())
		  {
				conta.setCodigo(elemento->getCodigo());
				conta.setSenha(elemento->getSenha());
				
				return conta;
		  }
	 }
}

bool ContainerContas::atualizar(Conta conta)
{
	 for (list<Conta>::iterator elemento = container.begin(); elemento != container.end(); elemento++)
	 {
		  if (elemento->getCodigo().getValor() == conta.getCodigo().getValor())
		  {
				*elemento = conta;
				return true;
		  }
	 }
	 return false;
}
bool ContainerContas ::autenticar(Codigo *Codigo, Senha &senha)
{
	 for (list<Conta>::iterator elemento = container.begin(); elemento != container.end(); elemento++)
	 {
		  if (elemento->getCodigo().getValor() == Codigo->getValor() &&
				elemento->getSenha().getSenha() == senha.getSenha())
		  {
				return true;
		  }
	 }
	 return false;
}
ContainerContas ::ContainerContas(){};
