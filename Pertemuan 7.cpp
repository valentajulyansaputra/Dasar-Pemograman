/*NAMA : VALENTA JULYAN SAPUTRA
  NIM  : A11.2022.14121
  Kelas: 4104*/


#include <iostream>
using namespace std;


int main()
{
//____________________________INPUT JURUSAN_______________________
int fakultas;

    cout<<"Daftar Jurusan : "<<endl;
    cout<<"(1).Teknik Informatika"<<endl;
    cout<<"(2).Sistem Informasi"<<endl;
    cout<<"(3).Desain Komunikasi Visual"<<endl;
    cout<<"" <<endl;
    cout<<"Masukan Jurusan Anda" <<endl;

cin >> fakultas;
//_________________________INPUT SEMESTER___________________________

  int a;
    cout <<"Masukan Semester Anda" <<endl;
    cin >> a;

    cout<<"---------------------------------------------------------"<<endl;
//__________________________OUTPUT JURUSAN__________________________
    if(fakultas==1){
        cout<<"Jurusan anda adalah Teknik Informatika"<<endl;
    }

    if(fakultas==2){
        cout <<"Jurusan anda adalah Sistem Informasi" <<endl;
    }
    if(fakultas==3){
        cout<<"Jurusan anda adalah Desain Komunikasi Visual" <<endl;
    }

//________________OUTPUT SEMESTER_______________________
if(a >= 1 && a <= 2 )
{
    cout <<"Anda dalam kategori Freshman year" <<endl;
}
if(a >= 3 && a <= 4 )
{
    cout <<"Anda dalam kategori Sophomore year" <<endl;
}
if(a >= 5 && a <= 6 )
{
    cout <<"Anda dalam kategori Junior year" <<endl;
}
if(a >= 7 && a <= 8 ){
    cout <<"Anda dalam kategori Senior year" <<endl;
}

return 0;

}
