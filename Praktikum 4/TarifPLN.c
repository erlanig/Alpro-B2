/*Nama File 	: TarifPLN.c*/
/*Deskripsi 	: Menampilkan dan menghitung besar tarif listrik yang dikenakan pada layar*/
/*Pembuat   	: Erlan Irhab Ghalib - 24060121140166*/
/*Tgl Pembuatan	: Senin, 14 03 2022 19:49 WIB*/


#include <stdio.h>

int main()
{

    //Kamus
    int gt,pmd,tarif,total;

    //Algoritma
    printf("Program Hitung Tarif PLN\n");
    printf("Masukan golongan tarif (1 s/d 2) : ");
    scanf("%d", &gt);
    printf("Masukan jumlah pemakaian daya listrik (/kWH ): ");
    scanf("%d", &pmd);
    if (gt == 1){
        if (pmd <= 100){
            total = 100000;
            printf("%d", total);
        }
        else if (pmd < 1000){
            total = pmd * 1000;
            printf("%d", total);
        }
        else{
            total = (pmd * 1000) + (0.1 * (pmd * 1000));
            printf("%d", total);
        }
    }
    else{
        if (pmd <= 100){
            total = 200000;
            printf("%d", total);
        }
        else if (pmd < 1000){
            total = pmd * 2000;
            printf("%d", total);
        }
        else{
            total = (pmd * 2000) + (0.1 * (pmd * 2000));
            printf("%d", total);
    }
    return 0;
    }
}
