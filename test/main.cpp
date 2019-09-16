#include <iostream>

using namespace std;

int main()
{
    int A,B,C;
    A= 10;
    B= 20;

    cout<< "Nilai A : " <<A <<endl;
    cout<< "Nilai B : "<<B <<endl;
    cout<<endl;

    C=A;
    A=B;
    B=C;

    cout<<"Nilai setelah ditukar :"<<endl;
    cout<<"Nilai A :" <<A <<endl;
    cout<<"Nilai B :" <<B <<endl;

    return 0;
}
