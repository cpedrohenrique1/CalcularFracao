#ifndef FRACAO_H_
#define FRACAO_H_

class Fracao{
    private:
        int numerador;
        int denominador;
    public:
        void setNumerador(int numerador);
        int getNumerador();
        void setDenominador(int denominador);
        int getDenominador();
        int soma();
        int subtrai();
        int divide();
        int multiplica();
        int mdc();
        int simplifica();
};

void Fracao::setNumerador(int numerador){
    this->numerador = numerador;
}

int Fracao::getNumerador(){
    return this->numerador;
}

void Fracao::setDenominador(int denominador){
    this->denominador = denominador;
}

int Fracao::getDenominador(){
    return this->denominador;
}

int Fracao::soma(){
    return this->numerador + this->denominador;
}

int Fracao::subtrai(){
    return this->numerador - this->denominador;
}

int Fracao::divide(){
    if (this->denominador == 0){
        throw 0;
    }
    return this->numerador / this->denominador;
}

int Fracao::multiplica(){
    return this->numerador * this->denominador;
}

int Fracao::mdc(){
    int a = this->numerador;
    int b = this->denominador;
    int resto;
    while (b != 0){
        resto = a % b;
        a = b;
        b = resto;
    }
    return a;
}

int Fracao::simplifica(){
    int mdc = this->mdc();
    this->numerador = this->numerador / mdc;
    this->denominador = this->denominador / mdc;
    return 0;
}

#endif