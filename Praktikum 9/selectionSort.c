/*Nama File 	: selectionSort.c*/
/*Deskripsi 	: Mengurutkan bilangan integer menggunakan selection sort*/
/*Pembuat   	: Erlan Irhab Ghalib - 24060121140166*/
/*Tgl Pembuatan	: Kamis, 28 04 2022 21:08 WIB*/

#include <stdio.h>

/*Program Utama*/
int main(){

    /*Kamus*/
    int N;
    int i;
    int T[100];

    /*Algoritma*/
    printf("Program Selection Sort\n");
    printf("Masukkan jumlah banyaknya data: ");
    scanf("%d", &N);
    printf("Masukkan %d angka integer:\n", N);
    for(i = 0; i < N; i++){
        scanf("%d", &T[i]);
    }

    SelectionSort(T, N);
    printf("Hasil pengurutan sebagai berikut : \n");
    for(i = 0; i < N; i++){
        printf("%d ", T[i]);
    }
}

int SelectionSort(int arr[], int n){

    /*Kamus LOkal*/
    int i;
    int j;
    int pos;
    int tukar;

    /*Algoritma*/
    for(i = 0; i < (n-1); i++){
        pos = i;
        for (j = i + 1; j < n; j++){
            if(arr[pos] > arr[j]){
                pos = j;
            }
        }
        if(pos != i){
          tukar = arr[i];
          arr[i] = arr[pos];
          arr[pos] = tukar;
        }
    }
}
