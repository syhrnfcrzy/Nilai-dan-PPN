/* Program Menghitung Nilai Tugas, Mid, Final dan Akhir by Syahrun_Facrezy
*/

#include <iostream>
using namespace std;
int main() {
	// Variabel
	string n_mhs;
	int n_tugas, n_final, n_mid, n_akhir;
	
	//input
	cout<<"\t=============PROGRAM MENGHITUNG NILAI MAHASISWA==============="<<endl<<endl;
	cout<<"\t Nama Mahasiswa : ";cin>>(n_mhs);
	cout<<"\t Input Nilai Tugas : ";cin>>(n_tugas);
	cout<<"\t Input Nilai Mid : ";cin>>(n_mid);
	cout<<"\t Input Nilai Final : ";cin>>(n_final);
	
	n_akhir = n_tugas*20/100+n_mid*30/100+n_final*50/100;
	
	cout<<endl<<endl;
	cout<<"Nilai Akhir = "<<n_akhir<<endl; 

	if (n_akhir>55) {
		cout<<"Cie Cie !!!"<<endl<<endl;
		cout<<" Mahasiswa atas nama "<<n_mhs<<" Dinyatakan Lulus";
	}
	else {
		cout<<" Mahasiswa atas nama "<<n_mhs<<" Dinyatakan Tidak Lulus";
		
	}
	
}
