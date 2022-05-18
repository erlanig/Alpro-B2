/*Nama File 	: Palindrome*/
/*Deskripsi 	: Mesin abstrak untuk memeriksa apakah kata itu PALINDROM dan mengirimkan sebuah harga boolean*/
/*Pembuat   	: Erlan Irhab Ghalib - 246060121140166*/
/*Tgl Pembuatan	: Selasa, 17 Mei 2022*/

#include <stdio.h>
#include <conio.h>
#include "mesinkar.c"

int main(){

    /*Kamus*/
    char str[50]; // Untuk menampung kalimat yang ingin di cek palindrome atau bukan
    int i, len, temp = 0;
    int flag = 0;
    len = strlen(str); // Variabel len yang diisi dengan nilai sebesar ukuran kalimat dalam variabel str

    /*Algoritma*/
    len = HitungChar();

    printf("Program Mesin Palidrome\n");
    if (len >= 50 )
    {
        printf("\n karakter dalam pita maksimal 50 termasuk titik \n");
    }
    else{
        START();
        i = 0;
        while(!EOP()){
            str[i] = CC;
            ADV();
            i++;
        }

        printf("\nPita dibaca = ");
        for ( i = 0; i < len; i++)
        {
            printf("%c", str[i]);
        }

        for(i=0;i < len ;i++){
            if(str[i] != str[len-i-1]) { // Melakukan penyesuaian setiap hurufnya
                temp = 1; // Jika tidak cocok, maka variable temp diisi dengan nilai 1
                break;
            }
        }

        if (temp == 0) {
            printf("\nPALINDROME !\n");
        }
        else {
            printf("\nBUKAN PALINDROME !\n");
        }

    getch();
    return 0;
    }
}
