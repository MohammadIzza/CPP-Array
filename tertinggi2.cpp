// menentukan angka tertinggi ke-2
#include <iostream>
using namespace std;
int main()
{
    int jumlaharray, angkakedua, y;
    cout << "Masukkan jumlah indeks array yang diinginkan: ";
    cin >> jumlaharray;
    int x[jumlaharray];
    for (int i = 0; i < jumlaharray; i++)
    {
        cout << "Masukkan angka array ke-" << (i + 1) << " : ";
        cin >> x[i];
        if (i == 0)
        {
            y = x[i];
        }
        else if (i == 1)
        {
            if (x[i] > y)
            {
                angkakedua = y;
                y = x[i];
            }
            else
            {
                angkakedua = x[i];
            }
        }
        else
        {
            if (x[i] > y and x[i] > angkakedua)
            {
                angkakedua = y;
                y = x[i];
            }
            else if (x[i] < y and x[i] > angkakedua)
            {
                angkakedua = x[i];
            }
        }
    }
    cout << "Angka terbesar kedua dari kumpulan angka di dalam array adalah "
         << angkakedua;
    return 0;
}