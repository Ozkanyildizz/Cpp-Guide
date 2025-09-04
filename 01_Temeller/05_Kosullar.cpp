#include <iostream> // Giriþ/çýkýþ iþlemleri için gerekli kütüphane
using namespace std;

#if 0
int main() {
    // 1. if koþulu
    int sayi = 10;
    cout << "if koþulu:" << endl;
    if (sayi > 5) {
        cout << "sayi 5'ten büyük." << endl;
    }

    // 2. if - else koþulu
    cout << "\nif - else koþulu:" << endl;
    if (sayi % 2 == 0) {
        cout << "sayi çift." << endl;
    }
    else {
        cout << "sayi tek." << endl;
    }

    // 3. if - else if - else koþulu
    cout << "\nif - else if - else koþulu:" << endl;
    if (sayi < 0) {
        cout << "sayi negatif." << endl;
    }
    else if (sayi == 0) {
        cout << "sayi sýfýr." << endl;
    }
    else {
        cout << "sayi pozitif." << endl;
    }

    // 4. Birden fazla koþulun birleþtirilmesi
    cout << "\nBirden fazla koþulun birleþtirilmesi:" << endl;
    int yas = 20;
    if (yas >= 18 && yas < 65) {
        cout << "Yetiþkin." << endl;
    }
    else if (yas >= 65) {
        cout << "Emekli." << endl;
    }
    else {
        cout << "Çocuk." << endl;
    }

    // 5. switch-case koþulu
    cout << "\nswitch-case koþulu:" << endl;
    int gun = 3;
    switch (gun) {
    case 1:
        cout << "Pazartesi" << endl;
        break;
    case 2:
        cout << "Salý" << endl;
        break;
    case 3:
        cout << "Çarþamba" << endl;
        break;
    case 4:
        cout << "Perþembe" << endl;
        break;
    case 5:
        cout << "Cuma" << endl;
        break;
    default:
        cout << "Hafta sonu" << endl;
        break;
    }

    // 6. Koþul (ternary) operatörü
    cout << "\nKoþul (ternary) operatörü:" << endl;
    int x = 7, y = 9;
    int buyuk = (x > y) ? x : y;
    cout << "En büyük: " << buyuk << endl;

    // 7. Ýç içe koþullar (nested if)
    cout << "\nÝç içe koþullar:" << endl;
    int notDegeri = 85;
    if (notDegeri >= 50) {
        cout << "Geçti." << endl;
        if (notDegeri >= 90) {
            cout << "Pekiyi!" << endl;
        }
    }
    else {
        cout << "Kaldý." << endl;
    }

    return 0; // Program baþarýyla sona erdiðinde 0 döndürür
}
#endif