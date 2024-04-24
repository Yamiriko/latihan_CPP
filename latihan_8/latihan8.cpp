#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class penilian_mhs {
	public:
		int nilainya;
		void hitung_nilai (int nilai_angka){
			if ((nilai_angka >= 81) && (nilai_angka <=100)){
				cout << "Nilai Hurufnya : A";
			}
			else if ((nilai_angka >= 61) && (nilai_angka <=80)){
				cout << "Nilai Hurufnya : A";
			}
			else if ((nilai_angka >= 51) && (nilai_angka <=60)){
				cout << "Nilai Hurufnya : B";
			}
			else if ((nilai_angka >= 41) && (nilai_angka <=50)){
				cout << "Nilai Hurufnya : D";
			}
			else if ((nilai_angka >= 0) && (nilai_angka <=40)){
				cout << "Nilai Hurufnya : E";
			}
		}
};

int main() {
	penilian_mhs objNilaiMhs;
	cout << "Program Penilian MHS" << "\n";
	cout << "-------------------------------------" << "\n\n";
	cout << "Nilai Huruf		Range Nilai Angka" << "\n";
	cout << "-------------------------------------" << "\n";
	cout << "A			81 - 100" << "\n";
	cout << "B			61 - 80" << "\n";
	cout << "C			51 - 60" << "\n";
	cout << "D			41 - 50" << "\n";
	cout << "E			0 - 40" << "\n\n";
	cout << "Nilai Angka : ";
	cin >> objNilaiMhs.nilainya;
	objNilaiMhs.hitung_nilai(objNilaiMhs.nilainya);
	return 0;
}