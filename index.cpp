#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int nilai1,nilai2,func,hasil;
    char math;
    cout<<"Masukkan Nilai 1 = ";
	cin>>nilai1;
    cout<<"Masukkan Nilai 2 = ";
	cin>>nilai2;
    cout<<"Masukkan Operator Aritmatika = ";
	cin>>math;
	
	if(math == '*'){
		func = nilai1*nilai2;
	}else if(math == '+'){
		func = nilai1+nilai2;
	}else if(math == '-'){
		func = nilai1-nilai2;
	}else if(math == '/'){
		func = nilai1/nilai2;
	}
	else
	{
		cout<<"Operator Aritmatika Salah";
		getch();
	}
	
	hasil = func%2;
    if (hasil==0) {
        cout<<func<<" Adalah bilangan genap";
	}
    else
	{
        cout<<func<<" Adalah bilang ganjil";
	}
	getch();
}
