#include <iostream>
using namespace std;

int main(){
    int matriz[3][5];
    int newMatriz [3];

    for (int i = 0; i <= 2; i++)
    {
        int somador = 0;
        for (int j = 0; j <= 4; j++)
        {
            cout << "Digite um numero";
            cin >> matriz[i][j];

            somador += matriz[i][j]; 
            
        }
        newMatriz[i] = somador;
    }

        cout << "\nSoma de cada linha:\n";
        for (int i = 0; i <= 2; i++) {
            cout << "Linha " << i + 1 << ": " << newMatriz[i] << endl;
        }

        return 0;
    
}