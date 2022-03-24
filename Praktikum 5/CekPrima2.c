/*Nama File 	: CekPrima2.c*/
/*Deskripsi 	: Menampilkan dan mengetahui sebuah bilangan integer sembarang N (N>0) yang dimasukan
                  melalui keyboard termasuk bilangan prima atau bukan, pada layar*/
/*Pembuat   	: Erlan Irhab Ghalib - 24060121140166*/
/*Tgl Pembuatan	: Rabu, 23 03 2022 21:20 WIB*/

#include <stdio.h>

int main(){

    //Kamus
    int i, N, check;

    //Algoritma
    i = 2;
    check = 1;
    printf("Program untuk mengecek bilangan prima\n");
    printf("Masukkan nilai N: ");
    scanf("%d", &N);

    while(check && i < N){
        if (N % i == 0){
            check--;
        }
        i++;
    }

    (check)? printf("%d Merupakan bilangan prima", N): printf("%d Bukan bilangan prima", N);

    return 0;

}
