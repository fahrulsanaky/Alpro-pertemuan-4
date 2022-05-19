#include <iostream>
using namespace std;

class Rida{
	private:
		 int dpt,t[12] ={}, p[12] = {}, b = 0, total_tab = 0,total_pengeluaran = 0;
	public:
		void pendapatan(){
			cout<<"Masukkan Pendapatan = ";
			cin>>dpt;
		}
		void tabung(){
			cout<<"\n============================\n";
			for (b=0;b<=11;b++)
   				 {
        			cout<<"\nMasukkan tabungan bulan ke " << b+ 1 << ": ";
       				 cin>>t[b];
   				 }
			}
		void pengeluaran(){
			cout<<"\n============================\n";
			for (b=0;b<=11;b++)
   				 {
        			cout<<"\nMasukkan pengeluaran bulan ke " << b+ 1 << ": ";
       				 cin>>p[b];
       			}
		}
		void prout(){
		cout<<"\t\t==================================\n\n";
		cout<<"\t\tProgram Penghitung Ekonomi/bulan\n\n";
		cout<<"\t\t==================================\n";
		for(b= 0;b<12;){
			total_pengeluaran = total_pengeluaran + p[b];
			total_tab = total_tab + t[b];
			cout<<"Bulan ke\tPengeluaran\tTotal Tabungan\tTotal Pengeluaran\n";
			cout<<b+1<<"\t\t"<<p[b]<<"\t\t "<<total_tab<<"\t\t "<<total_pengeluaran<<endl;
			b++;
		}	
		cout<<"Hasil\n";
		cout<<"==================================\n\n";
		cout<<"Total Pendapatan 	= Rp."<<dpt*12<<endl;
		cout<<"Total Tabungan		= Rp."<<total_tab<<endl;
		cout<<"Total Pengeluaran	= Rp."<<total_pengeluaran<<endl;
		cout<<"\n\n==================================\n\n";
		}
};


int main(){
	Rida x;
	x.pendapatan();
	x.tabung();
	x.pengeluaran();
	x.prout();
}
