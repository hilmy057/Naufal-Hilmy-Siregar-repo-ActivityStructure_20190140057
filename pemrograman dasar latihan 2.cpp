#include <iostream>
using namespace std;

struct AlamatDetail 

{
   string desa;
   string kota;
};

struct  Mahasiswa 
{
    string NIM ;
    string nama ;
    AlamatDetail alamat;
    int umur;

};
int main (){
    Mahasiswa mhs;

    cout << "masukkan NIM :" ;
    cin >> mhs.NIM ;
    cout << "masukkan nama : " ; 
    cin >> mhs.nama;
    cout << "alamat : " ;
    cout << "\n\t Masukkan Desa : ";
    cin >>mhs.alamat.desa;
    cout << "\n\tMasukkan kota : ";
    cin >> mhs.alamat.kota ;
    cout << "masukkan Umur : ";
    cin >> mhs.umur;
    
    cout << "\n\nNIM = " <<mhs.NIM;
    cout << "\nNama = " <<mhs.nama;
    cout << "\nDesa = " <<mhs.alamat.desa;
    cout << "\nKota = " <<mhs.alamat.kota;
    cout << "\nUmur = " <<mhs.umur;


}


