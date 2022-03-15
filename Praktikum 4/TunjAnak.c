/*Nama File 	: TunjAnak.c*/
/*Deskripsi 	: Menampilkan dan menghitung besarnya tunjangan dari input yang diberikan anak pada layar*/
/*Pembuat   	: Erlan Irhab Ghalib - 24060121140166*/
/*Tgl Pembuatan	: Senin, 14 03 2022 20:06 WIB*/

#include <stdio.h>

int main()
{

    //Kamus
    int anak,gp,ta;

    //Algoritma
    printf("Program Menghtiung Tunjangan Anak\n");
    printf("Masukan jumlah anak Anda : ");
    scanf("%d", &anak);
    printf("Masukan gaji pokok Anda : ");
    scanf("%d", &gp);

    switch(anak){

    case 0:
        ta = 0 * (0.1 * gp);
        printf("%d", ta);
        break;
    case 1:
        ta = 1 * (0.1 * gp);
        printf("%d", ta);
        break;
    case 2:
        ta = 2 * (0.1 * gp);
        printf("%d", ta);
        break;
    case 3:
        ta = 3 * (0.1 * gp);
        printf("%d", ta);
        break;
    default:
        ta = 3 * (0.1 * gp);
        printf("d", ta);
    }
    return 0;

}
