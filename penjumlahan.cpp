// menjumlahkan angka 1 sampai n
#include <iostream>
using namespace std;
int fungsi(int n)
{
    if (n == 1)
    {
        return n;
    }
    else
    {
        return n + fungsi(n - 1);
    }
}
int main()
{
    int n, jml, angka;
    cout << "Masukkan banyak angak yg ingin dijumlahkan  ";
    cin >> n;
    jml = fungsi(n);
    cout << "Hasil penjumlahan bilangan dari 1 sampai n (1";
    for (int i = 2; i <= n; i++)
    {
        cout << " + " << i;
    }
    cout << ") = " << jml;
}
