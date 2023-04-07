//1. Karena algoritma dapat membantu dalam membuat langkah-langkah yang terstruktur untuk menyelesaikan masalah, 
//memungkinkan untuk melakukan analisis dan perbaikan perangkat lunak secara efektif, 
//membantu dalam mengotomatiskan tugas-tugas yang berulang dan kompleks,
//menjamin konsistensi dalam penyelesaian masalah dan mengurangi kesalahan manusia, 
//dan membantu dalam menghemat waktu dan biaya dalam menyelesaikan masalah.
//2. Statis dan dinamis.
//3. Kecepatan mesin, Compiler(mengubah bahasa kita menjadi Bahasa komputer), Sistem operasi, Bahasa pemrograman,Ukuran input.
//4. Algoritma Quicksort. Kelebihan dari algoritma ini adalah kinerjanya yang sangat cepat dibanding
//algoritma pengurutan data lainnya, bahkan untuk data yang berukuran besar. 
//Quicksort memanfaatkan metode divide and conquer yang memungkinkan untuk mengurangi kompleksitas waktu secara drastis.
//Oleh karena itu, quicksort lebih efisien dan mudah diimplementasikan untuk data berukuran besar.
//5. Quadratic : Bubblesort, Selectionsort, Insertionsort, dan Shellsort.
//Loglinear : Quicksort dan Mergesort.

#include <iostream>
using namespace std;

//Deklarasi Array
int andini[79];

void merge(int, int, int);

//Membagi array menjadi 2 bagian, mengurutkan array, dan menggabungkan 2 bagian yang sudah diurutkan
void  merge_sort(int low, int high) {
	int mid;
	if (low < high) {
		mid = (low + high) / 2;
		merge_sort(low, mid);
		merge_sort(mid + 1, high);
		merge(low, mid, high);
	}
}

//Menggabungkan 2 array dalam satu larik
void merge(int low, int mid, int high) {