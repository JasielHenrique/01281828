#include "testes.hpp"
#include "dominios.hpp"
#include "entidades.hpp"
#include <iostream>
#include <string>

using namespace std;

// Constantes para testes dominios

const std::string TUCodigo::VALOR_VALIDO = "ABCDEF";
const std::string TUCodigo::VALOR_INVALIDO = "AOD+=B";

const std::string TUData::VALOR_VALIDO = "11-11-20";
const std::string TUData::VALOR_INVALIDO = "32-09-1999";

const std::string TUHorario::VALOR_VALIDO = "08:08";
const std::string TUHorario::VALOR_INVALIDO = "25:01";

const std::string TUNome::VALOR_VALIDO = "Enzo Nobrega Lebesgue";
const std::string TUNome::VALOR_INVALIDO = "Gabriel Souza Enzo Ferrari da Silva Batatais de Nobrega Lebesgue";

const std::string TUSenha::VALOR_VALIDO = "05493";
const std::string TUSenha::VALOR_INVALIDO = "fa345";

///////////Constantes testes entidades////////////////////////////////////////////
// Constantes teste Entidade Conta

const std::string TUConta::VALOR_VALIDO_CODIGO = "ABCDEF";
const std::string TUConta::VALOR_VALIDO_SENHA = "05493";

// Constantes teste Entidade Viagem

const std::string TUViagem::VALOR_VALIDO_CODIGO = "ABCDEF";
const std::string TUViagem::VALOR_VALIDO_NOME = "Enzo Nobrega Lebesgue";

// Constantes teste Entidade Destino

const std::string TUDestino::VALOR_VALIDO_CODIGO = "ABCDEF";
const std::string TUDestino::VALOR_VALIDO_DATA_INICIO = "11-11-99";
const std::string TUDestino::VALOR_VALIDO_DATA_TERMINO = "15-11-99";
const std::string TUDestino::VALOR_VALIDO_NOME = "Enzo Nobrega Lebesgue";

// Constantes teste Entidade Atividade

const std::string TUAtividade::VALOR_VALIDO_CODIGO = "ABCDEF";
const std::string TUAtividade::VALOR_VALIDO_DATA = "11-11-99";
const std::string TUAtividade::VALOR_VALIDO_HORARIO = "08:08";
const std::string TUAtividade::VALOR_VALIDO_NOME = "Enzo Nobrega Lebesgue";

// Constantes teste Entidade Hospedagem

const std::string TUHospedagem::VALOR_VALIDO_CODIGO = "ABC123";
const std::string TUHospedagem::VALOR_VALIDO_NOME = "Rosewood";

// Testes dominios ------------------------------------------------------------
// Teste dominio Avalicao

void TUAvaliacao::setUp() {
    avaliacao = new Avaliacao();
    estado = SUCESSO;
}
void TUAvaliacao::tearDown() {
    delete avaliacao;
}
void TUAvaliacao::testarCenarioValorValido() {
    try {
        avaliacao->setDigito(VALOR_VALIDO);
        if (avaliacao->getDigito() != VALOR_VALIDO) {
            estado = FALHA;
        }
    } catch (invalid_argument &excecao) {
        estado = FALHA;
        throw;
    }
}
void TUAvaliacao::testarCenarioValorInvalido() {
    try {
        avaliacao->setDigito(VALOR_INVALIDO);
        estado = FALHA;
    } catch (invalid_argument &excecao) {
        if (avaliacao->getDigito() == VALOR_INVALIDO) {
            estado = FALHA;
            throw;
        }
    }
}
int TUAvaliacao::run() {
    setUp();
    testarCenarioValorValido();
    testarCenarioValorInvalido();
    tearDown();
    return estado;
}
void TUAvaliacao::unit_test() {

    cout << "---------------------------------------------------" << endl;
    cout << "Teste Dominio Avaliacao" << endl;

    switch (run()) {
    case TUAvaliacao::SUCESSO:
        cout << "SUCESSO" << endl;
        break;
    case TUAvaliacao::FALHA:
        cout << "FALHA" << endl;
        break;
    }
}

