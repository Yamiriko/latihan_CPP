#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class hitung_bola {
	public:
		int jari;
		void luas (int r){
			float pi = 3.14;
			float luasnya;
			luasnya = 4 * pi * pow(r,2);
			cout << "Luasnya adalah : " << luasnya;
		}
};

int main() {
	hitung_bola objBola;
	cout << "Program Perhitungan Luas Bola" << "\n";
	cout << "-------------------------------------" << "\n";
	cout << "Jari-Jari Bolanya : ";
	cin >> objBola.jari;
	objBola.luas(objBola.jari);
	return 0;
}