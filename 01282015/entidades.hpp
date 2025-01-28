#ifndef entidades
#define entidades



using namespace std;

//// Nâo editar este arquivo.
// Entidade: Conta
/// Entidade Conta representa as credenciais do usu&aacute;rio do sistema.
///
/// Finalidade: Permitir cadastro e autentica&ccedil;&atilde;o do cliente e seu acesso ao sistema.

/// Autor: Eduardo de F. Bicudo - Mat. 232011449
class Conta {
private:
    Codigo codigo;
    Senha senha;

public:
    void setCodigo(const Codigo &);
    Codigo getCodigo() const;
    void setSenha(const Senha &);
    Senha getSenha() const;
};
inline void Conta::setCodigo(const Codigo &codigo) {
    this->codigo = codigo;
}
inline Codigo Conta::getCodigo() const {
    return codigo;
}
inline void Conta::setSenha(const Senha &senha) {
    this->senha = senha;
}
inline Senha Conta::getSenha() const {
    return senha;
}

// Entidade: Viagem
/// Entidade Viagem organiza as viagens planejadas ou realizadas pelo viajante e suas respectivas
/// avalia&ccedil;&otilde;es.
///
/// Finalidade: Permitir gerenciamento e avalia&ccedil;&atilde;o das viagens realizadas pelo cliente.

/// Autor: Fernando Vera-Cruz de O. F . Araujo - Mat.221018915
class Viagem {
private:
    Codigo codigo;
    Nome nome;
    Avaliacao avaliacao;

public:
    void setCodigo(const Codigo &);
    Codigo getCodigo() const;
    void setNome(const Nome &);
    Nome getNome() const;
    void setAvaliacao(const Avaliacao &);
    Avaliacao getAvaliacao() const;
};
inline void Viagem::setCodigo(const Codigo &codigo) {
    this->codigo = codigo;
}
inline Codigo Viagem::getCodigo() const {
    return codigo;
}
inline void Viagem::setNome(const Nome &nome) {
    this->nome = nome;
}
inline Nome Viagem::getNome() const {
    return nome;
}
inline void Viagem::setAvaliacao(const Avaliacao &avaliacao) {
    this->avaliacao = avaliacao;
}
inline Avaliacao Viagem::getAvaliacao() const {
    return avaliacao;
}

// Entidade: Destino
/// Entidade Destino descreve os locais e datas de uma viagem e sua avalia&ccedil;&atilde;o.
///
/// Finalidade: Organizar as informa&ccedil;&otilde;es de lugares, datas e avalia&ccedil;&atilde;o de um Destino de uma Viagem

/// Autor: Uilmar Vasconcelos  da Silva - Mat. 180037897
class Destino {
private:
    Codigo codigo;
    Nome nome;
    Data data_inicio;
    Data data_termino;
    Avaliacao avaliacao;

public:
    void setCodigo(const Codigo &);
    Codigo getCodigo() const;
    void setNome(const Nome &);
    Nome getNome() const;
    void setData_inicio(const Data &);
    Data getData_inicio() const;
    void setData_termino(const Data &);
    Data getData_termino() const;
    void setAvaliacao(const Avaliacao &);
    Avaliacao getAvaliacao() const;
};
inline void Destino::setCodigo(const Codigo &codigo) {
    this->codigo = codigo;
}
inline Codigo Destino::getCodigo() const {
    return codigo;
}
inline void Destino::setNome(const Nome &nome) {
    this->nome = nome;
}
inline Nome Destino::getNome() const {
    return nome;
}
inline void Destino::setData_inicio(const Data &data_inicio) {
    this->data_inicio = data_inicio;
}
inline Data Destino::getData_inicio() const {
    return data_inicio;
}
inline void Destino::setData_termino(const Data &data_termino) {
    this->data_termino = data_termino;
}
inline Data Destino::getData_termino() const {
    return data_termino;
}
inline void Destino::setAvaliacao(const Avaliacao &avaliacao) {
    this->avaliacao = avaliacao;
}
inline Avaliacao Destino::getAvaliacao() const {
    return avaliacao;
}

