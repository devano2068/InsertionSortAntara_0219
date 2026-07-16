#include <iostream>
#include <cstdlib>
using namespace std;

int n;      // Menyimpan jumlah elemen aktif yang diinputkan
int arr[20]; // Array statis langsung dipesan dengan kapasitas maksimal 20 elemen


int main()
{
    inputData(arr, n);

    cout << "Data awal : " << endl;
    outputdata(arr, n);
    cout << endl;

    cout << "----- PROSES PENGURUTAN -----" << endl;
    shellSort(arr, n);
    cout << "-----------------------------" << endl;
    cout << endl;

    cout << "Data yang telah diurutkan dengan algoritma Shell Sort :" << endl;
    outputdata(arr, n);
    cout << endl;

    return 0;
}