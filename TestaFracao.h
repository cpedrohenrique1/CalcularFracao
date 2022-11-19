#ifndef TESTAFRACAO_H_
#define TESTAFRACAO_H_
#include "Fracao.h"

class TestaFracao{
    private:
        Fracao f, f2;
    public:
        void menu();
};

void TestaFracao::menu(){
    int opcao;
    int flag;
    int entrada;

    do{
            do{
                cout << "Escolha uma opcao:\n";
                cout << "1 - Soma\n";
                cout << "2 - Subtracao\n";
                cout << "3 - Multiplicacao\n";
                cout << "4 - Divisao\n";
                cout << "5 - Maximo divisor comum\n";
                cout << "6 - Simplificar\n";
                cin >> opcao;
            }while (opcao <1 || opcao > 6);

            cout << "Digite o numerador fracao 1: ";
            cin >> entrada;
            f.setNumerador(entrada);
            cout << "Digite o denominador fracao 1: ";
            cin >> entrada;
            f.setDenominador(entrada);

            cout << "Digite o numerador fracao 2: ";
            cin >> entrada;
            f2.setNumerador(entrada);
            cout << "Digite o denominador fracao 2: ";
            cin >> entrada;
            f2.setDenominador(entrada);

            switch(opcao){
                case 1:
                    f.soma(f2.getNumerador(), f2.getDenominador());
                    break;
                case 2:
                    f.subtrai(f2.getNumerador(), f2.getDenominador());
                    break;
                case 3:
                    f.multiplica(f2.getNumerador(), f2.getDenominador());
                    break;
                case 4:
                    f.divide(f2.getNumerador(), f2.getDenominador());
                    break;
                case 5:
                    f.mdc();
                    break;
                case 6:
                    f.simplifica();
                    break;
            }

            if (opcao == 5){
                cout << "Maximo divisor comum: " << f.mdc() << endl;
            }else{
                cout << "Fracao: " << f.getNumerador() << '/' << f.getDenominador() << endl;
            }

        cout << "digite 0 para encerrar: ";
        cin >> flag;
    }while(flag != 0);
}

#endif