// Teste dominio Codigo ---------------------------------------------------------------
void TUCodigo::setUp() {
    codigo = new Codigo();
    estado = SUCESSO;
}
void TUCodigo::tearDown() {
    delete codigo;
}
void TUCodigo::testarCenarioValorValido() {
    try {
        codigo->setValor(VALOR_VALIDO);
        if (codigo->getValor() != VALOR_VALIDO)
            estado = FALHA;
    } catch (invalid_argument &excecao) {
        estado = FALHA;
        throw;
    }
}
void TUCodigo::testarCenarioValorInvalido() {
    try {
        codigo->setValor(VALOR_INVALIDO);
        estado = FALHA;
        cout << "setou invalido" << endl;
    } catch (invalid_argument &excecao) {
        if (codigo->getValor() == VALOR_INVALIDO) {
            estado = FALHA;
            throw;
        }
    }
}
int TUCodigo::run() {
    setUp();
    testarCenarioValorValido();
    testarCenarioValorInvalido();
    tearDown();
    return estado;
}
void TUCodigo::unit_test() {

    cout << "---------------------------------------------------" << endl;
    cout << "Teste Dominio Codigo" << endl;

    switch (run()) {
    case TUCodigo::SUCESSO:
        cout << "SUCESSO" << endl;
        break;
    case TUCodigo::FALHA:
        cout << "FALHA" << endl;
        break;
    }
}

// Teste dominio Data -------------------------------------------------------------

void TUData::setUp() {
    data = new Data();
    estado = SUCESSO;
}
void TUData::tearDown() {
    delete data;
}
void TUData::testarCenarioValorValido() {
    try {
        data->setData(VALOR_VALIDO);
        if (data->getData() != VALOR_VALIDO)
            estado = FALHA;
    } catch (invalid_argument &excecao) {
        estado = FALHA;
        throw;
    }
}
void TUData::testarCenarioValorInvalido() {
    try {
        data->setData(VALOR_INVALIDO);
        estado = FALHA;
    } catch (invalid_argument &excecao) {
        if (data->getData() == VALOR_INVALIDO) {
            estado = FALHA;
            throw;
        }
    }
}
int TUData::run() {
    setUp();
    testarCenarioValorValido();
    testarCenarioValorInvalido();
    tearDown();
    return estado;
}
void TUData::unit_test() {

    cout << "---------------------------------------------------" << endl;
    cout << "Teste Dominio Data" << endl;

    switch (run()) {
    case TUData::SUCESSO:
        cout << "SUCESSO" << endl;
        break;
    case TUData::FALHA:
        cout << "FALHA" << endl;
        break;
    }
}

// Teste dominio Dinheiro -------------------------------------------------------------

void TUDinheiro::setUp() {
    dinheiro = new Dinheiro();
    estado = SUCESSO;
}
void TUDinheiro::tearDown() {
    delete dinheiro;
}
void TUDinheiro::testarCenarioValorValido() {
    try {
        dinheiro->setDinheiro(VALOR_VALIDO);
        if (dinheiro->getDinheiro() != VALOR_VALIDO)
            estado = FALHA;
    } catch (invalid_argument &excecao) {
        estado = FALHA;
        throw;
    }
}
void TUDinheiro::testarCenarioValorInvalido() {
    try {
        dinheiro->setDinheiro(VALOR_INVALIDO);
        estado = FALHA;
    } catch (invalid_argument &excecao) {
        if (dinheiro->getDinheiro() == VALOR_INVALIDO) {
            estado = FALHA;
            throw;
        }
    }
}
int TUDinheiro::run() {
    setUp();
    testarCenarioValorValido();
    testarCenarioValorInvalido();
    tearDown();
    return estado;
}
void TUDinheiro::unit_test() {

    cout << "---------------------------------------------------" << endl;
    cout << "Teste Dominio Avaliacao" << endl;

    switch (run()) {
    case TUDinheiro::SUCESSO:
        cout << "SUCESSO" << endl;
        break;
    case TUDinheiro::FALHA:
        cout << "FALHA" << endl;
        break;
    }
}
// Teste dominio Duracao -------------------------------------------------------------

void TUDuracao::setUp() {
    duracao = new Duracao();
    estado = SUCESSO;
}
void TUDuracao::tearDown() {
    delete duracao;
}
void TUDuracao::testarCenarioValorValido() {
    try {
        duracao->setDuracao(VALOR_VALIDO);
        if (duracao->getDuracao() != VALOR_VALIDO)
            estado = FALHA;
    } catch (invalid_argument &excecao) {
        estado = FALHA;
        throw;
    }
}
void TUDuracao::testarCenarioValorInvalido() {
    try {
        duracao->setDuracao(VALOR_INVALIDO);
        estado = FALHA;
    } catch (invalid_argument &excecao) {
        if (duracao->getDuracao() == VALOR_INVALIDO) {
            estado = FALHA;
            throw;
        }
    }
}
int TUDuracao::run() {
    setUp();
    testarCenarioValorValido();
    testarCenarioValorInvalido();
    tearDown();
    return estado;
}
void TUDuracao::unit_test() {

    cout << "---------------------------------------------------" << endl;
    cout << "Teste Dominio Duracao" << endl;

    switch (run()) {
    case TUDuracao::SUCESSO:
        cout << "SUCESSO" << endl;
        break;
    case TUDuracao::FALHA:
        cout << "FALHA" << endl;
        break;
    }
}

