#ifndef TESTAFRACAO_H_
#define TESTAFRACAO_H_
#include "Fracao.h"

class TestaFracao
{
private:
    Fracao f1, f2, f3;

public:
    void menu();
};

void TestaFracao::menu()
{
    int opcao;
    int flag;
    int entrada;

    do
    {
        try
        {
            do
            {
                cout << "Escolha uma opcao:\n";
                cout << "1 - Soma\n";
                cout << "2 - Subtracao\n";
                cout << "3 - Multiplicacao\n";
                cout << "4 - Divisao\n";
                cin >> opcao;
            } while (opcao < 1 || opcao > 4);

            cout << "Digite o numerador da 1 fracao: ";
            cin >> entrada;
            f1.setNumerador(entrada);
            do
            {
                cout << "Digite o denominador da 1 fracao: ";
                cin >> entrada;
                f1.setDenominador(entrada);
            } while (f1.setDenominador(entrada) == false);

            cout << "Digite o numerador fracao 2: ";
            cin >> entrada;
            f2.setNumerador(entrada);
            do
            {
                cout << "Digite o denominador fracao 2: ";
                cin >> entrada;
                f2.setDenominador(entrada);
            } while (f2.setDenominador(entrada) == false);

            switch (opcao)
            {
            case 1:
                f3.soma(f1, f2);
                break;
            case 2:
                f3.subtrai(f1, f2);
                break;
            case 3:
                f3.multiplica(f1, f2);
                break;
            case 4:
                f3.divide(f1, f2);
                break;
            }

            cout << "Fracao: " << f3.getNumerador() << '/' << f3.getDenominador() << endl;
            cout << "Decimal: " << (float)f3.getNumerador() / (float)f3.getDenominador() << endl;
        }
        catch (string error)
        {
            cout << "erro: " << error;
        }

        cout << "digite 0 para encerrar: ";
        cin >> flag;
    } while (flag != 0);
}

#endif