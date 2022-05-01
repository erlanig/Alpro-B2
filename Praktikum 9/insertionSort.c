/*Nama File 	: insertionSort.c*/
/*Deskripsi 	: Mengurutkan bilangan integer menggunakan insertion sort*/
/*Pembuat   	: Erlan Irhab Ghalib - 24060121140166*/
/*Tgl Pembuatan	: Senin, 25 04 2022 19:59 WIB*/

#include <stdio.h>

/*Program Utama*/
int main(){

    /*Kamus*/
    int N;
    int i;
    int T[100];

    /*Algoritma*/
    printf("Program Insertion Sort\n");
    printf("Masukkan jumlah banyaknya data: ");
    scanf("%d", &N);
    printf("Masukkan %d angka integer:\n", N);
    for(i = 0; i < N; i++){
        scanf("%d", &T[i]);
    }

    InsertionSort(T, N);
    printf("Hasil pengurutan sebagai berikut : \n");
    for(i = 0; i < N; i++){
        printf("%d ", T[i]);
    }
}

void InsertionSort(int T[], int N){

    /*Kamus Lokal*/
    int i;
    int j;
    int temp;

    /*Algoritma*/
    for (i = 1; i < N; i++) {
        temp = T[i];
        j = i - 1;
        while (j >= 0 && T[j] > temp) {
            T[j + 1] = T[j];
            j-- ;
        }
        T[j + 1] = temp;
    }
}


