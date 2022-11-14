#ifndef TESTAFRACAO_H_
#define TESTAFRACAO_H_
#include "Fracao.h"

class TestaFracao{
    private:
        Fracao f;
    public:
        void menu();
};

void TestaFracao::menu(){
    int opcao;
    int flag;
    int resultado;
    int entrada;

    do{
        try{
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

            cout << "Digite o numerador: ";
            cin >> entrada;
            f.setNumerador(entrada);
            cout << "Digite o denominador: ";
            cin >> entrada;
            f.setDenominador(entrada);

            switch(opcao){
                case 1:
                    resultado = f.soma();
                    break;
                case 2:
                    resultado = f.subtrai();
                    break;
                case 3:
                    resultado = f.multiplica();
                    break;
                case 4:
                    resultado = f.divide();
                    break;
                case 5:
                    resultado = f.mdc();
                    break;
                case 6:
                    resultado = f.simplifica();
                    break;
            }

            cout << "Resultado: " << resultado << endl;
        }

        catch (int erro){
            cout << "Erro: divisao por zero" << endl;
        }

        cout << "digite 0 para encerrar: ";
        cin >> flag;
    }while(flag != 0);
}

#endif