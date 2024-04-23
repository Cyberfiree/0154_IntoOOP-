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
    }
};

int main()
{
}