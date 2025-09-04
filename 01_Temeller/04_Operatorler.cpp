#include <iostream> // Giriþ/çýkýþ iþlemleri için gerekli kütüphane
using namespace std;


int main() {
    // 1. Aritmetik Operatörler
    int a = 10, b = 3;
    cout << "Aritmetik Operatörler:" << endl;
    cout << "a + b = " << a + b << endl; // Toplama
    cout << "a - b = " << a - b << endl; // Çýkarma
    cout << "a * b = " << a * b << endl; // Çarpma
    cout << "a / b = " << a / b << endl; // Bölme (tam sayý bölmesi)
    cout << "a % b = " << a % b << endl; // Mod (kalan)

    // 2. Atama Operatörleri
    int c = 5;
    cout << "\nAtama Operatörleri:" << endl;
    c += 2; // c = c + 2
    cout << "c += 2 -> " << c << endl;
    c -= 1; // c = c - 1
    cout << "c -= 1 -> " << c << endl;
    c *= 3; // c = c * 3
    cout << "c *= 3 -> " << c << endl;
    c /= 2; // c = c / 2
    cout << "c /= 2 -> " << c << endl;
    c %= 2; // c = c % 2
    cout << "c %= 2 -> " << c << endl;

    // 3. Karþýlaþtýrma Operatörleri
    cout << "\nKarþýlaþtýrma Operatörleri:" << endl;
    cout << "a == b: " << (a == b) << endl; // Eþit mi?
    cout << "a != b: " << (a != b) << endl; // Eþit deðil mi?
    cout << "a > b: " << (a > b) << endl;   // Büyük mü?
    cout << "a < b: " << (a < b) << endl;   // Küçük mü?
    cout << "a >= b: " << (a >= b) << endl; // Büyük veya eþit mi?
    cout << "a <= b: " << (a <= b) << endl; // Küçük veya eþit mi?

    // 4. Mantýksal Operatörler
    bool x = true, y = false;
    cout << "\nMantýksal Operatörler:" << endl;
    cout << "x && y: " << (x && y) << endl; // VE (and)
    cout << "x || y: " << (x || y) << endl; // VEYA (or)
    cout << "!x: " << (!x) << endl;         // DEÐÝL (not)

    // 5. Artýrma/Azaltma Operatörleri
    int d = 5;
    cout << "\nArtýrma/Azaltma Operatörleri:" << endl;
    cout << "d++: " << d++ << " (önce yazdýrýr, sonra artýrýr)" << endl;
    cout << "++d: " << ++d << " (önce artýrýr, sonra yazdýrýr)" << endl;
    cout << "d--: " << d-- << " (önce yazdýrýr, sonra azaltýr)" << endl;
    cout << "--d: " << --d << " (önce azaltýr, sonra yazdýrýr)" << endl;

    // 6. Bit Düzeyinde Operatörler
    int e = 6, f = 3;
    cout << "\nBit Düzeyinde Operatörler:" << endl;
    cout << "e & f: " << (e & f) << " (ve)" << endl;
    cout << "e | f: " << (e | f) << " (veya)" << endl;
    cout << "e ^ f: " << (e ^ f) << " (özel veya)" << endl;
    cout << "~e: " << (~e) << " (deðil)" << endl;
    cout << "e << 1: " << (e << 1) << " (sola kaydýr)" << endl;
    cout << "e >> 1: " << (e >> 1) << " (saða kaydýr)" << endl;

    // 7. Koþul (Ternary) Operatörü
    int g = 7, h = 9;
    cout << "\nKoþul (Ternary) Operatörü:" << endl;
    int max = (g > h) ? g : h;
    cout << "max = (g > h) ? g : h -> " << max << endl;

    // 8. Üyelik ve Eriþim Operatörleri (örnek için struct kullanalým)
    struct Nokta {
        int x, y;
    };
    Nokta n;
    n.x = 1;
    n.y = 2;
    cout << "\nÜyelik ve Eriþim Operatörleri:" << endl;
    cout << "n.x: " << n.x << ", n.y: " << n.y << endl;

    return 0; // Program baþarýyla sona erdiðinde 0 döndürür
}

