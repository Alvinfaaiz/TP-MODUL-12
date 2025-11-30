#include "header.h"
#include <iostream>

using namespace std;

void createlistMahasiswa_103012400229(listMahasiswa &L){
    L.first = nullptr;
    L.last = nullptr;
}

bool isEmptyMahasiswa_103012400229(listMahasiswa L){
    if (L.first == nullptr){
        return true;
    }else{
        return false;
    }
}

bool isEmptyMataKuliah_103012400229(adrMahasiswa p){
    if(p->firstMK == nullptr){
        return true;
    }else{
        return false;
    }
}

adrMahasiswa createElemenMahasiswa_103012400229(string nama, string nim){
    adrMahasiswa p = new elemenMahasiswa;

    p->info.nama = nama;
    p->info.nim = nim;
    p->firstMK = nullptr;
    p->next = nullptr;
    p->prev = nullptr;

    return p;
}

adrMataKuliah createElemenMataKuliah_103012400229(string nama, string kode){
    adrMataKuliah q = new elemenMataKuliah;

    q->info.nama = nama;
    q->info.kode = kode;
    q->next = nullptr;
    q->prev = nullptr;

    return q;
}

void addMahasiswa_103012400229(listMahasiswa &L, adrMahasiswa p){
    if (L.first == nullptr){
        L.first = p;
        L.last = p;
        p->next = nullptr;
    }else{
        adrMahasiswa jalan = L.first;
        while(jalan->next != nullptr){
            jalan = jalan->next;
        }
        jalan->next = p;
        p->next = nullptr;
    }
}

void addMataKuliah_103012400229(adrMahasiswa &p, adrMataKuliah q){
    if (p->firstMK == nullptr){
        p->firstMK = q;
        q->next = nullptr;
        q->prev = nullptr;
    }else{
        adrMataKuliah jalan = p->firstMK;
        while(jalan->next != nullptr){
            jalan = jalan->next;
        }
        jalan->next = q;
        q->prev = jalan;
        q->next = nullptr;
    }
}

adrMahasiswa searchMahasiswa_103012400229(listMahasiswa L, string nim){
    if(L.first == nullptr){
        return nullptr;
    }else{
        adrMahasiswa jalan = L.first;
        while (jalan != nullptr){
            if(jalan->info.nim == nim){
                return jalan;
            }
            jalan = jalan->next;
        }
    }
    return nullptr;
}

void displaylist_103012400229(listMahasiswa L){
    adrMahasiswa jalan = L.first;
    while(jalan != nullptr){
        cout << "Mahasiswa : " << jalan->info.nama << " (" << jalan->info.nim << ")" << endl;
        cout << "Mata kuliah: ";
        adrMataKuliah keliling = jalan->firstMK;
        while (keliling != nullptr){
            cout << keliling->info.nama;
            if(keliling->next != nullptr){
                cout << ", ";
            }
            keliling = keliling->next;
        }
        cout << endl << endl;
        jalan = jalan->next;
    }
}
