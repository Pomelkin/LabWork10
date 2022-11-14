#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;


int main()
{
    setlocale(LC_ALL, "Russian");
    srand(time(NULL));
    int n, Mass[20][20] = {}, Mass1[20][20] = {}, m, Nmax = 0,imax = 0, Nmin = 40, imin = 0;
    cin >> m >> n;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            *(*(Mass + i) + j) = rand() % 40;
            *(*(Mass1 + i) + j) = *(*(Mass + i) + j);
            
            cout << " " << *(*(Mass + i) + j);
            
            if (Nmax < *(*(Mass + i) + j))
            {
                Nmax = *(*(Mass + i) + j);
                imax = i;
            }

            if (Nmin > *(*(Mass + i) + j))
            {
                Nmin = *(*(Mass + i) + j);
                imin = i;
            }

        }
        cout << endl;
    }

    if (imax != imin)
    {
        for (int j = 0; j < n; j++)
            *(*(Mass1 + imax) + j) = *(*(Mass + imin) + j);
        for (int j = 0; j < n; j++)
            *(*(Mass1 + imin) + j) = *(*(Mass + imax) + j);
    }

    cout << "\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++) cout << " " << *(*(Mass1 + i) + j);
        cout << "\n";
    }
}

