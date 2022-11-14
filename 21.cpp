#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;


int main()
{
    setlocale(LC_ALL, "Russian");
    srand(time(NULL));
    int n, Mass[20][20] = {}, m;
    cin >> m >> n;
    
    for (int i = 0; i < m; i++)
    {
        float sred = 0;
        for (int j = 0; j < n; j++)
        {
            *(*(Mass + i) + j) = rand() % 40;
            sred += *(*(Mass + i) + j);
            cout << " " << *(*(Mass + i) + j);
        }
        if (i % 2 == 0) cout << " Среднее арифм. = " << sred / n;
        cout << endl;
    }
}
