#include <iostream>

using namespace std;
#include <conio.h>
int main()
{
    int pemakaian, lebih, hasil;
    long b1,b2,b3;

    cout<<"Input pemakaian : "; cin>>pemakaian;
    cout<<"Lebih pemakaiannya adalah :"; cin>> lebih;

    hasil = pemakaian + lebih;
    cout<<"Jumlah pemakaian lebihnya:"<<hasil<<"Kwh \n";

    if ((hasil <= 100) && (hasil >= 50))
        cout<<"Tagihan listrik yang harus dibayar adalah : Rp. 100.000" <<endl;
    else if ((hasil <= 500 ) && (hasil >= 100))
        cout<<"Tagihan Listrik yang harus di bayar : Rp."<<lebih*1500;
    else if (hasil >= 500)
        cout<<"Tagihan Listrik yang harus di bayar : Rp."<<lebih*2000;
   getch();

}
