/*
Program sprawdza, czy w adresie email
wprowadzony zostal symbol @
*/

#include <iostream>

using namespace std;

int main()
{
    string inputText;
    cout << "Podaj adres email: ";
    cin >> inputText;

    int dlugosc = inputText.size();
    cout << dlugosc << endl;

    for(int i=0; i<dlugosc; i++)
        {
            cout << inputText[i];
        }

    cout << "\n";

    bool symbol = false;

    for(int i=0; i<dlugosc; i++)
        {
            if(inputText[i]=='@')
                {
                    symbol=true;
                    break;
                }
        }

    if(symbol)
        cout << "Znaleziono symbol @ w adresie" << endl;
    else
        cout << "Brak symbolu @ w adresie" << endl;

    return 0;
}
