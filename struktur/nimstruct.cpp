#include <iostream>
#include <conio.h>

using namespace std;

struct Mahasiswa
{
    string nim;
    string nama;
    string alamat;
    float ipk;
};

int main (int argc, char const *args[]){
    Mahasiswa baru;
    Mahasiswa *siswa = &baru;

    cout << "Masukkan Nim : ";
    cin >> siswa->nim;
    system("cls");
    cout << "Masukkan Nama : ";
    cin >> siswa->nama;
    system("cls");
    cout << "Masukkan Alamat : ";
    cin >> siswa->alamat;
    system("cls");
    cout << "Masukkan Nim : ";
    cin >> siswa->ipk;
    system("cls");

    cout << "NIM: " << siswa->nim << endl;
    cout << "Nama: " << siswa->nama << endl;
    cout << "Alamat: " << siswa->alamat << endl;
    cout << "IPK: " << siswa->ipk << endl;
    return 0;
}