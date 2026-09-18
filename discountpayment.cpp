#include <iostream>
using namespace std;

int main(){

    int paymentNominal;
    int discount;
    float discountResult;
    float paymentTotal;

    cout <<  "=== Kalkulator Kasir Toko Baju ===" << endl;
    cout << "Masukkan Nominal Belanja   : ";
    cin >> paymentNominal;

    if (paymentNominal >= 300000) {
        discount = 20;
    } else if (paymentNominal >= 100000) {
        discount = 10;
    } else {
        discount = 0;
    }       

    discountResult = ((discount * 0.01) * paymentNominal);
    paymentTotal = paymentNominal - discountResult;

    cout << "--- Ringkasan Pembayaran ---" << endl;
    cout << "Diskon (" << discount << "%)   : " << "Rp " << discountResult << endl;
    cout << "Total Bayar    : Rp " << paymentTotal; 

    return 0;
}