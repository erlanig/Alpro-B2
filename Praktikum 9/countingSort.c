/*Nama File 	: countingSort.c*/
/*Deskripsi 	: Mengurutkan bilangan integer menggunakan counting sort*/
/*Pembuat   	: Erlan Irhab Ghalib - 24060121140166*/
/*Tgl Pembuatan	: Kamis, 28 04 2022 20:34 WIB*/

#include <stdio.h>

/*Program Utama*/
int main(){

    /*Kamus*/
    int N;
    int i;
    int T[100];

    /*Algoritma*/
    printf("Program Counting Sort\n");
    printf("Masukkan jumlah banyaknya data: ");
    scanf("%d", &N);
    printf("Masukkan %d angka integer:\n", N);
    for(i = 0; i < N; i++){
        scanf("%d", &T[i]);
    }

    CountingSort(T, N);
    printf("Hasil pengurutan sebagai berikut : \n");
    for(i = 0; i < N; i++){
        printf("%d ", T[i]);
    }
}

/*Sub Program*/
void CountingSort(int T[], int N){

    /*Kamus Lokal*/
    int i;
    int j;
    int temp;
    int idx;

    /*Algoritma*/
    for(i = 0; i < (N-1); i++){
        idx = i;
        for(j = i+1; j < N; j++){
            if(T[j] < T[idx]){
                idx = j;
            }
        }
        temp = T[i];
        T[i] = T[idx];
        T[idx] = temp;
    }
}
