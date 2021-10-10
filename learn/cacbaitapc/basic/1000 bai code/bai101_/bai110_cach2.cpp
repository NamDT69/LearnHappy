#include <iostream>
using namespace std;
int main()
{
    int n = 200000, socach = 0, si, sj, i, j, k;
    for (i = n / 1000; i >= 0; i--)
    {
        si = n - i * 1000;
        for (j = si / 2000; j >= 0; j--)
        {
            sj = si - j * 2000;
            for (k = sj / 5000; k >= 0; k--)
            {
                if (i * 1000 + j * 2000 + k * 5000 == 200000)
                {
                    cout << i << " to 1000, " << j << " to 2000, " << k << " to 5000." << endl;
                    socach++;
                }
            }
        }
    }
    cout << "Co tat ca " << socach << " Cach chon!\n";
    system("pause");
    return 0;
}