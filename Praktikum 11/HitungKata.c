/*Nama File 	: HitungKata*/
/*Deskripsi 	: Mesin abstrak untuk menghitung banyaknya kata yang ada pada pita*/
/*Pembuat   	: Erlan Irhab Ghalib - 246060121140166*/
/*Tgl Pembuatan	: Selasa, 17 Mei 2022*/

#include <stdio.h>
#include <conio.h>
#include "mesinkar.c"

int main(){

    /*Kamus*/

    char str[100]; // Untuk menampung kalimat yang akan dihitung total kata-nya
  	int i, totalwords;

  	/*Algoritma*/
    printf("Program Mesin Hitung Kata\n");
    if (totalwords >= 100)
    {
        printf("\nkarakter dalam pita maksimal 100 termasuk titik \n");
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
        for ( i = 0; i < totalwords; i++)
        {
            printf("%c", str[i]);
        }

        i = 0;
        totalwords = 1;
        // Loop sampai akhir string
        while(str[i]!='\0')
        {
            // memeriksa apakah karakter saat ini adalah spasi atau baris baru atau karakter tab
            if(str[i]==' ' || str[i]=='\n' || str[i]=='\t')
            {
                totalwords++;
            }

            i++;
        }

        printf("\nTotal kata : %d\n", totalwords);
    }

    getch();
	return 0;
}
