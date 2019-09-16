#include <iostream>

using namespace std;
#include<conio.h>
int main(){
    int tahun;

    cout<<"Masukan Tahun : "; cin>>tahun;
    if(tahun % 4 == 0){
        cout<<"Tahun Kabisat" <<endl;
    }else{
        cout<<"Bukan Tahun Kabisat" <<endl;
    }
    getch();
}
