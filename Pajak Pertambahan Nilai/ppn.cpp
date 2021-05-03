/* Progran Menghitung Pajak Pertambahan Nilai sebesar 12.50% by Syahrun Facrezy
*/
#include <iostream>
using namespace std;
int main() {
	// Variabel 
	int hrg_brngA, hrg_brngB, t_hrg, t_byr, pajak;
	
	// Input 
	cout<<"\t=========PROGRAM PAJAK PERTAMBAHAN NILAI========="<<endl<<endl;
	cout<<"\t Input Harga Barang A = Rp ";cin>>(hrg_brngA);
	cout<<"\t Input Harga Barang B = Rp ";cin>>(hrg_brngB);
	
	cout<<endl;
	t_hrg = hrg_brngA+hrg_brngB;
	cout<<"\t Jumlah Harga Barang yang dibeli adalah Rp "<<t_hrg;
	
	cout<<endl;
	pajak = 12.50/100*t_hrg;
	cout<<"\t PPN = Rp "<<pajak;
	
	cout<<endl;
	t_byr = t_hrg+pajak;
	cout<<"\t Total Harga Bayar	= Rp"<<t_byr;
	
}
