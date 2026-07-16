#include <iostream>
using namespace std;

int arr[20]; // membuat array dengan panjang data 20
int n;       // membuat variabel n untuk input panjang array

void input() // membuat prosedur input
{
    while (true)
    {
        cout << "Masukkan Jumlah Data Pada Array : "; // membuat inputan jumlah element array
        cin >> n;                                     // memanggil variabel n untuk menerima input

        if (n <= 20) // membuat kondisi n kurang dari atau sama dengan 20
        {
            break;
        }
        else
        {
            cout << "\nPanjang Data Maksimal 20" << endl; // menampilkan kondisi jika panjang data lebih dari 20
        }
    }

    cout << endl;
    cout << "=========================" << endl; // membuat jarak per baris program
    cout << " Masukkan Element Array " << endl;  // membuat tampilan susunan data element array
    cout << "=========================" << endl;

    for (int i = 0; i < n; i++) // membuat perulangan untuk memasukkan input array
    {
        cout << "Masukkan data ke " << i + 1 << " : "; // memasukkan atau menginputkan nilai data n
        cin >> arr[i];                                  // menyimpan nilai data n ke arr index ke - i
    }
}



void output() // prosedur output
{
    cout << endl;
    cout << "===============================" << endl; // memberi baris baru
    cout << " Element Yang Sudah Di Urut " << endl;   // tampilan elemnt yang sudah di urut
    cout << "===============================" << endl;

    for (int i = 0; i < n; i++) // looping untuk mendisplay isi arr yang sudah di urut
    {
        cout << "Data ke " << i + 1 << " : " << arr[i] << endl; // untuk mendisplay isi arr yang sudah di urut
    }
}

int main()
{
    input();         // memanggil prosedur input()
    insertionSort(); // memanggil prosedur insertionSort()
    output();        // memanggil prosedur output()
}
