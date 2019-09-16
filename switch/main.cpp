#include <iostream>

using namespace std;

#include <conio.h>
int main()
{
    char hari;

    cout<<"\t |=====================|" <<endl;
    cout<<"\t |Kode Hari | Nama Hari|" <<endl;
    cout<<"\t |=====================|" <<endl;
    cout<<"\t |    1     |   Senin  |" <<endl;
    cout<<"\t |    2     |   Selasa |" <<endl;
    cout<<"\t |    3     |   Rabu   |" <<endl;
    cout<<"\t |    4     |   Kamis  |" <<endl;
    cout<<"\t |    5     |   Jumat  |" <<endl;
    cout<<"\t |    6     |   Sabtu  |" <<endl;
    cout<<"\t |    7     |   Minggu |" <<endl;
    cout<<"\t |=====================|" <<endl;

    cout<<"\n Masukan Kode Hari (1-7) :"; cin>> hari;
    switch(hari){
    case'1': cout<<"\n Hari ini hari Senin" <<endl; break;
    case'2': cout<<"\n Hari ini hari Selasa" <<endl; break;
    case'3': cout<<"\n Hari ini hari Rabu" <<endl; break;
    case'4': cout<<"\n Hari ini hari Kamis" <<endl; break;
    case'5': cout<<"\n Hari ini hari Jumat" <<endl; break;
    case'6': cout<<"\n Hari ini hari Sabtu" <<endl; break;
    case'7': cout<<"\n Hari ini hari Minggu" <<endl; break;
    }
    getch();
}
