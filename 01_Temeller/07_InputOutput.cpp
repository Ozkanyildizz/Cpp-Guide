#include <iostream> // Giriþ/çýkýþ iþlemleri için gerekli kütüphane
#include <string>   // string veri tipi için gerekli kütüphane
using namespace std;

#if 0
int main() {
    // 1. Temel çýktý iþlemi (output)
    cout << "Merhaba, C++ dünyasý!" << endl; // Ekrana metin yazdýrýr

    // 2. Temel giriþ iþlemi (input)
    int yas;
    cout << "Yaþýnýzý girin: ";
    cin >> yas; // Kullanýcýdan tam sayý okur
    cout << "Girdiðiniz yaþ: " << yas << endl;

    // 3. Birden fazla veri okuma
    int a, b;
    cout << "Ýki tam sayý girin (boþlukla ayýrýn): ";
    cin >> a >> b;
    cout << "a: " << a << ", b: " << b << endl;

    // 4. Ondalýklý sayý okuma
    double pi;
    cout << "Bir ondalýklý sayý girin: ";
    cin >> pi;
    cout << "Girdiðiniz sayý: " << pi << endl;

    // 5. Karakter ve metin okuma
    char karakter;
    cout << "Bir karakter girin: ";
    cin >> karakter;
    cout << "Girdiðiniz karakter: " << karakter << endl;

    // string ile tam satýr okuma
    string isim;
    cout << "Adýnýzý girin: ";
    cin >> isim; // Sadece ilk kelimeyi okur
    cout << "Merhaba, " << isim << "!" << endl;

    // Tam satýr okumak için getline kullanýlýr
    string tamIsim;
    cout << "Tam adýnýzý girin: ";
    cin.ignore(); // Önceki cin'den kalan karakteri temizler
    getline(cin, tamIsim);
    cout << "Tam adýnýz: " << tamIsim << endl;

    // 6. Çýktý formatlama örnekleri
    int sayi = 123;
    double ondalik = 45.6789;
    cout << "\nÇýktý formatlama:" << endl;
    cout << "Sayý: " << sayi << endl;
    cout << "Ondalýk: " << ondalik << endl;

    // Sabit ondalýk basamak gösterimi için
    cout.precision(2);
    cout << fixed;
    cout << "Ondalýk (2 basamak): " << ondalik << endl;

    // 7. Kullanýcýdan birden fazla veri okuma (örnek: döngü ile)
    cout << "\n5 sayý girin:" << endl;
    for (int i = 0; i < 5; i++) {
        int veri;
        cin >> veri;
        cout << "Girdiðiniz sayý: " << veri << endl;
    }

    return 0; // Program baþarýyla sona erdiðinde 0 döndürür
}
#endif
