#ifndef INTERFACES_HPP_INCLUDED
#define INTERFACES_HPP_INCLUDED

#include "dominios.hpp"
#include "entidades.hpp"

using namespace std;



class IAAutenticacao{
public:
    virtual bool autenticar(Codigo*) = 0;
    virtual void setCntrISAutenticacao(ISAutenticacao *) = 0;
    virtual ~IAAutenticacao(){}
};




#endif // INTERFACES_HPP_INCLUDED
