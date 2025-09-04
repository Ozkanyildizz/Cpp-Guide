#include <iostream> // Giri�/��k�� i�lemleri i�in gerekli k�t�phane
#include <string>   // string veri tipi i�in gerekli k�t�phane
using namespace std;

#if 0
int main() {
    // 1. Temel ��kt� i�lemi (output)
    cout << "Merhaba, C++ d�nyas�!" << endl; // Ekrana metin yazd�r�r

    // 2. Temel giri� i�lemi (input)
    int yas;
    cout << "Ya��n�z� girin: ";
    cin >> yas; // Kullan�c�dan tam say� okur
    cout << "Girdi�iniz ya�: " << yas << endl;

    // 3. Birden fazla veri okuma
    int a, b;
    cout << "�ki tam say� girin (bo�lukla ay�r�n): ";
    cin >> a >> b;
    cout << "a: " << a << ", b: " << b << endl;

    // 4. Ondal�kl� say� okuma
    double pi;
    cout << "Bir ondal�kl� say� girin: ";
    cin >> pi;
    cout << "Girdi�iniz say�: " << pi << endl;

    // 5. Karakter ve metin okuma
    char karakter;
    cout << "Bir karakter girin: ";
    cin >> karakter;
    cout << "Girdi�iniz karakter: " << karakter << endl;

    // string ile tam sat�r okuma
    string isim;
    cout << "Ad�n�z� girin: ";
    cin >> isim; // Sadece ilk kelimeyi okur
    cout << "Merhaba, " << isim << "!" << endl;

    // Tam sat�r okumak i�in getline kullan�l�r
    string tamIsim;
    cout << "Tam ad�n�z� girin: ";
    cin.ignore(); // �nceki cin'den kalan karakteri temizler
    getline(cin, tamIsim);
    cout << "Tam ad�n�z: " << tamIsim << endl;

    // 6. ��kt� formatlama �rnekleri
    int sayi = 123;
    double ondalik = 45.6789;
    cout << "\n��kt� formatlama:" << endl;
    cout << "Say�: " << sayi << endl;
    cout << "Ondal�k: " << ondalik << endl;

    // Sabit ondal�k basamak g�sterimi i�in
    cout.precision(2);
    cout << fixed;
    cout << "Ondal�k (2 basamak): " << ondalik << endl;

    // 7. Kullan�c�dan birden fazla veri okuma (�rnek: d�ng� ile)
    cout << "\n5 say� girin:" << endl;
    for (int i = 0; i < 5; i++) {
        int veri;
        cin >> veri;
        cout << "Girdi�iniz say�: " << veri << endl;
    }

    return 0; // Program ba�ar�yla sona erdi�inde 0 d�nd�r�r
}
#endif
