/*Nama File 	: SiputNaik.c*/
/*Deskripsi 	: Mengetahui berapa hari waktu yang dibutuhkan oleh
                  siput tersebut untuk mencapai ketinggin N mete*/
/*Pembuat   	: Erlan Irhab Ghalib - 24060121140166*/
/*Tgl Pembuatan	: Rabu, 23 03 2022 21:43 WIB*/

#include <stdio.h>

int main(){

    //Kamus
    float N,tinggi=0;
    int hari=0;

    //Algoritma
    printf("Program menghitung hari siput naik\n");
    printf("Masukan kedalaman lubang: ");
    scanf("%f", &N);

    if(N <= 0){
        printf("Kedalaman lubang harus positif");
    }
    else{
        while (tinggi >= 0 && tinggi < N ){
            tinggi = tinggi + 0.3;
            if (tinggi < N){
                tinggi = tinggi - 0.1;
            }
            hari = hari + 1;
        }
        printf("Waktu yang dibutuhkan siput untuk mencapai ketinggian N meter adalah %d hari", hari);

    return 0;
    }
}
