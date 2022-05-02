/*Nama File 	: bubblenSort.c*/
/*Deskripsi 	: Mengurutkan bilangan integer menggunakan bubble sort*/
/*Pembuat   	: Erlan Irhab Ghalib - 24060121140166*/
/*Tgl Pembuatan	: Senin, 25 04 2022 20:33 WIB*/

#include <stdio.h>

/*Program Utama*/
int main(){

    /*Kamus*/
    int T[100];
    int N;
    int i;
    int j;

    /*Algoritma*/
    printf("Program Bubble Sort\n");
    printf("Masukkan jumlah banyaknya data: ");
    scanf("%d", &N);
    printf("Masukkan %d angka integer:\n", N);

    for(i = 0; i < N; i++){
        scanf("%d", &T[i]);
    }

    bubbleSort(T, N);
    printf("Hasil pengurutan sebagai berikut:\n");
    for(i = 0; i < N; i++){
        printf("%d ", T[i]);
      }
    printf("\n");
}

/*Sub Program*/
void bubbleSort(int arr[], int N){

    /*Kamus Lokal*/
    int i;
    int j;
    int tmp;

    /*Algoritma*/
    for(i = 0; i < N; i++){
        for(j=0; j < N-i-1; j ++){
            if(arr[j] > arr[j+1]){
            tmp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = tmp;
      }
    }
  }
}
