#include<iostream>
using namespace std;

int main()
{
    int a,b,c;

    cout<<"Menentukan bilangan terkecil dari 3 buah bilangan"<<endl;
    cout<<"Masukan bilangan ke 1"<<endl;
    cin>>a;
    cout<<"Masukan bilangan ke 2"<<endl;
    cin>>b;
    cout<<"Masukan bilangan ke 3"<<endl;
    cin>>c;

    if (a < b && a < c)
        cout<<"Bilangan terkecil adalah"<<a<<endl;
    else if(b < a && b < c)
        cout<<"Bilangan terkecil adalah"<<b<<endl;
    else
        cout<<"Bilangan terkecil adalah"<<c<<endl;
    return 0;

}
