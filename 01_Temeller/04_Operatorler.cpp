#include <iostream> // Giri�/��k�� i�lemleri i�in gerekli k�t�phane
using namespace std;


int main() {
    // 1. Aritmetik Operat�rler
    int a = 10, b = 3;
    cout << "Aritmetik Operat�rler:" << endl;
    cout << "a + b = " << a + b << endl; // Toplama
    cout << "a - b = " << a - b << endl; // ��karma
    cout << "a * b = " << a * b << endl; // �arpma
    cout << "a / b = " << a / b << endl; // B�lme (tam say� b�lmesi)
    cout << "a % b = " << a % b << endl; // Mod (kalan)

    // 2. Atama Operat�rleri
    int c = 5;
    cout << "\nAtama Operat�rleri:" << endl;
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

    // 3. Kar��la�t�rma Operat�rleri
    cout << "\nKar��la�t�rma Operat�rleri:" << endl;
    cout << "a == b: " << (a == b) << endl; // E�it mi?
    cout << "a != b: " << (a != b) << endl; // E�it de�il mi?
    cout << "a > b: " << (a > b) << endl;   // B�y�k m�?
    cout << "a < b: " << (a < b) << endl;   // K���k m�?
    cout << "a >= b: " << (a >= b) << endl; // B�y�k veya e�it mi?
    cout << "a <= b: " << (a <= b) << endl; // K���k veya e�it mi?

    // 4. Mant�ksal Operat�rler
    bool x = true, y = false;
    cout << "\nMant�ksal Operat�rler:" << endl;
    cout << "x && y: " << (x && y) << endl; // VE (and)
    cout << "x || y: " << (x || y) << endl; // VEYA (or)
    cout << "!x: " << (!x) << endl;         // DE��L (not)

    // 5. Art�rma/Azaltma Operat�rleri
    int d = 5;
    cout << "\nArt�rma/Azaltma Operat�rleri:" << endl;
    cout << "d++: " << d++ << " (�nce yazd�r�r, sonra art�r�r)" << endl;
    cout << "++d: " << ++d << " (�nce art�r�r, sonra yazd�r�r)" << endl;
    cout << "d--: " << d-- << " (�nce yazd�r�r, sonra azalt�r)" << endl;
    cout << "--d: " << --d << " (�nce azalt�r, sonra yazd�r�r)" << endl;

    // 6. Bit D�zeyinde Operat�rler
    int e = 6, f = 3;
    cout << "\nBit D�zeyinde Operat�rler:" << endl;
    cout << "e & f: " << (e & f) << " (ve)" << endl;
    cout << "e | f: " << (e | f) << " (veya)" << endl;
    cout << "e ^ f: " << (e ^ f) << " (�zel veya)" << endl;
    cout << "~e: " << (~e) << " (de�il)" << endl;
    cout << "e << 1: " << (e << 1) << " (sola kayd�r)" << endl;
    cout << "e >> 1: " << (e >> 1) << " (sa�a kayd�r)" << endl;

    // 7. Ko�ul (Ternary) Operat�r�
    int g = 7, h = 9;
    cout << "\nKo�ul (Ternary) Operat�r�:" << endl;
    int max = (g > h) ? g : h;
    cout << "max = (g > h) ? g : h -> " << max << endl;

    // 8. �yelik ve Eri�im Operat�rleri (�rnek i�in struct kullanal�m)
    struct Nokta {
        int x, y;
    };
    Nokta n;
    n.x = 1;
    n.y = 2;
    cout << "\n�yelik ve Eri�im Operat�rleri:" << endl;
    cout << "n.x: " << n.x << ", n.y: " << n.y << endl;

    return 0; // Program ba�ar�yla sona erdi�inde 0 d�nd�r�r
}

