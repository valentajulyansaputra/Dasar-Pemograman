/* NAMA  : VALENTA JULYAN SAPUTRA
   NIM   : A11.2022.14121
   KELAS : A11.4104
*/

#include <iostream>

using namespace std;

int main()
{
    int a;
    int b= 500;
    int c= 1000;
    int d= 300;
    int saku= 5000;


    cout <<"List Harga Permen: - Rp.500"  <<endl;
    cout <<"                   - Rp.1000" <<endl;
    cout <<"                   - Rp.300"  <<endl;
    cout << " " <<endl;
    cout <<"Masukan Harga Permen: ";

    cin >> a;
    cout <<"Harga Permen Yang Di Masukan: "<<"Rp." << a ;
    cout << " " << endl;
    cout <<"Menghitung Uang: "<<endl;

  if(a == 500){
    for(int b = 500; b<=2500; b+=500)
        cout << b <<endl;
        cout << " " << endl;
        cout <<"Maka Dito Membeli 5 Permen Sejumlah Rp."<< b*5 <<endl;
        cout <<"----------------------------------------------" << endl;
        cout << " ";

  }else if(a == 1000){
    for(int c = 1000; c<= 5000; c+=1000)
        cout << c << endl;
        cout << " " << endl;
        cout <<"Maka Dito Membeli 5 Permen Sejumlah Rp."<< c*5 <<endl;
        cout <<"----------------------------------------------" << endl;
        cout << " ";

  } else if(a == 300){
    for(int d=300; d<=saku; d+=300)
        cout << d << endl;
        cout << " " << endl;
        cout <<"Maka Dito Membeli 16 Permen Sejumlah Rp."<< d*16 <<endl;
        cout <<"----------------------------------------------" << endl;
        cout << " ";
  } else {
    cout << " " << endl;
    cout << "EROR";
    cout << " " << endl;
    }
    return 0;
  }
