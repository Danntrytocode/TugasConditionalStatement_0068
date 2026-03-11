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

// Fungsi menentukan status BMI
string bmi (float k){
    if (k < 18.5)
        return "Berat Badan Kurang";
    else{
        if (k < 25)
            return "Berat Badan Normal";
        else{
                if (k < 30)
                    return "Berat Badan Kelebihan";
                else{
                        return "Obesitas";
                    }
            }
    }

}

int main(){
// Header sesuai gambar
cout << "--- Selamat Datang Mahasiswa Kelas A 2025 ---" << endl;

// Memanggil prosedur input
MenghitungBMI();

// Output sesuai gambar
float insert = perhitungan_bmi(NilBB,NilTB);
cout << endl;
cout << "--- Hasil ---" << endl;
cout << "BMI Anda = " << insert << endl;
cout << "Dengan Status = " << bmi(insert) << endl;

return 0;
}