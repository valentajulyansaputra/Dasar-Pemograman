/*
Nama : Valenta Julyan Saputra
  NIM  : A11.2022.14121
  Kelas: 4104
*/

#include <iostream>
using namespace std;

int main()
{
   int x = 10;
   int n;
   int n1;
   int n2;
   cout <<"Program Deret Fibonaci \n";


   n1 = 1;
   n2 = 0;
   n = n1 + n2;
   cout << n << " ";
   for(int a = 0; a < x; a++){
    n = n1 + n2;
    n2 = n1;
    n1 = n;
    cout << n << " ";
   }
   cout << "\n";

    return 0;
}