// Teste dominio Horario ------------------------------------------------------------

void TUHorario::setUp() {
    horario = new Horario();
    estado = SUCESSO;
}
void TUHorario::tearDown() {
    delete horario;
}
void TUHorario::testarCenarioValorValido() {
    try {
        horario->setHorario(VALOR_VALIDO);
        if (horario->getHorario() != VALOR_VALIDO)
            estado = FALHA;
    } catch (invalid_argument &excecao) {
        estado = FALHA;
        throw;
    }
}
void TUHorario::testarCenarioValorInvalido() {
    try {
        horario->setHorario(VALOR_INVALIDO);
        estado = FALHA;
    } catch (invalid_argument &excecao) {
        if (horario->getHorario() == VALOR_INVALIDO) {
            estado = FALHA;
            throw;
        }
    }
}
int TUHorario::run() {
    setUp();
    testarCenarioValorValido();
    testarCenarioValorInvalido();
    tearDown();
    return estado;
}
void TUHorario::unit_test() {

    cout << "---------------------------------------------------" << endl;
    cout << "Teste Dominio Horario" << endl;

    switch (run()) {
    case TUHorario::SUCESSO:
        cout << "SUCESSO" << endl;
        break;
    case TUHorario::FALHA:
        cout << "FALHA" << endl;
        break;
    }
}

// Teste dominio Nome------------------------------------------------------------
void TUNome::setUp() {
    nome = new Nome();
    estado = SUCESSO;
}
void TUNome::tearDown() {
    delete nome;
}
void TUNome::testarCenarioValorValido() {
    try {
        nome->setNome(VALOR_VALIDO);
        if (nome->getNome() != VALOR_VALIDO)
            estado = FALHA;
    } catch (invalid_argument &excecao) {
        estado = FALHA;
        throw;
    }
}
void TUNome::testarCenarioValorInvalido() {
    try {
        nome->setNome(VALOR_INVALIDO);
        estado = FALHA;
    } catch (invalid_argument &excecao) {
        if (nome->getNome() == VALOR_INVALIDO) {
            estado = FALHA;
            throw;
        }
    }
}
int TUNome::run() {
    setUp();
    testarCenarioValorValido();
    testarCenarioValorInvalido();
    tearDown();
    return estado;
}
void TUNome::unit_test() {

    cout << "---------------------------------------------------" << endl;
    cout << "Teste Dominio Nome" << endl;

    switch (run()) {
    case TUNome::SUCESSO:
        cout << "SUCESSO" << endl;
        break;
    case TUNome::FALHA:
        cout << "FALHA" << endl;
        break;
    }
}

// Teste domino Senha
void TUSenha::setUp() {
    senha = new Senha();
    estado = SUCESSO;
}
void TUSenha::tearDown() {
    delete senha;
}
void TUSenha::testarCenarioValorValido() {
    try {
        senha->setSenha(VALOR_VALIDO);
        if (senha->getSenha() != VALOR_VALIDO)
            estado = FALHA;
    } catch (invalid_argument &excecao) {
        estado = FALHA;
        throw;
    }
}
void TUSenha::testarCenarioValorInvalido() {
    try {
        senha->setSenha(VALOR_INVALIDO);
        estado = FALHA;
    } catch (invalid_argument &excecao) {
        if (senha->getSenha() == VALOR_INVALIDO) {
            estado = FALHA;
            throw;
        }
    }
}
int TUSenha::run() {
    setUp();
    testarCenarioValorValido();
    testarCenarioValorInvalido();
    tearDown();
    return estado;
}
void TUSenha::unit_test() {

    cout << "---------------------------------------------------" << endl;
    cout << "Teste Dominio Senha" << endl;

    switch (run()) {
    case TUSenha::SUCESSO:
        cout << "SUCESSO" << endl;
        break;
    case TUSenha::FALHA:
        cout << "FALHA" << endl;
        break;
    }
}

