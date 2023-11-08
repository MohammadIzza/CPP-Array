// menentukan angka tertinggi
#include <iostream>
using namespace std;
int main()
{
    int masukan[9999], jumlaharray, i, angkaterbesar;
    cout << "Masukkan berapa jumlah indeks Array yang diinginkan: ";
    cin >> jumlaharray;
    for (int i = 0; i < jumlaharray; i++)
    {
        cout << "Masukkan angka ke-" << (i + 1) << ": ";
        cin >> masukan[i];
    }
    angkaterbesar = masukan[0];
    for (i = 0; i < jumlaharray; i++)
    {
        if (masukan[i] > angkaterbesar)
        {
            angkaterbesar = masukan[i];
        }
    }
    cout << "Angka terbesar adalah dari angka-angka tersebut adalah : " << angkaterbesar;
    return 0;
}