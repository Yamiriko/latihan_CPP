#include <iostream>
#include <string>
using namespace std;

class hitung_balok {
	public:
		int pjg,lbr,ting;
		void luas(int p, int l, int t){
			int luasnya;
			luasnya = p*l*t;
			cout << "Luas Balok ini adalah : " << luasnya;
		}
};

int main() {
	hitung_balok objBalok;
	cout << "Program Perhitungan Luas Balok" << "\n";
	cout << "-------------------------------------" << "\n";
	cout << "Panjang Baloknya : ";
	cin >> objBalok.pjg;
	cout << "Lebar Baloknya : ";
	cin >> objBalok.lbr ;
	cout << "Tinggi Baloknya : ";
	cin >> objBalok.ting ;
	objBalok.luas(objBalok.pjg,objBalok.lbr,objBalok.ting);
	return 0;
}