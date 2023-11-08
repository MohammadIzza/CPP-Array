// menghitung pangkat
#include <iostream>
using namespace std;
int perpangkatan(int x, int y)
{
    int hasil = x;
    for (int i = 1; i < y; i++)
    {
        hasil = hasil * x;
    }
    return hasil;
}
int main()
{
    int x, y;
    cout << " nilai X : ";
    cin >> x;
    cout << " nilai Y (pangkat) : ";
    cin >> y;
    cout << " Hasil perpangkatan dari " << x << " pangkat " << y << " adalah = "
         << perpangkatan(x, y) << endl;
}
