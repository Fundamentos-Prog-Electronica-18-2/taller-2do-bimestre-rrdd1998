
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int num1;
    int num2;
    int valor = 0;
    ofstream fo;
    int sum ;
    int multiplicacion = 0;
    int contador = 1;
    fo.open("mifichero.txt");
    if (fo.is_open()){

            while (contador <= 4){
                cout << "ingrese el primer numero" << endl;
                cin >> num1;
                cout << "ingrese el segundo numero" << endl;
                cin >> num2;
                sum = num1 + num2;
                multiplicacion = num1 * num2;
                contador = contador + 1;
                fo << num1 << "-" << num2 << "la suma es " << sum << " la multiplicaion es" << multiplicacion << endl;
                    }
        fo.close();
    }
    return 0;
}
