/*Nama File 	: FaktorBil.c*/
/*Deskripsi 	: Menampilkan dan menentukan faktor-faktor bilangan dari bilangan
                integer sembarang N (N>0) yang dimasukan melalui keyboard pada layar*/
/*Pembuat   	: Erlan Irhab Ghalib - 24060121140166*/
/*Tgl Pembuatan	: Selasa, 15 03 2022 17:12 WIB*/

#include <stdio.h>

int main(){

    //Kamus
    int i;
    int N;

    //Algoritma
    printf("Program Menghitung Faktorial Bilangan\n");
    printf("Masukan sebuah bilangan : ");
    scanf("%d", &N);
    printf("Faktor dari bilangan %d\n", N);

    if (N < 0){
        printf("N harus bilangan integer positif");
    }
    else{
         for(i = 1;i <= N;i++){
            if(N%i == 0){
            printf(" %d", i);
            }
        }
    }
    return 0;
}
