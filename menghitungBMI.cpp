//Librarry
#include<iostream>
using namespace std;

//Variabel (global)
float NilBB, NilTB;

//Input Data
void MenghitungBMI(){
    cout << "Masukkan Berat Badan (Kg) = ";
    cin >> NilBB;
    cout << "Masukkan Tinggi Badan (M) = ";
    cin >> NilTB;
}

//Fungsi hitung BMI
float perhitungan_bmi(float b, float t){
    return b/(t * t);
}
