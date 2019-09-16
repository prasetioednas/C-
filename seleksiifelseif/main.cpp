#include <iostream>

using namespace std;

#include <conio.h>
int main()
{
    int grade = 0;

    cout<<"Masukan Nilai :"; cin>>grade;

    if((grade >= 80) && (grade <= 100))
        cout<<"\n Grade anda adalah : A" <<endl;
    else if((grade >= 70) && (grade <= 79))
        cout<<"\n Grade anda adalah : B" <<endl;
    else if((grade >= 60) && (grade <= 69))
        cout<<"\n Grade anda adalah : C" <<endl;
    else if ((grade >= 50) && (grade <= 59))
        cout<<"\n Grade anda adalah : D" <<endl;
    else
        cout<<"\n Grade anda adalah : E" <<endl;
    getch();
}
