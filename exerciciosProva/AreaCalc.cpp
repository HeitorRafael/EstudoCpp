#include <iostream>
using namespace std;

double area (double compr, double larg){
    double area = 0;

    area = compr * larg;

    cout << " A area total do terreno corresponde a " << area << endl;

    if (compr == larg)
    {
        cout << "Este terreno é quadrado" << endl;
    } else {
        cout << "Este terreno é retangular";
    }
    

    return area;

}

int main(){
    double compr = 0; 
    double larg = 0;

    do
    {
        cout << "Digite o comprimento: " << endl;
        cin >> compr;
        cout << "Digite a largura: " << endl;
        cin >> larg;
        
        if (compr < 1 || larg <1)
        {
            cout << "O tanto o comprimento quanto a largura devem ser maior ou igual a 1" << endl;
        }
    
    } while (compr < 1 || larg <1);


    area(compr, larg);

    return 0;

}