#include <iostream>

using namespace std;

int main()
{
    int Polecenie = 0;
    double a, b;


    while (true)
    {
        cout << "[1] Dodawanie"
             << endl << "[2] Odejmowanie"
             << endl << "[3] Mnozenie"
             << endl << "[4] Dzielenie"
             << endl << "[5] Rezygnuj"
             << endl << "Twoje polecenie: ";

        cin >> Polecenie;
        cin.clear();
        cin.sync();

        if( Polecenie >= 1 && Polecenie <= 4 )
        {
            cout << "Podaj pierwsza liczbe: ";
            cin >> a;
            cout << "Podaj druga liczbe: ";
            cin >> b;
        }

        switch(Polecenie)
        {
            case 1:
                cout << "Wynik: " << a + b << endl;
                break;

            case 2:
                cout << "Wynik: " << a - b << endl;
                break;

            case 3:
                cout << "Wynik: " << a * b << endl;
                break;

            case 4:
                if (b == 0)
                    cout << "Nie dzielimy przez 0 !" << endl;
                else cout << "Wynik: " << a / b << endl;
                break;

            case 5:
                return 0;

            default:
                cout << "Nieprawidlowe polecenie." << endl;
        }
    }
}