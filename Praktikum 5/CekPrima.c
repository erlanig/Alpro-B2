/*Nama File 	: CekPrima.c*/
/*Deskripsi 	: Menampilkan dan mengetahui sebuah bilangan integer sembarang N (N>0) yang dimasukan
                  melalui keyboard termasuk bilangan prima atau bukan, pada layar*/
/*Pembuat   	: Erlan Irhab Ghalib - 24060121140166*/
/*Tgl Pembuatan	: Selasa, 15 03 2022 20:48 WIB*/

#include <stdio.h>

int main(){

    //Kamus
    int i;
    int N;
    int p = 0;

    //Algoritma
    printf("Program Menghitung Apakah Bilangan Prima\n");
    printf("Masukan sebuah bilangan : ");
    scanf("%d", &N);

    if (N <= 0){
        printf("N harus bilangan integer positif");
    }
    else{
         for(i = 2;i < N;i++){
            if(N % i == 0){
                p = 1;
            }
         }
        if(p == 1){
            printf("%d = Adalah bukan bilangan prima", N);
                }
        else{
            printf("%d = Adalah bilangan prima", N);
                }
            }
    return 0;
}

