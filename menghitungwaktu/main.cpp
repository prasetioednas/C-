#include <iostream>
using namespace std;

#include<conio.h>
int main()
{
 long input_detik, menit, jam, hari, sisa_detik1, sisa_detik2, sisa_detik3;

        cout<<"Masukan Jumlah Detik :"; cin>>input_detik;
        cout<<endl;

    hari = input_detik / 86400;
    sisa_detik1 = input_detik - (hari*86400);

    jam = sisa_detik1 / 3600;
    sisa_detik2 = sisa_detik1 - (jam * 3600);

    menit = sisa_detik2 / 60;
    sisa_detik3 = sisa_detik2 - (menit*60);

    cout<<"Total Hari :" <<hari <<endl;
    cout<<"Total jam :" <<jam <<endl;
    cout<<"Total menit :" <<menit <<endl;
    cout<<"Total detik :" <<sisa_detik3 <<endl;
}
