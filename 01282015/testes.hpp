#ifndef TESTES_HPP // <--- Nome único evita conflitos!
#define TESTES_HPP
#include <stdexcept>
#include "dominios.hpp"
#include "entidades.hpp"
 
using namespace std;

// Testes Unitarios Dominios
/// Autor: Uilmar Vasconcelos  da Silva - Mat. 180037897
class TUAvaliacao {
private:
    const static int VALOR_VALIDO = 2;
    const static int VALOR_INVALIDO = 30;
    Avaliacao *avaliacao;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioValorValido();
    void testarCenarioValorInvalido();

public:
    const static int SUCESSO = 0;
    const static int FALHA = -1;
    int run();
    void unit_test();
};
/// Autor: Marcos Andre B. Ribeiro - Mat.190033967
class TUCodigo {
private:
    const static std::string VALOR_VALIDO;
    const static std::string VALOR_INVALIDO;
    Codigo *codigo;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioValorValido();
    void testarCenarioValorInvalido();

public:
    const static int SUCESSO = 0;
    const static int FALHA = -1;
    int run();
    void unit_test();
};
/// Autor: Uilmar Vasconcelos  da Silva - Mat. 180037897
class TUData {
private:
    const static std::string VALOR_VALIDO;
    const static std::string VALOR_INVALIDO;
    Data *data;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioValorValido();
    void testarCenarioValorInvalido();

public:
    const static int SUCESSO = 0;
    const static int FALHA = -1;
    int run();
    void unit_test();
};
/// Autor: Jasiel Henrique A. G. Santos - Mat. 200061810
class TUDinheiro {
private:
    const static int VALOR_VALIDO = 100;
    const static int VALOR_INVALIDO = -30;
    Dinheiro *dinheiro;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioValorValido();
    void testarCenarioValorInvalido();

public:
    const static int SUCESSO = 0;
    const static int FALHA = -1;
    int run();
    void unit_test();
};
/// Autor: Eduardo de F. Bicudo - Mat. 232011449
class TUDuracao {
private:
    const static int VALOR_VALIDO = 20;
    const static int VALOR_INVALIDO = 361;
    Duracao *duracao;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioValorValido();
    void testarCenarioValorInvalido();

public:
    const static int SUCESSO = 0;
    const static int FALHA = -1;
    int run();
    void unit_test();
};
/// Autor: Fernando Vera-Cruz de O. F . Araujo - Mat.221018915
class TUHorario {
private:
    const static std::string VALOR_VALIDO;
    const static std::string VALOR_INVALIDO;
    Horario *horario;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioValorValido();
    void testarCenarioValorInvalido();

public:
    const static int SUCESSO = 0;
    const static int FALHA = -1;
    int run();
    void unit_test();
};
/// Autor: Jasiel Henrique A. G. Santos - Mat. 200061810
class TUNome {
private:
    const static std::string VALOR_VALIDO;
    const static std::string VALOR_INVALIDO;
    Nome *nome;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioValorValido();
    void testarCenarioValorInvalido();

public:
    const static int SUCESSO = 0;
    const static int FALHA = -1;
    int run();
    void unit_test();
};

/// Autor: Jasiel Henrique A. G. Santos - Mat. 200061810
class TUSenha {
private:
    const static std::string VALOR_VALIDO;
    const static std::string VALOR_INVALIDO;
    Senha *senha;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioValorValido();
    void testarCenarioValorInvalido();

public:
    const static int SUCESSO = 0;
    const static int FALHA = -1;
    int run();
    void unit_test();
};

// Testes Unitarios Entidades
/// Autor: Eduardo de F. Bicudo - Mat. 232011449
class TUConta {
private:
    const static std::string VALOR_VALIDO_CODIGO;
    const static std::string VALOR_VALIDO_SENHA;
    Conta *conta;
    int estado;
    void setUp();
    void tearDown();
    void testarCenario();

public:
    const static int SUCESSO = 0;
    const static int FALHA = -1;
    int run();
    void unit_test();
};

/// Autor: Fernando Vera-Cruz de O. F . Araujo - Mat.221018915
class TUViagem {
private:
    const static std::string VALOR_VALIDO_CODIGO;
    const static std::string VALOR_VALIDO_NOME;
    const static int VALOR_VALIDO_AVALIACAO = 2;
    Viagem *viagem;
    int estado;
    void setUp();
    void tearDown();
    void testarCenario();

public:
    const static int SUCESSO = 0;
    const static int FALHA = -1;
    int run();
    void unit_test();
};

/// Autor: Uilmar Vasconcelos  da Silva - Mat. 180037897
class TUDestino {
private:
    const static int VALOR_VALIDO_AVALIACAO = 3;
    const static std::string VALOR_VALIDO_CODIGO;
    const static std::string VALOR_VALIDO_DATA_INICIO;
    const static std::string VALOR_VALIDO_DATA_TERMINO;
    const static std::string VALOR_VALIDO_NOME;
    Destino *destino;
    int estado;
    void setUp();
    void tearDown();
    void testarCenario();

public:
    const static int SUCESSO = 0;
    const static int FALHA = -1;
    int run();
    void unit_test();
};

/// Autor: Uilmar Vasconcelos  da Silva - Mat. 180037897
class TUAtividade {
private:
    const static int VALOR_VALIDO_AVALIACAO = 4;
    const static std::string VALOR_VALIDO_CODIGO;
    const static std::string VALOR_VALIDO_DATA;
    const static int VALOR_VALIDO_DINHEIRO = 500;
    const static int VALOR_VALIDO_DURACAO = 67;
    const static std::string VALOR_VALIDO_HORARIO;
    const static std::string VALOR_VALIDO_NOME;

    Atividade *atividade;
    int estado;
    void setUp();
    void tearDown();
    void testarCenario();

public:
    const static int SUCESSO = 0;
    const static int FALHA = -1;
    int run();
    void unit_test();
};

/// Autor: Marcos Andre B. Ribeiro - Mat.190033967
class TUHospedagem {
private:
    const static std::string VALOR_VALIDO_CODIGO;
    const static std::string VALOR_VALIDO_NOME;
    const static int VALOR_VALIDO_DIARIA = 3000;
    const static int VALOR_VALIDO_AVALIACAO = 1;
    Hospedagem *hospedagem;
    int estado;
    void setUp();
    void tearDown();
    void testarCenario();

public:
    const static int SUCESSO = 0;
    const static int FALHA = -1;
    int run();
    void unit_test();
};

#endif // testes
