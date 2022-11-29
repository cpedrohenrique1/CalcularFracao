#ifndef FRACAO_H_
#define FRACAO_H_

class Fracao
{
private:
    int numerador;
    int denominador;
    int mdc();
    void simplifica();
//Fazer as contas recebendo Fracao;
public:
    Fracao();
    ~Fracao();
    void setNumerador(int numerador);
    int getNumerador() const;
    bool setDenominador(int denominador);
    int getDenominador() const;
    void soma(Fracao, Fracao);
    void subtrai(Fracao, Fracao);
    void divide(Fracao, Fracao);
    void multiplica(Fracao, Fracao);
};

Fracao::Fracao()
{
    numerador = 1;
    denominador = 1;
}

Fracao::~Fracao()
{
    numerador = 0;
    denominador = 0;
}

void Fracao::setNumerador(int numerador)
{
    this->numerador = numerador;
}

int Fracao::getNumerador() const
{
    return numerador;
}

bool Fracao::setDenominador(int denominador)
{
    if (denominador == 0){
        return false;
        throw string("Denominador nao pode ser zero");
    }
    this->denominador = denominador;
    return true;
}

int Fracao::getDenominador() const
{
    return denominador;
}

void Fracao::soma(Fracao a, Fracao b)
{
    if (a.getDenominador() == b.getDenominador())
    {
        numerador = a.getNumerador() + a.getDenominador();
    }
    else
    {
        numerador = (a.getNumerador() * b.getDenominador()) + (a.getDenominador() * b.getNumerador());
        denominador = a.getDenominador() * b.getDenominador();
    }
    simplifica();
}

void Fracao::subtrai(Fracao a, Fracao b)
{
    if (a.getDenominador() == b.getDenominador())
    {
        numerador = a.getNumerador() - b.getNumerador();
    }
    else
    {
        numerador = (a.getNumerador() * b.getDenominador()) - (a.getDenominador() * b.getNumerador());
        denominador = a.getDenominador() * b.getDenominador();
    }
    simplifica();
}

void Fracao::divide(Fracao a, Fracao b)
{
    if (b.getNumerador() == 0){
        throw string("Divisao por zero");
    }
    numerador = a.getNumerador() * b.getDenominador();
    denominador = a.getDenominador() * b.getNumerador();
    simplifica();
}

void Fracao::multiplica(Fracao a, Fracao b)
{
    numerador = a.getNumerador() * b.getNumerador();
    denominador = a.getDenominador() * b.getDenominador();
    simplifica();
}

int Fracao::mdc()
{
    int a = this->numerador;
    int b = this->denominador;
    int resto;
    while (b != 0)
    {
        resto = a % b;
        a = b;
        b = resto;
    }
    return a;
}

void Fracao::simplifica()
{
    int mdc = this->mdc();
    this->numerador = this->numerador / mdc;
    this->denominador = this->denominador / mdc;
}

#endif