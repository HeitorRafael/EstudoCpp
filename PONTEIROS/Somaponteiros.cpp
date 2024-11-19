#include <iostream>
using namespace std;

int main(){
    int a;
    int b;
    int soma;

    cout << "Digite o valor de a: ";
    cin >> a;
    cout << "Digite o valor de b: ";
    cin >> b;

    int *p1 = &a;
    int *p2 = &b;

    cout<< "\n" << &a << endl;
    cout<< "\n" << &b << endl;
    cout<< "\n" << &p1 << endl;
    cout<< "\n" << &p2 << endl;

    soma = *p1 + *p2;
    cout << "Soma dos ponteiros: " << soma << endl;
}