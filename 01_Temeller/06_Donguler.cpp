#include <iostream> // Giriþ/çýkýþ iþlemleri için gerekli kütüphane
using namespace std;

int main() {
    // 1. for döngüsü
    cout << "for döngüsü ile 1'den 5'e kadar sayýlar:" << endl;
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    cout << endl;

    // 2. while döngüsü
    cout << "\nwhile döngüsü ile 1'den 5'e kadar sayýlar:" << endl;
    int j = 1;
    while (j <= 5) {
        cout << j << " ";
        j++;
    }
    cout << endl;

    // 3. do-while döngüsü
    cout << "\ndo-while döngüsü ile 1'den 5'e kadar sayýlar:" << endl;
    int k = 1;
    do {
        cout << k << " ";
        k++;
    } while (k <= 5);
    cout << endl;

    // 4. break ifadesi ile döngüyü sonlandýrma
    cout << "\nbreak ile döngüyü erken sonlandýrma:" << endl;
    for (int i = 1; i <= 10; i++) {
        if (i == 6) {
            break; // i 6 olduðunda döngüden çýkýlýr
        }
        cout << i << " ";
    }
    cout << endl;

    // 5. continue ifadesi ile döngüde bir adýmý atlama
    cout << "\ncontinue ile bazý adýmlarý atlama (sadece çift sayýlar):" << endl;
    for (int i = 1; i <= 10; i++) {
        if (i % 2 != 0) {
            continue; // i tek ise bu adýmý atla
        }
        cout << i << " ";
    }
    cout << endl;

    // 6. Ýç içe döngüler (nested loops)
    cout << "\nÝç içe döngüler ile çarpým tablosu (1-3 arasý):" << endl;
    for (int x = 1; x <= 3; x++) {
        for (int y = 1; y <= 3; y++) {
            cout << x << " x " << y << " = " << x * y << "\t";
        }
        cout << endl;
    }

    // 7. Sonsuz döngü örneði (dikkatli kullanýlmalý)
    // for (;;) { /* Sonsuz döngü */ }
    // while (true) { /* Sonsuz döngü */ }

    return 0; // Program baþarýyla sona erdiðinde 0 döndürür
}

