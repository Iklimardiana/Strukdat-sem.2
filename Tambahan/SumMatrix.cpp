#include <bits/stdc++.h>
using namespace std;

int main() {
    int X, Y;
    long int sum = 0;

    cin >> X >> Y;

    if(1 <=X && X <=100 && 1 <= Y && Y<=100)
    {
        int matriks[X][Y];

        for (int i = 0; i < X; i++)
        {
            for (int j = 0; j < Y; j++)
            {
                cin >> matriks[i][j];
                sum = sum + matriks[i][j];
            }
        }
    
        cout << sum << endl;
    }
    
    return 0;
}