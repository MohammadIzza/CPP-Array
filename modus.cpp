// menentukan angka yang paling sering muncul
#include <iostream>
using namespace std;

int main (){
    int arr[1000] = {0}, n, input, modus, count = 0;

    cout << "masukan jumlah angkanya : ";

    cin >> n;
    for (int i=1;i<=n;i++)
    {
        cout <<"angka ke " << i << " = ";
        cin >> input;
        arr[input]++;
    }

    for (int i = 0; i < 1000; i++)
    {
        if (arr[i] >= count)
        {
            count = arr[i];
            modus = i;
        }
    }

    cout << "angka yang paling banyak muncul adalah " << modus<< endl;
}