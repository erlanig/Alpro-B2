/*Nama File 	: CekSempurna.c*/
/*Deskripsi 	: Menampilkan dan mengetahui sebuah bilangan integer sembarang N (N>0) yang
                  dimasukan melalui keyboard termasuk bilangan sempurna atau bukan, pada layar*/
/*Pembuat   	: Erlan Irhab Ghalib - 24060121140166*/
/*Tgl Pembuatan	: Selasa, 15 03 2022 22:13 WIB*/

#include <stdio.h>

int main(){

    //Kamus
    int i;
    int N;
    int s = 0;

    //Algoritma
    printf("Program Mengecek Apakah Bilangan Sempurna\n");
    printf("Masukan sebuah bilangan : ");
    scanf("%d", &N);

    if (N < 0){
        printf("N harus bilangan integer positif");
    }
    else{
        for(i = 1;i < N;i++){
            if(N % i == 0){
                s = s + i;
            }
        }
        if(s == N){
            printf("%d = Adalah bilangan sempurna", N);
        }
        else{
            printf("%d = Adalah bukan bilangan sempurna", N);
        }
            }
    return 0;
}
