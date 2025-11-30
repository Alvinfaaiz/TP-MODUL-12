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

void createlistMahasiswa_103012400229(listMahasiswa &L);
bool isEmptyMahasiswa_103012400229(listMahasiswa L);
bool isEmptyMataKuliah_103012400229(adrMahasiswa p);
adrMahasiswa createElemenMahasiswa_103012400229(string nama, string nim);
adrMataKuliah createElemenMataKuliah_103012400229(string nama, string kode);
void addMahasiswa_103012400229(listMahasiswa &L, adrMahasiswa p);
void addMataKuliah_103012400229(adrMahasiswa &p, adrMataKuliah q);
adrMahasiswa searchMahasiswa_103012400229(listMahasiswa L, string nim);
void displaylist_103012400229(listMahasiswa L);


#endif // HEADER_H_INCLUDED
