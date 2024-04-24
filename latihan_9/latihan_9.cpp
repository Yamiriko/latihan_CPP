#include <iostream>
#include <string>
#include <cmath>
#include <math.h>
using namespace std;

class persegiPjg { 
	public:
		int luas(int p, int l){
			int hsl;
			hsl = p*l;
			return hsl;
		};
		
		int kll(int p, int l){
			int hsl;
			hsl = 2 * (p + l);
			return hsl;
		};
};

class lingkaran {
	public:
		float luas(float r){
			float hsl;
			hsl = 3.14 * r * r;
			return hsl;
		};
		
		float kll(float r){
			float hsl;
			hsl = 2 * 3.14 * r;
			return hsl;
		};
};

int main(){
	bool status;
	status = false;
	int p,l,luas,kll,menu;
	float r,luas2;
	persegiPjg obj_persegiPjg;
	lingkaran obj_lingkaran;
	
	do {
		cout << "Program C++ Menu Class" << "\n";
		cout << "------------------------\n";
		cout << "1. Luas Persegi Panjang \n";
		cout << "2. Keliling Persegi Panjang \n";
		cout << "3. Luas Lingkaran \n";
		cout << "4. Keliling Lingkaran \n";
		cout << "5. Keluar \n";
		cout << "Pilih Menu : "; cin >> menu;
		
		switch (menu){
			case 1: 
				cout << "Panjang : ";
				cin >> p;
				cout << "Lebar : ";
				cin >> l;
				luas = obj_persegiPjg.luas(p,l);
				cout << "Luas Persegi Panjang adalah : " << luas << "\n\n";	
				status=false;
				break;
			case 2:
				cout << "Panjang : ";
				cin >> p;
				cout << "Lebar : ";
				cin >> l;
				kll = obj_persegiPjg.kll(p,l);
				cout << "Keliling Persegi Panjang adalah : " << kll << "\n\n";
				status=false;
				break;
			case 3: 
				cout << "Jari-Jari : ";
				cin >> r;
				luas2 = obj_lingkaran.luas(r);
				cout << "Luas Lingkaran adalah : " << luas2 << "\n\n";
				status=false;
				break;
			case 5:
				cout << "Terimakasih..." << endl;
				status=true;
				return 0;
				break;	
			default:
	        	cout << "Menu tidak tersedia" << "\n";		
		}	
	}
	while (status = true);
}