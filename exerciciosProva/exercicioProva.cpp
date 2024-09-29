#include <iostream>
using namespace std;

int buscador(int vet[], int tamanhoVet, int numBuscado){
    int i = 0;
    do
    {
        if (vet[i] == numBuscado)
        {
            cout << "O número está na posição " << i << endl;
            return i;
        } else{
            i++;
        }
        
    } while (i < tamanhoVet);

    cout << "O valor não foi encontrado no array!";
    return -1;
    
}

int main() {
    int vet[] = {2, 5, 8, 12, 16};
    int tamanhoVet = sizeof(vet) / sizeof(vet[0]);
    int numBuscado = 8;

    buscador(vet, tamanhoVet, numBuscado);
    
    return 0;
}