//////////////////////////////////////////////////////////////////////////////////////
// Testes Unitarios Entidades ----------------------------------------------------------

// Teste Entidade Conta

void TUConta::setUp() {
    conta = new Conta();
    estado = SUCESSO;
}
void TUConta::tearDown() {
    delete conta;
}
void TUConta::testarCenario() {

    Codigo codigo;
    codigo.setValor(VALOR_VALIDO_CODIGO);
    conta->setCodigo(codigo);
    if (conta->getCodigo().getValor() != VALOR_VALIDO_CODIGO)
        estado = FALHA;

    Senha senha;
    senha.setSenha(VALOR_VALIDO_SENHA);
    conta->setSenha(senha);
    if (conta->getSenha().getSenha() != VALOR_VALIDO_SENHA)
        estado = FALHA;
}
int TUConta::run() {
    setUp();
    testarCenario();
    tearDown();
    return estado;
}
void TUConta::unit_test() {
    cout << "---------------------------------------------------" << endl;
    cout << "Teste Entidade Conta" << endl;
    switch (run()) {
    case TUConta::SUCESSO:
        cout << "SUCESSO" << endl;
        break;
    case TUConta::FALHA:
        cout << "FALHA" << endl;
        break;
    }
}

// Teste Entidade Viagem

void TUViagem::setUp() {
    viagem = new Viagem();
    estado = SUCESSO;
}
void TUViagem::tearDown() {
    delete viagem;
}
void TUViagem::testarCenario() {

    Avaliacao avaliacao;
    avaliacao.setDigito(VALOR_VALIDO_AVALIACAO);
    viagem->setAvaliacao(avaliacao);
    if (viagem->getAvaliacao().getDigito() != VALOR_VALIDO_AVALIACAO)
        estado = FALHA;

    Codigo codigo;
    codigo.setValor(VALOR_VALIDO_CODIGO);
    viagem->setCodigo(codigo);
    if (viagem->getCodigo().getValor() != VALOR_VALIDO_CODIGO)
        estado = FALHA;

    Nome nome;
    nome.setNome(VALOR_VALIDO_NOME);
    viagem->setNome(nome);
    if (viagem->getNome().getNome() != VALOR_VALIDO_NOME)
        estado = FALHA;
}
int TUViagem::run() {
    setUp();
    testarCenario();
    tearDown();
    return estado;
}
void TUViagem::unit_test() {
    cout << "---------------------------------------------------" << endl;
    cout << "Teste Entidade Viagem" << endl;
    switch (run()) {
    case TUViagem::SUCESSO:
        cout << "SUCESSO" << endl;
        break;
    case TUViagem::FALHA:
        cout << "FALHA" << endl;
        break;
    }
}

// Teste Entidade Destino

void TUDestino::setUp() {
    destino = new Destino();
    estado = SUCESSO;
}
void TUDestino::tearDown() {
    delete destino;
}
void TUDestino::testarCenario() {

    Avaliacao avaliacao;
    avaliacao.setDigito(VALOR_VALIDO_AVALIACAO);
    destino->setAvaliacao(avaliacao);
    if (destino->getAvaliacao().getDigito() != VALOR_VALIDO_AVALIACAO)
        estado = FALHA;

    Codigo codigo;
    codigo.setValor(VALOR_VALIDO_CODIGO);
    destino->setCodigo(codigo);
    if (destino->getCodigo().getValor() != VALOR_VALIDO_CODIGO)
        estado = FALHA;

    Data data_inicio;
    data_inicio.setData(VALOR_VALIDO_DATA_INICIO);
    destino->setData_inicio(data_inicio);
    if (destino->getData_inicio().getData() != VALOR_VALIDO_DATA_INICIO)
        estado = FALHA;

    Data data_termino;
    data_termino.setData(VALOR_VALIDO_DATA_TERMINO);
    destino->setData_termino(data_termino);
    if (destino->getData_termino().getData() != VALOR_VALIDO_DATA_TERMINO)
        estado = FALHA;

    Nome nome;
    nome.setNome(VALOR_VALIDO_NOME);
    destino->setNome(nome);
    if (destino->getNome().getNome() != VALOR_VALIDO_NOME)
        estado = FALHA;
}
int TUDestino::run() {
    setUp();
    testarCenario();
    tearDown();
    return estado;
}
void TUDestino::unit_test() {

    cout << "---------------------------------------------------" << endl;
    cout << "Teste Entidade Destino" << endl;
    switch (run()) {
    case TUDestino::SUCESSO:
        cout << "SUCESSO" << endl;
        break;
    case TUDestino::FALHA:
        cout << "FALHA" << endl;
        break;
    }
}

