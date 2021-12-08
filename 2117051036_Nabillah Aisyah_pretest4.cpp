#include <iostream>
using namespace std;
int main (){
	
	/* Nama : Nabillah Aisyah
	   Kelas : D
	   NPM : 2117051036
	*/
	
	// Deklarasi Variabel //
	int awal;
	int batas;
	int loop;
	
	cout<<"========== Program Bilangan Kelipatan 3 =========="<<endl;
	
	
	cout<<"Silakan Masukkan Bilangan Awal :";
	cin>>awal;
	cout<<"Silakan Masukkan Bilangan Akhir :";
	cin>>batas;
	cout<<endl;
	cout<<"  ";
	for (loop=5;loop<=20;loop++)
	{
	  if(loop%3==0)
	cout<<loop<< " ";
	
	}
	 return 0;
}

