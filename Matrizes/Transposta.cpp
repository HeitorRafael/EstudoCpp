#include <iostream>
using namespace std;

int main(){
int matriz2_1[2][3];
int matriz3_2[3][2];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; i++)
        {
            cout << "digite o numero";
            cin >> matriz2_1 [i][j];

        }
        
    }

    for (int i = 0; i <= 2; i++)
    {

     for (int j = 0; j <= 1; j++)
     {
        matriz3_2[j][i] = matriz2_1 [i][j];
     }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << matriz3_2[j][i] << "\t";
        }
        cout << "\n";
    }
    
    

}