/*
Nama : Valenta Julyan Saputra
Nim  : A11.2022.14121
*/

#include <iostream>

using namespace std;

int main()
{
    int x,y;
    int min,max;
    for(int i=0;i<=99;i++)
    {
        cout << "Masukkan Angka = "; cin >> x;
        if (x==-99)
        {
            break;
        }

       else if (i == 0)
        {
            min = x;
            max = x;
        }
        else if ( min > x)
        {
            min = x;
        }
        else if (max < x)
        {
            max = x;
        }
        else {}
    }

    cout << endl;
    cout << "Max : " << max << endl;
    cout << "Min : " << min << endl;
    return 0;
}
