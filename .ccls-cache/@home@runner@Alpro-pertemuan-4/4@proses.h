#include <iostream>
using namespace std;

class PROSES{
	private:
		int t[12]={}, p[12]= {}, b = 0, total_tab = 0,total_pengeluaran = 0;
	public:
		void tabung(){
			for(b=0;b<11;){
				total_tab = total_tab + t[b];
				b++;
			}
		}
		void pengeluaran(){
			for(b=0;b<11;){
				total_pengeluaran = total_pengeluaran + p[b];
				b++;
			}
		}
};
