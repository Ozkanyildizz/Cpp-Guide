#include <iostream> // Giri�/��k�� i�lemleri i�in gerekli k�t�phane
using namespace std;

int main() {
    // 1. for d�ng�s�
    cout << "for d�ng�s� ile 1'den 5'e kadar say�lar:" << endl;
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    cout << endl;

    // 2. while d�ng�s�
    cout << "\nwhile d�ng�s� ile 1'den 5'e kadar say�lar:" << endl;
    int j = 1;
    while (j <= 5) {
        cout << j << " ";
        j++;
    }
    cout << endl;

    // 3. do-while d�ng�s�
    cout << "\ndo-while d�ng�s� ile 1'den 5'e kadar say�lar:" << endl;
    int k = 1;
    do {
        cout << k << " ";
        k++;
    } while (k <= 5);
    cout << endl;

    // 4. break ifadesi ile d�ng�y� sonland�rma
    cout << "\nbreak ile d�ng�y� erken sonland�rma:" << endl;
    for (int i = 1; i <= 10; i++) {
        if (i == 6) {
            break; // i 6 oldu�unda d�ng�den ��k�l�r
        }
        cout << i << " ";
    }
    cout << endl;

    // 5. continue ifadesi ile d�ng�de bir ad�m� atlama
    cout << "\ncontinue ile baz� ad�mlar� atlama (sadece �ift say�lar):" << endl;
    for (int i = 1; i <= 10; i++) {
        if (i % 2 != 0) {
            continue; // i tek ise bu ad�m� atla
        }
        cout << i << " ";
    }
    cout << endl;

    // 6. �� i�e d�ng�ler (nested loops)
    cout << "\n�� i�e d�ng�ler ile �arp�m tablosu (1-3 aras�):" << endl;
    for (int x = 1; x <= 3; x++) {
        for (int y = 1; y <= 3; y++) {
            cout << x << " x " << y << " = " << x * y << "\t";
        }
        cout << endl;
    }

    // 7. Sonsuz d�ng� �rne�i (dikkatli kullan�lmal�)
    // for (;;) { /* Sonsuz d�ng� */ }
    // while (true) { /* Sonsuz d�ng� */ }

    return 0; // Program ba�ar�yla sona erdi�inde 0 d�nd�r�r
}

