#include <iostream>
using namespace std;

class Mahasiswa {
public: // akses modifier
    string nama; // nama mahasiswa
    int umur; // umur mahasiswa
    string jurusan; // jurusan mahasiswa

    void output() { // fungsi untuk menampilkan informasi mahasiswa
        cout << "Nama : " << nama << endl; // meminta pengguna memasukkan kode matakuliah
        cout << "Umur : " << umur << endl;
        cout << "Jurusan : " << jurusan << endl;
    }
};

class Matakuliah {
private:
    string kodeMk;
    string namaMk;
    int sks;
public:
    void input() { // fungsi untuk menginput detail matakuliah
        cout << "Kode MK :"; //meminta pengguna memasukkan kode matakuliah
        cin >> kodeMk;
        cout << "Nama MK :"; //meminta pengguna memasukkan nama matakuliah
        cin >> namaMk;
        cout << "SKS :"; //meminta pengguna memasukkan jumlah sks
        cin >> sks;
    }

    void output() { // fungsi untuk menampilkan detail matakuliah
        cout << "Kode MK :" << kodeMk << endl;
        cout << "Nama MK :" << namaMk << endl;
        cout << "SKS :" << sks << endl;
    }
};

int main() //membuat fungsi utama
{
    Mahasiswa mhs;
    Matakuliah mk;

    mhs.nama = "Budi"; //set nama mahasiswa
    mhs.umur = 20; //set umur mahasiswa
}