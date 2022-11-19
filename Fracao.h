#ifndef FRACAO_H_
#define FRACAO_H_

class Fracao
{
private:
    int numerador;
    int denominador;

public:
    Fracao();
    ~Fracao();
    void setNumerador(int numerador);
    int getNumerador() const;
    void setDenominador(int denominador);
    int getDenominador() const;
    void soma(int, int);
    void subtrai(int, int);
    void divide(int, int);
    void multiplica(int, int);
    int mdc();
    void simplifica();
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

void Fracao::setDenominador(int denominador)
{
    this->denominador = denominador;
}

int Fracao::getDenominador() const
{
    return denominador;
}

void Fracao::soma(int n, int d)
{
    if (denominador == d)
    {
        numerador += n;
    }
    else
    {
        numerador = (numerador * d) + (denominador * n);
        denominador *= d;
    }
}

void Fracao::subtrai(int n, int d)
{
    if (denominador == d)
    {
        numerador -= n;
    }
    else
    {
        numerador = (numerador * d) - (denominador * n);
        denominador = denominador * d;
    }
}

void Fracao::divide(int n, int d)
{
    int num = n;
    numerador *= d;
    denominador *= num;
}

void Fracao::multiplica(int n, int d)
{
    numerador *= n;
    denominador *= d;
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