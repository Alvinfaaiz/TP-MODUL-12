#include <iostream>
#include "header.h"

using namespace std;

int main()
{
    listMahasiswa L;
    createlistMahasiswa_103012400229(L);
    string namaMahasiswa, nim, matkul, kode;
    int i, j;

    cout << "[INPUT MAHASISWA]" << endl;
    for(i = 0; i < 3; i++){
        cout << "Masukkan nama mahasiswa: ";
        cin >> namaMahasiswa;
        cout << "Masukkan nim mahasiswa: ";
        cin >> nim;
        adrMahasiswa p = createElemenMahasiswa_103012400229(namaMahasiswa, nim);
        addMahasiswa_103012400229(L, p);
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
        adrMataKuliah q = createElemenMataKuliah_103012400229(matkul, kode);

        adrMahasiswa simpan = searchMahasiswa_103012400229(L, nim);
        if (simpan != nullptr){
            addMataKuliah_103012400229(simpan, q);
        }
        cout << endl;
    }

    cout << "[INPUT MAHASISWA]" << endl;
    displaylist_103012400229(L);

    return 0;
}
