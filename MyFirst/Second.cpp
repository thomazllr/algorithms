#include <iostream>

using namespace std;

int main()
{
    int idade;

    cout << "Digite tua idade: ";
    cin >> idade;

    if (idade > 18) {
        cout << "Voce eh maior de idade" << endl;
    }
    else {
        cout << "Voce eh menor de idade" << endl;
    }

    cout << "Sua idade eh: " << idade;


    return 0;


}

