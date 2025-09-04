#include <iostream> // Giris/cıkıs islemleri icin gerekli kutuphane
using namespace std;


int main() {
    // Tam sayi (integer) veri tipi
    int sayi = 42;
    cout << "int: " << sayi << endl;

    // Kisa tam sayi (short) veri tipi
    short kisaSayi = 10;
    cout << "short: " << kisaSayi << endl;

    // Uzun tam sayi (long) veri tipi
    long uzunSayi = 100000;
    cout << "long: " << uzunSayi << endl;

    // İsaretsiz tam sayı (unsigned int) veri tipi
    unsigned int pozitifSayi = 100;
    cout << "unsigned int: " << pozitifSayi << endl;

    // İsaretsiz uzun tam sayı (unsigned long) veri tipi
    unsigned long pozitifUzunSayi = 1000000;
    cout << "unsigned long: " << pozitifUzunSayi << endl;

    // Genis karakter (wchar_t) veri tipi
    wchar_t genisKarakter = L'Ç';
    wcout << L"wchar_t: " << genisKarakter << endl;

    // Ondalikli sayi (float) veri tipi
    float kesirliSayi = 3.14f;
    cout << "float: " << kesirliSayi << endl;

    // Daha hassas ondalikli sayi (double) veri tipi
    double hassasSayi = 2.718281828;
    cout << "double: " << hassasSayi << endl;

    // Karakter (char) veri tipi
    char karakter = 'A';
    cout << "char: " << karakter << endl;

    // Mantıksal (boolean) veri tipi
    bool dogruMu = true;
    cout << "bool: " << dogruMu << endl; // true = 1, false = 0 olarak yazdırılır

    // Metin (string) veri tipi
    string isim = "Ali";
    cout << "string: " << isim << endl;

    return 0; // Program başarıyla sona erdiğinde 0 döndürür
}
