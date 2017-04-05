#include <iostream>
using namespace std;

int main () {
int bilangan, n;
long int hasil;

cout <<"========Mencari Nilai Faktorial========"<<endl;
cout <<"============Taupik TIF_16C============="<<endl;

cout <<"Masukan bilangan =  ";
cin >>n;

hasil=1;
for (bilangan=n; bilangan>=1; bilangan--)
{
hasil=hasil*bilangan;
}
cout <<"hasil Faktorial = "<<hasil;
return 0;
}