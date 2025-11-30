#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <iostream>

using namespace std;

typedef struct elemenMahasiswa *adrMahasiswa;
typedef struct elemenMataKuliah *adrMataKuliah;

struct mahasiswa{
    string nama;
    string nim;
};

struct mataKuliah{
    string nama;
    string kode;
};

struct elemenMahasiswa{
    mahasiswa info;
    adrMahasiswa next;
    adrMahasiswa prev;
    adrMataKuliah firstMK;
};

struct elemenMataKuliah{
    mataKuliah info;
    adrMataKuliah next;
    adrMataKuliah prev;
};

struct listMahasiswa{
    adrMahasiswa first;
    adrMahasiswa last;
};

void createlistMahasiswa(listMahasiswa &L);
bool isEmptyMahasiswa(listMahasiswa L);
bool isEmptyMataKuliah(adrMahasiswa p);
adrMahasiswa createElemenMahasiswa (string nama, string nim);
adrMataKuliah createElemenMataKuliah(string nama, string kode);
void addMahasiswa(listMahasiswa &L, adrMahasiswa p);
void addMataKuliah(adrMahasiswa &p, adrMataKuliah q);
adrMahasiswa searchMahasiswa(listMahasiswa L, string nim);
void displaylist(listMahasiswa L);


#endif // HEADER_H_INCLUDED
