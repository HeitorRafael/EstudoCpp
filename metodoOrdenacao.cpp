#include <iostream>
using namespace std;

void Ordena(int vetX[], int tamVet) {
    int aux;
    for (int i = 0; i < tamVet - 1; i++) {
        for (int j = i + 1; j < tamVet; j++) {
            if (vetX[i] > vetX[j]) {
                aux = vetX[i];
                vetX[i] = vetX[j];
                vetX[j] = aux;
            }
        }
    }
}

int busca(int vetY[], int tamVet, int buscado) {
    int inicio = 0;
    int fim = tamVet - 1;

    while (inicio <= fim) {
        int meio = (inicio + fim) / 2;

        if (vetY[meio] == buscado) {
            return vetY[meio];  
        } else if (vetY[meio] > buscado) {
            fim = meio - 1;
        } else {
            inicio = meio + 1;
        }
    }

    return -1;  
}

int main() {
    int oringinVecto[5] = {9, 4, 7, 1, 3};
    int buscado = 9;

    Ordena(oringinVecto, 5);  

    int resultado = busca(oringinVecto, 5, buscado);  

    if (resultado != -1) {
        cout << "Valor encontrado: " << resultado << endl;
    } else {
        cout << "Valor não encontrado." << endl;
    }

    return 0;
}