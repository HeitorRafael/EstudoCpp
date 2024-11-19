#include <iostream>
using namespace std;
int main(){
    int var1 =1;
    int var2 =2;
    int var3 =3;
    int vet[10] = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90};

    int *pont1;
    int *pont2;
    int *pont3;
    int *vaux;

    pont1 = &var1;
    pont2 = &var2;
    pont3 = &var3;


    cout << "Endereço da variavel 1: " << &var1 << endl; 
    cout << "Endereço do ponteiro 1: " << &pont1 << endl; 
    cout << "Valor da variavel do ponteiro 1:  " << *pont1 << endl; 

    *pont1 = *pont1 + *pont2 + *pont3;
    cout << "Novo valor da variavel do ponteiro 1:  " << *pont1 << endl; 

    vaux = &vet[0];
        cout << "Endereço do indice 1 do vetor: " << vaux << endl; 
        
    for (int i = 0; i < 10; i+=2)
    {
        *vaux = *vaux +10;
        cout << *vaux << endl;
        vaux +=2;
    };
    

}
