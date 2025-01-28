#include "dominios.hpp"
#include "testes.hpp"
#include <iostream>
#include <regex>
#include <set>
#include <stdexcept>
#include <string>
#include <vector>

using namespace std;

void Avaliacao::validar(int digito) {
    // Definindo os dígitos válidos
    int valid_digits[6] = {0, 1, 2, 3, 4, 5};

    // Verifica se o digito é válido
    for (int i = 0; i < 6; i++) { // Corrigido para percorrer todos os 6 elementos
        if (digito == valid_digits[i]) {
            return; // Valor válido, saímos da função
        }
    }

    // Se chegar aqui, digito não é válido
    throw std::invalid_argument("Digito invalido- " + std::to_string(digito));
}
void Avaliacao::setDigito(int digito) {

    try {
        validar(digito);
    } catch (invalid_argument &exp) {
        throw;
    }
    this->digito = digito;
}

void Codigo::validar(string valor) {
    regex padraoCodigo("^[A-Za-z0-9]{6}$");
    bool codigoValido = regex_match(valor, padraoCodigo);

    if (!codigoValido)
        throw std::invalid_argument("Codigo invalido: " + valor);
}
void Codigo::setValor(string valor) {
    try {
        validar(valor);

    } catch (invalid_argument &exp) {
        throw;
    }

    this->valor = valor;
}

void Data::validar(const string &data) {

    int dia = stoi(data.substr(0, 2));
    int mes = stoi(data.substr(3, 2));
    int ano = stoi(data.substr(6, 2));

    if (!(data.length() != 8 || data[2] != '-' || data[5] != '-') && !(mes < 1 || mes > 12) && !(dia < 1 || dia > 31 || (mes == 2 && dia > (anoBissexto(ano) ? 29 : 28))) && !((mes == 4 || mes == 6 || mes == 9 || mes == 11) && dia > 30)) {
        return;
    }

    throw std::invalid_argument("Data Invalida- " + data);
}
bool Data::anoBissexto(int ano) {
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        return true;
    }
    return false;
}
void Data::setData(string data) {

    try {
        validar(data);
    } catch (invalid_argument &exp) {
        throw;
    }
    this->data = data;
}

void Dinheiro::validar(double valor) {
    if (valor < 0.00 || valor > 200000.00) {
        throw std::invalid_argument("Dinheiro Invalido- " + std::to_string(valor));
    }
}
void Dinheiro::setDinheiro(double dinheiro) {
    try {
        validar(dinheiro);
    } catch (invalid_argument &exp) {
        throw;
    }
    this->dinheiro = dinheiro;
}

void Duracao::validar(int valor) {
    if (valor >= 0 && valor < 361) {
        return;
    }
    throw std::invalid_argument("Duracao invalida- " + std::to_string(valor));
}
void Duracao::setDuracao(int duracao) {
    try {
        validar(duracao);
    } catch (invalid_argument &exp) {
        throw;
    }
    this->duracao = duracao;
}

void Horario::validar(const string &horario) {
    /// Extrai horas e minutos da string (assume formato HH:MM).
    int horas = stoi(horario.substr(0, 2));
    int minutos = stoi(horario.substr(3, 2));

    if ((horario.length() != 5 || horario[2] != ':') || (horas < 0 || horas > 23 || minutos < 0 || minutos > 59)) { /// Valida o formato da string (tamanho e posição do ':') e o intervalo de horas e minutos.
        throw std::invalid_argument("Horario invalido- " + horario);                                                /// Lança exceção se o horário for inválido.
    }
}
void Horario::setHorario(const string &horario) {
    try {
        validar(horario);
    } catch (invalid_argument &exp) {
        throw;
    }
    this->horario = horario;
}

void Nome::validar(const string &nome) {
    if (nome.length() > 30) {
        throw std::invalid_argument("Nome Invalido - " + nome);
    }
}
void Nome::setNome(string nome) {
    try {
        validar(nome);
    } catch (invalid_argument &exp) {
        throw;
    }
    this->nome = nome;
}

void Senha::validar(const string &senha) {
    if (senha.length() != 5) {
        throw std::invalid_argument("Senha deve ter 5 dígitos. - " + senha);
    }
    for (char c : senha) {
        if (!isdigit(c)) {
            throw std::invalid_argument("Senha deve conter apenas dígitos - " + senha);
        }
    }

    string senhaTmp = senha;
    sort(senhaTmp.begin(), senhaTmp.end());
    if (unique(senhaTmp.begin(), senhaTmp.end()) != senhaTmp.end()) {
        throw std::invalid_argument("Senha não pode ter dígitos duplicados- " + senha);
    }

    int vetor[5] = {};

    for (int i = 0; i < senha.size(); i++) {
        vetor[i] = senha[i] - '0';
    }

    bool crescente = true;
    bool decrescente = true;

    for (int i = 0; i < 5 - 1; ++i) {
        if (vetor[i] > vetor[i + 1]) {
            crescente = false;
        }
        if (vetor[i] < vetor[i + 1]) {
            decrescente = false;
        }
    }

    if (crescente || decrescente)
        throw std::invalid_argument("Senha crescente/decrescente- " + senha);
}
void Senha::setSenha(string senha) {

    try {
        validar(senha);
    } catch (invalid_argument &exp) {
        throw;
    }
    this->senha = senha;
}
