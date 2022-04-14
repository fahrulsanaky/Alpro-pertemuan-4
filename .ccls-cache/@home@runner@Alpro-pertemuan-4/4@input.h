#include <iostream>
using namespace std;

class INPUT{
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
};
