#include <iostream>
using namespace std;


int main()
{
    int m, n, Mass[20][20] = {}, k = 0, d = 0;
    cin >> m >> n >> d >> k;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            *(*(Mass + i) + j) = k;
        }
        k *= d;
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++) cout <<" "<< * (*(Mass + i) + j);
        cout << "\n";
    }
}

