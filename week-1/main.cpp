#include <iostream>
using namespace std;

// fungsi menghitung luas lingkaran
float lingkaran(float r) {
    float l;
    const float phi = 3.14;
    l = phi * r * r;
    return l;
}

//fungsi menghitung luas segitiga
float segitiga(float a, float t) {
    float l;
    l = 0.5 * a * t;
    return l;
}

//fungsi menghitung luas persegi
int persegi(int s) {
    int l;
    l = s * s;
    return l;
}

//fungsi menghitung luas segi enam
float segienam(float s1) {
    float l;
    l = (5.19 * s1 * s1) / 2;
    return l;
}


//fungsi utama
int main() {

    int input;

    //menampilkan menu 
    cout << "Program menghitung luas bangun datar \n";
    cout << "1. Luas Lingkara" << endl;
    cout << "2. Luas Segitiga" << endl;
    cout << "3. Luas Persegi" << endl;
    cout << "4. Luas Segi Enam" << endl;
    cout << "0. untuk keluar" << endl;
    cout << "silahkan pilih angka: ";
    cin >> input;

    // switch case untuk menghitung 
    switch (input) {
    case 1:
        float r, hasil;
        cout << "Masukan nilai Jari-Jari: ";
        cin >> r;
        hasil = lingkaran(r);
        cout << "luas lingkaran adalah: ";
        cout << hasil << endl;
        break;
    case 2:
        float a, t, hasil2;
        cout << "masukan nilai alas: ";
        cin >> a;
        cout << "masukan nilai tinggi: ";
        cin >> t;
        hasil2 = segitiga(a, t);
        cout << "luas segitiga adalah: ";
        cout << hasil2 << endl;
        break;
    case 3:
        int s, hasil3;
        cout << "masukan nila sisi: ";
        cin >> s;
        hasil3 = persegi(s);
        cout << "luas persegi adalah: ";
        cout << hasil3 << endl;
        break;
    case 4:
        float s1, hasil4;
        cout << "masukan nilai sisi: ";
        cin >> s1;
        hasil4 = segienam(s1);
        cout << "Luas Segi enam adalah: ";
        cout << hasil4 << endl;
        break;
    }

    cout << "selesai";


    cin.get();
    return 0;
}
