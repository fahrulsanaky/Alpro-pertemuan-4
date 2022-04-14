#include <iostream>
using namespace std;

class OUTPUT{
	private:
		int p[12] , b = 0, total_tab = 0,total_pengeluaran = 0;
	public:
	void andio(){
		cout<<"Program Penghitung Ekonomi/bulan\n\n";
		for(b= 0;b<12;){
			cout<<"Bulan ke\tPengeluaran\tTotal Tabungan\tTotal Pengeluaran\n";
			cout<<b+1<<"\t\t"<<p[b]<<"\t\t "<<total_tab<<"\t\t "<<total_pengeluaran<<"\n";b++;
		}			
	}
};
