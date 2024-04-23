// Mendefinisikan kelas untuk bangun datar
#include <iostream> // library untuk input-output
using namespace std;

class bangunDatar {
	//akses modifier
private:
	float panjang, lebar; // Deklarasi variabel panjang dan lebar sebagai private
public:
	float luas;

	void input() { // methode input persegi panjang

		// Meminta pengguna untuk memasukkan panjang
		cout << "Masukan Panjangnya = ";
		cin >> panjang;
		//Meminta pengguna untuk memasukkan lebar
		cout << "Masukan Lebarnya = ";
		cin >> lebar;
	}

	float hitungluas() {
		return panjang * lebar; //Menghitung luas persegi panjang
	}

	void display() {
		// menampilkan panjang, lebar, dan luas persegi panjang
		cout << "Panjangnya = " << panjang << endl;
		cout << "Lebarnya = " << lebar << endl;
		cout << "Luasnya = " << hitungluas() << endl;
	}
};

int main() {
}