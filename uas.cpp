#include <iostream>

using namespace std;

int main(){
 
    int pilih, waktu, totalHarga, harga, umur; 
    char yesNo;
    string mobil[4] = {"Avanza", "CRV", "HRV", "Brio"}, nama;

    listMobil :
    do{
        cout << "\n=== SELAMAT DATANG DI RENT CAR SENTOSA ===" << endl << endl;

        cout << "List mobil yang sedang disewakan : " << endl;
        cout << "1. "<< mobil[0] << endl;
        cout << "2. "<< mobil[1] << endl;
        cout << "3. "<< mobil[2] << endl;
        cout << "4. "<< mobil[3] << endl;

        cout << "=========================================" << endl;

        cout << "Nama Peminjam : ";
        cin >> nama;

        cout << "Umur : ";
        cin >> umur;

        cout << "=========================================" << endl;

        cout << "Silahkan pilih mobil yang akan anda pinjam : ";
        cin >> pilih;

        cout << "=========================================" << endl;

        switch (pilih)
        {
        case 1:
            cout << "Anda memilih mobil " << mobil[0] << " untuk dipinjam." << endl;
            harga = 200000;
            break;
        
        case 2 :
            cout << "Anda memilih mobil " << mobil[1] << " untuk dipinjam." << endl;
            harga = 475000;
            break;

        case 3 :
            cout << "Anda memilih mobil " << mobil[2] << " untuk dipinjam." << endl;
            harga = 650000;
            break;

        case 4 :
            cout << "Anda memilih mobil " << mobil[3] << " untuk dipinjam." << endl;
            harga = 500000;
            break;

        default:
            goto listMobil;
        }
        
        cout << "===========================================" << endl;

        cout << "Kami hanya menyediakan peminjaman mobil dengan batas maksimal 5 hari." << endl;
        cout << "Anda ingin memesan mobil untuk berapa hari ? : ";
        cin >> waktu;

        cout << "===========================================" << endl;

        if(waktu == 1){
            totalHarga = harga * waktu;
            cout << "Total Harga yang harus dibayar = " << totalHarga << endl;
        }else if(waktu == 2){
            totalHarga = harga * waktu;
            cout << "Total yang harus dibayar = " << totalHarga << endl;
        }else if(waktu == 3){
            totalHarga = harga * waktu;
            cout << "Total yang harus dibayar = " << totalHarga << endl;
        }else if(waktu == 4){
            totalHarga = harga * waktu;
            cout << "Total yang harus dibayar = " << totalHarga << endl;
        }else if(waktu == 5){
            totalHarga = harga * waktu;
            cout << "Total yang harus dibayar = " << totalHarga << endl;
        }else{
            cout << "Batas maksimal peminjaman mobil hanya 5 hari" << endl;
        }

        cout << "============================================" << endl;

        cout << "Apakah anda ingin mengulang pemesanan YES/NO (y/n) ? ";
        cin >> yesNo;

        cout << "============================================" << endl;
    
        cout << "Terima kasih telah menggunakan jasa rental mobil kami." << endl;
        cout << "Semoga selamat sampai tujuan dan pulang dengan selamat." << endl << endl;
    } while (yesNo == 'Y' || yesNo == 'y');

    return 0;
}