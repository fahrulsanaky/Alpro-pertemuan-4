#include <iostream>
using namespace std;

class OUTPUT{
	private:
		int p[12] = {} , b = 0, total_tab = 0,total_pengeluaran = 0;
	public:
	void andio(){
		cout<<"\t\t==================================\n\n";
		cout<<"\t\tProgram Penghitung Ekonomi/bulan\n\n";
		cout<<"\t\t==================================\n";
		for(b= 0;b<11;){
			cout<<"Bulan ke\tPengeluaran\tTotal Tabungan\tTotal Pengeluaran\n";
			cout<<b+1<<"\t\t"<<p[b]<<"\t\t "<<total_tab<<"\t\t "<<total_pengeluaran<<endl;
			b++;
		}			
	}
};
