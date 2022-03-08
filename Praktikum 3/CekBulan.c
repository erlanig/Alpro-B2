/*Nama File 	: CekBulan.c*/
/*Deskripsi 	: Menampilkan nama-nama bulan dari nomor bulan, yaitu 1 s.d 12 yang dibaca dari masukan keyboard pada layar*/
/*Pembuat   	: Erlan Irhab Ghalib - 24060121140166*/
/*Tgl Pembuatan	: Selasa, 8 03 2022 16:15 WIB*/

#include <stdio.h>

int main()
{

    //Kamus
    int h;

    //Algoritma
    printf("Masukan sebuah bilangan : ");
    scanf("%d", &h);

    switch(h)
    {
    case 1:
        printf("Bulan Januari");
        break;
    case 2:
        printf("Bulan Februari");
        break;
    case 3:
        printf("Bulan  Maret");
        break;
    case 4:
        printf("Bulan April");
        break;
    case 5:
        printf("Bulan Mei");
        break;
    case 6:
        printf("Bulan Juni");
        break;
    case 7:
        printf("Bulan Juli");
        break;
     case 8:
        printf("Bulan Agustus");
        break;
    case 9:
        printf("Bulan September");
        break;
    case 10:
        printf("Bulan Oktober");
        break;
    case 11:
        printf("Bulan November ");
        break;
    case 12:
        printf("Bulan Desember");
        break;
    default:
        printf("Masukan nomor bulan tidak tepat");
    }
    return 0;

}

