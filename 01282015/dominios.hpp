#ifndef dominios
#define dominios

#include <string>

using namespace std;

// Domínio: Avaliação
/// Representa uma nota, utilizada para classificar uma Viagem, Atividade, Destino ou Hospedagem.
///
/// Regras de formato:
/// - N&uacute;mero inteiro maior ou igual a 0 e 5.

/// Autor: Uilmar V. Silva - Mat. 180037897
class Avaliacao {
private:
    int digito;
    void validar(int);

public:
    /// Armazena o d&iacute;gito informado caso seja v&aacute;lido.
    ///
    /// Lan&ccedil;a exce&ccedil;&atilde;o caso o valor informado seja inv&aacute;lido.
    /// @param digito Avaliacao
    /// @throw invalid_argument
    void setDigito(int);
    /// Retorna inst&acirc;ncia da classe Avalia&ccedil;&atilde;o.
    /// @return Avaliacao
    int getDigito() const;
};
inline int Avaliacao::getDigito() const {
    return digito;
}

// Domínio: Codigo
/// Sequ&ecirc;ncia de caracteres que funciona como identificador &uacute;nico de uma Conta
///, Viagem, Atividade, Destino ou Hospedagem.
///
/// Regras de formato:
/// - Sequ&ecirc;ncia de seis caracteres, composta por letras de A a Z (mai&uacute;sculas e
/// min&uacute;sculas) ou n&uacute;meros de 0 a 9 (inclusive).

/// Autor: Marcos Andre B. Ribeiro - Mat.190033967
class Codigo {
private:
    string valor;
    void validar(string);

public:
    /// Armazena o codigo informado caso seja v&aacute;lido.
    ///
    /// Lan&ccedil;a exce&ccedil;&atilde;o caso o codigo informado seja inv&aacute;lido.
    /// @param valor Codigo

    /// @throw invalid_argument
    void setValor(string);
    /// Retorna inst&acirc;ncia da classe Codigo.
    /// @return Codigo
    string getValor() const;
};
inline string Codigo::getValor() const {
    return valor;
}
// Domínio: Data
/// Designa dia e m&ecirc;s em determinado ano, utilizado para informar dia em que ocorre
/// um dado evento em Atividade e Destino.
///
/// Regras de formato:
/// - Segue a formata&ccedil;&atilde;o DD-MM-AA, em que DD &eacute; um inteiro entre 01 e 31
///(inclusive) e designa um dia, MM &eacute; um inteiro entre 01 e 12 (inclusive) e designa um
/// m&ecirc;s e AA &eacute; um inteiro entre 00 e 99 (inclusive) e designa um ano.

/// Autor: Gustavo M. Barreto - Mat. 232026414
class Data {
private:
    string data;
    void validar(const std::string &data);
    bool anoBissexto(int);

public:
    /// Armazena a data informada caso seja v&aacute;lida.
    ///
    /// Lan&ccedil;a exce&ccedil;&atilde;o caso a data informada seja inv&aacute;lida.
    /// @param data Data

    /// @throw invalid_argument
    void setData(string);
    /// Retorna inst&acirc;ncia da classe Data.
    /// @return Data
    string getData() const;
};
inline string Data::getData() const {
    return data;
}
// Domínio: Dinheiro
/// Valor n&uacute;merico que expressa import&acirc;ncia monet&aacute;ria de pre&ccedil;o
/// de Atividade ou di&aacute;ria de Hospedagem
///
/// Regras de formato:
/// - Valor de 0,00 a 200.000,00

/// Autor: Jasiel Henrique A. G. Santos - Mat. 200061810
class Dinheiro {
private:
    double dinheiro;
    void validar(double);

public:
    /// Armazena o valor de dinheiro informado caso seja v&aacute;lido.
    ///
    /// Lan&ccedil;a exce&ccedil;&atilde;o caso o valor de dinheiro informado seja inv&aacute;lido.
    /// @param dinheiro Dinheiro

