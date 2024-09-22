#include <iostream>;
using namespace std;


int fibonacci (int terms){

   return fibonacci (terms-1) + fibonacci (terms-1);

};

int main(){
    int terms;
    cout <<"digite a quantidade de termos que gostaria de ver: ";
    cin >> terms;

    cout << fibonacci(terms);
}