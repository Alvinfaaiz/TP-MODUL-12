#include <iostream>
#include "header.h"

using namespace std;

int main()
{
    listMahasiswa L;
    createlistMahasiswa(L);
    string namaMahasiswa, nim, matkul, kode;
    int i, j;

    cout << "[INPUT MAHASISWA]" << endl;
    for(i = 0; i < 3; i++){
        cout << "Masukkan nama mahasiswa: ";
        cin >> namaMahasiswa;
        cout << "Masukkan nim mahasiswa: ";
        cin >> nim;
        adrMahasiswa p = createElemenMahasiswa(namaMahasiswa, nim);
        addMahasiswa(L, p);
        cout << endl;
    }

    cout << "[INPUT MAHASISWA]" << endl;
    for(j = 0; j < 4; j++){
        cout << "Masukkan nama mata kuliah: ";
        cin >> matkul;
        cout << "Masukkan kode mata kuliah: ";
        cin >> kode;
        cout << "Masukkan nim mahasiswa yang ingin diinputkan: ";
        cin >> nim;
        adrMataKuliah q = createElemenMataKuliah(matkul, kode);

        adrMahasiswa simpan = searchMahasiswa(L, nim);
        if (simpan != nullptr){
            addMataKuliah(simpan, q);
        }
        cout << endl;
    }

    cout << "[INPUT MAHASISWA]" << endl;
    displaylist(L);

    cout << "Hello world!" << endl;
    return 0;
}