    /// @throw invalid_argument
    void setDinheiro(double);
    /// Retorna inst&acirc;ncia da classe Dinheiro.
    /// @return Dinheiro
    double getDinheiro() const;
};
inline double Dinheiro::getDinheiro() const {
    return dinheiro;
};
// Domínio: Duracao
/// Representa um per&iacute;odo de tempo em dias, utilizado para identificar a extens&atilde;o
/// de uma Atividade.
///
/// Regras de formato:
/// - N&uacute;mero inteiro maior ou igual a 0 e menor ou igual a 360.

/// Autor: Eduardo de F. Bicudo - Mat. 232011449
class Duracao {
private:
    int duracao;
    void validar(int);

public:
    /// Armazena a dura&ccedil;&atilde;o informada caso seja v&aacute;lida.
    ///
    /// Lan&ccedil;a exce&ccedil;&atilde;o caso a dura&ccedil;&atilde;o informada seja inv&aacute;lida.
    /// @param duracao Duracao

    /// @throw invalid_argument
    void setDuracao(int);
    /// Retorna inst&acirc;ncia da classe Duracao.
    /// @return Duracao
    int getDuracao() const;
};
inline int Duracao::getDuracao() const {
    return duracao;
};

// Domínio: Horario
/// Representa um momento no formato de 24 horas que designa a programa&ccedil;&atilde;o de
/// uma Atividade.
///
/// Regras de formato:
/// - Estruturada na forma HH:MM, em que HH &eacute; um n&uacute;mero inteiro que vai de 00 a 23
///(inclusive) e designa a hora da atividade e MM &eacute; um n&uacute;mero inteiro que vai de
/// 00 a 59 (inclusive) e designa os minutos.

/// Autor: Fernando Vera-Cruz de O. F . Araujo - Mat.221018915
class Horario {
private:
    string horario;
    void validar(const std::string &horario);

public:
    /// Armazena o hor&aacute;rio informado caso seja v&aacute;lido.
    ///
    /// Lan&ccedil;a exce&ccedil;&atilde;o caso o hor&aacute;rio informado seja inv&aacute;lido.
    /// @param horario Horario
    /// @throw invalid_argument
    void setHorario(const string &horario);
    /// Retorna inst&acirc;ncia da classe Horario.
    /// @return Horario
    string getHorario() const;
};
inline string Horario::getHorario() const {
    return horario;
}
// Domínio: Nome
/// Denomina e identifica uma Viagem, Atividade, Destino ou Hospedagem.
///
/// Regras de formato:
/// - Texto com at&eacute; 30 caracteres

/// Autor: Jasiel Henrique A. G. Santos - Mat. 200061810
class Nome {
private:
    string nome;
    void validar(const string &nome);

public:
    /// Armazena o nome informado caso seja v&aacute;lido.
    ///
    /// Lan&ccedil;a exce&ccedil;&atilde;o caso o nome informado seja inv&aacute;lido.
    /// @param nome Nome
    /// @throw invalid_argument
    void setNome(string);
    /// Retorna inst&acirc;ncia da classe Nome.
    /// @return Nome
    string getNome() const;
};
inline string Nome::getNome() const {
    return nome;
}
// Domínio: Senha
/// Representa o c&oacute;digo utilizado para autentica&ccedil;&atilde;o em uma dada Conta.
///
/// Regras de formato:
/// - &Eacute; composta por 5 n&uacute;meros inteiros de 1 a 9 (inclusive). N&atilde;o
/// permite d&iacute;gitos duplicados, nem aceita que os 5 d&iacute;gitos sejam uma sequ&ecirc;ncia
/// crescente ou descresente com incremento de +1 ou -1 (exemplos: 01234, 76543).

/// Autor: Jasiel Henrique A. G. Santos - Mat. 200061810
class Senha {

private:
    string senha;
    void validar(const std::string &senha);

public:
    /// Armazena a senha informada caso seja v&aacute;lida.
    ///
    /// Lan&ccedil;a exce&ccedil;&atilde;o caso a senha informada seja inv&aacute;lida.
    /// @param senha Senha
    /// @throw invalid_argument
    void setSenha(string);
    /// Retorna inst&acirc;ncia da classe Senha.
    /// @return Senha
    string getSenha() const;
};
inline string Senha::getSenha() const {
    return senha;
}

#endif // DOMINIOS_HPP