// Entidade: Atividade
/// Entidade Atividade detalha as caracter&iacute;sticas de um passeio planejado em um Destino
///
/// Finalidade: Organizar e planejar um passeio e permitir a sua avalia&ccedil;&atilde;o.

/// Autor: Uilmar Vasconcelos  da Silva - Mat. 180037897
class Atividade {
private:
    Codigo codigo;
    Nome nome;
    Data data;
    Horario horario;
    Duracao duracao;
    Dinheiro preco;
    Avaliacao avaliacao;

public:
    void setCodigo(const Codigo &);
    Codigo getCodigo() const;
    void setNome(const Nome &);
    Nome getNome() const;
    void setData(const Data &);
    Data getData() const;
    void setHorario(const Horario &);
    Horario getHorario() const;
    void setDuracao(const Duracao &);
    Duracao getDuracao() const;
    void setDinheiro(const Dinheiro &);
    Dinheiro getDinheiro() const;
    void setAvaliacao(const Avaliacao &);
    Avaliacao getAvaliacao() const;
};
inline void Atividade::setCodigo(const Codigo &codigo) {
    this->codigo = codigo;
}
inline Codigo Atividade::getCodigo() const {
    return codigo;
}
inline void Atividade::setNome(const Nome &nome) {
    this->nome = nome;
}
inline Nome Atividade::getNome() const {
    return nome;
}
inline void Atividade::setData(const Data &data) {
    this->data = data;
}
inline Data Atividade::getData() const {
    return data;
}
inline void Atividade::setHorario(const Horario &horario) {
    this->horario = horario;
}
inline Horario Atividade::getHorario() const {
    return horario;
}
inline void Atividade::setDuracao(const Duracao &duracao) {
    this->duracao = duracao;
}
inline Duracao Atividade::getDuracao() const {
    return duracao;
}
inline void Atividade::setDinheiro(const Dinheiro &preco) {
    this->preco = preco;
}
inline Dinheiro Atividade::getDinheiro() const {
    return preco;
}
inline void Atividade::setAvaliacao(const Avaliacao &avaliacao) {
    this->avaliacao = avaliacao;
}
inline Avaliacao Atividade::getAvaliacao() const {
    return avaliacao;
}

// Entidade: Hospedagem
/// Entidade Hospedagem detalha as caracter&iacute;sticas de local de acomoda&ccedil;&atilde;o
/// do cliente em um Destino e a sua avalia&ccedil;&atilde;o
///
/// Finalidade: Permitir ao cliente planejar e avaliar sua estadia.

/// Autor: Marcos Andre B. Ribeiro - Mat.190033967
class Hospedagem {
private:
    Codigo codigo;
    Nome nome;
    Dinheiro diaria;
    Avaliacao avaliacao;

public:
    void setCodigo(const Codigo &);
    Codigo getCodigo() const;
    void setNome(const Nome &);
    Nome getNome() const;
    void setDiaria(const Dinheiro &);
    Dinheiro getDiaria() const;
    void setAvaliacao(const Avaliacao &);
    Avaliacao getAvaliacao() const;
};
inline void Hospedagem::setCodigo(const Codigo &codigo) {
    this->codigo = codigo;
}
inline Codigo Hospedagem::getCodigo() const {
    return codigo;
}
inline void Hospedagem::setNome(const Nome &nome) {
    this->nome = nome;
}
inline Nome Hospedagem::getNome() const {
    return nome;
}
inline void Hospedagem::setDiaria(const Dinheiro &diaria) {
    this->diaria = diaria;
}
inline Dinheiro Hospedagem::getDiaria() const {
    return diaria;
}
inline void Hospedagem::setAvaliacao(const Avaliacao &avaliacao) {
    this->avaliacao = avaliacao;
}
inline Avaliacao Hospedagem::getAvaliacao() const {
    return avaliacao;
}

#endif
