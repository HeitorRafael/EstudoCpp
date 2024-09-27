#include <iostream>
using namespace std;

int main (){
    int Matriz4x4 [4][4];
    int result = 0;

    for ( int i = 0; i <= 3; i++)
    {
        for (int j = 0; j <= 3; j++)
        {
        
            cout << "digite um numero";
            cin >> Matriz4x4[i][j];

            if (i == j)
            {
             result += Matriz4x4[i][j];
            }
        

        }
    }
    cout<< result;
} 