// Teste Entidade Atividade

void TUAtividade::setUp() {
    atividade = new Atividade();
    estado = SUCESSO;
}
void TUAtividade::tearDown() {
    delete atividade;
}
void TUAtividade::testarCenario() {

    Avaliacao avaliacao;
    avaliacao.setDigito(VALOR_VALIDO_AVALIACAO);
    atividade->setAvaliacao(avaliacao);
    if (atividade->getAvaliacao().getDigito() != VALOR_VALIDO_AVALIACAO)
        estado = FALHA;

    Codigo codigo;
    codigo.setValor(VALOR_VALIDO_CODIGO);
    atividade->setCodigo(codigo);
    if (atividade->getCodigo().getValor() != VALOR_VALIDO_CODIGO)
        estado = FALHA;

    Data data;
    data.setData(VALOR_VALIDO_DATA);
    atividade->setData(data);
    if (atividade->getData().getData() != VALOR_VALIDO_DATA)
        estado = FALHA;

    Dinheiro dinheiro;
    dinheiro.setDinheiro(VALOR_VALIDO_DINHEIRO);
    atividade->setDinheiro(dinheiro);
    if (atividade->getDinheiro().getDinheiro() != VALOR_VALIDO_DINHEIRO)
        estado = FALHA;

    Duracao duracao;
    duracao.setDuracao(VALOR_VALIDO_DURACAO);
    atividade->setDuracao(duracao);
    if (atividade->getDuracao().getDuracao() != VALOR_VALIDO_DURACAO)
        estado = FALHA;

    Horario horario;
    horario.setHorario(VALOR_VALIDO_HORARIO);
    atividade->setHorario(horario);
    if (atividade->getHorario().getHorario() != VALOR_VALIDO_HORARIO)
        estado = FALHA;

    Nome nome;
    nome.setNome(VALOR_VALIDO_NOME);
    atividade->setNome(nome);
    if (atividade->getNome().getNome() != VALOR_VALIDO_NOME)
        estado = FALHA;
}
int TUAtividade::run() {
    setUp();
    testarCenario();
    tearDown();
    return estado;
}
void TUAtividade::unit_test() {
    cout << "---------------------------------------------------" << endl;
    cout << "Teste Entidade Atividade" << endl;
    switch (run()) {
    case TUAtividade::SUCESSO:
        cout << "SUCESSO" << endl;
        break;
    case TUAtividade::FALHA:
        cout << "FALHA" << endl;
        break;
    }
}

// Teste Hospedagem

void TUHospedagem::setUp() {
    hospedagem = new Hospedagem();
    estado = SUCESSO;
}
void TUHospedagem::tearDown() {
    delete hospedagem;
}
void TUHospedagem::testarCenario() {

    Avaliacao avaliacao;
    avaliacao.setDigito(VALOR_VALIDO_AVALIACAO);
    hospedagem->setAvaliacao(avaliacao);
    if (hospedagem->getAvaliacao().getDigito() != VALOR_VALIDO_AVALIACAO)
        estado = FALHA;

    Codigo codigo;
    codigo.setValor(VALOR_VALIDO_CODIGO);
    hospedagem->setCodigo(codigo);
    if (hospedagem->getCodigo().getValor() != VALOR_VALIDO_CODIGO)
        estado = FALHA;

    Dinheiro dinheiro;
    dinheiro.setDinheiro(VALOR_VALIDO_DIARIA);
    hospedagem->setDiaria(dinheiro);
    if (hospedagem->getDiaria().getDinheiro() != VALOR_VALIDO_DIARIA)
        estado = FALHA;

    Nome nome;
    nome.setNome(VALOR_VALIDO_NOME);
    hospedagem->setNome(nome);
    if (hospedagem->getNome().getNome() != VALOR_VALIDO_NOME)
        estado = FALHA;
}
int TUHospedagem::run() {
    setUp();
    testarCenario();
    tearDown();
    return estado;
}
void TUHospedagem::unit_test() {

    cout << "---------------------------------------------------" << endl;
    cout << "Teste Entidade Hospedagem" << endl;
    switch (run()) {
    case TUHospedagem::SUCESSO:
        cout << "SUCESSO" << endl;
        break;
    case TUHospedagem::FALHA:
        cout << "FALHA" << endl;
        break;
    }
}
