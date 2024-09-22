#include <iostream>
using namespace std;

int main() {
    int nums[9]; // Vetor com tamanho 9 (pode ajustar o tamanho se necessário)
    int i = 0;

    while (i < 9) {
        cout << "Digite um número positivo para popular o vetor ou um negativo para parar: ";
        int a;
        cin >> a;

        if (a < 0) {
            cout << "Vetor finalizado." << endl;
            break; // Sai do loop se o número for negativo
        }

        nums[i] = a; // Armazena o número no vetor
        i++;
    }

    // Exibe os números digitados
    cout << "Números no vetor: ";
    for (int j = 0; j < i; j++) {
        cout << nums[j] << " ";
    }
    cout << endl;

    return 0;
}