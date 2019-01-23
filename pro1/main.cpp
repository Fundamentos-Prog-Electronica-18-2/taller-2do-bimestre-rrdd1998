
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string nombres;
    string apellidos;
    int valor = 0;
    ofstream fo;
    bool bandera = true;
    fo.open("mifichero.txt");
    if (fo.is_open()){

            while (bandera == true){
            cout << "ingrese el nombre" << endl;
            cin >> nombres;
            cout << "ingrese el apellido" << endl;
            cin >> apellidos;

            cout << "desea seguir ingresando valores 1(si) - 2 (no)"  << endl;
            cin >> valor;
                //if (valor ==1){
                  //  bandera = true;
                //}else{
                   // bandera = false;
               // }
                if (valor!=1){
                    bandera = false;
                }
                    }

        cout << nombres << endl << apellidos << endl;
        fo.close();
    }
    return 0;
}
