#include <iostream> // Giri�/��k�� i�lemleri i�in gerekli k�t�phane
using namespace std;

#if 0
int main() {
    // 1. if ko�ulu
    int sayi = 10;
    cout << "if ko�ulu:" << endl;
    if (sayi > 5) {
        cout << "sayi 5'ten b�y�k." << endl;
    }

    // 2. if - else ko�ulu
    cout << "\nif - else ko�ulu:" << endl;
    if (sayi % 2 == 0) {
        cout << "sayi �ift." << endl;
    }
    else {
        cout << "sayi tek." << endl;
    }

    // 3. if - else if - else ko�ulu
    cout << "\nif - else if - else ko�ulu:" << endl;
    if (sayi < 0) {
        cout << "sayi negatif." << endl;
    }
    else if (sayi == 0) {
        cout << "sayi s�f�r." << endl;
    }
    else {
        cout << "sayi pozitif." << endl;
    }

    // 4. Birden fazla ko�ulun birle�tirilmesi
    cout << "\nBirden fazla ko�ulun birle�tirilmesi:" << endl;
    int yas = 20;
    if (yas >= 18 && yas < 65) {
        cout << "Yeti�kin." << endl;
    }
    else if (yas >= 65) {
        cout << "Emekli." << endl;
    }
    else {
        cout << "�ocuk." << endl;
    }

    // 5. switch-case ko�ulu
    cout << "\nswitch-case ko�ulu:" << endl;
    int gun = 3;
    switch (gun) {
    case 1:
        cout << "Pazartesi" << endl;
        break;
    case 2:
        cout << "Sal�" << endl;
        break;
    case 3:
        cout << "�ar�amba" << endl;
        break;
    case 4:
        cout << "Per�embe" << endl;
        break;
    case 5:
        cout << "Cuma" << endl;
        break;
    default:
        cout << "Hafta sonu" << endl;
        break;
    }

    // 6. Ko�ul (ternary) operat�r�
    cout << "\nKo�ul (ternary) operat�r�:" << endl;
    int x = 7, y = 9;
    int buyuk = (x > y) ? x : y;
    cout << "En b�y�k: " << buyuk << endl;

    // 7. �� i�e ko�ullar (nested if)
    cout << "\n�� i�e ko�ullar:" << endl;
    int notDegeri = 85;
    if (notDegeri >= 50) {
        cout << "Ge�ti." << endl;
        if (notDegeri >= 90) {
            cout << "Pekiyi!" << endl;
        }
    }
    else {
        cout << "Kald�." << endl;
    }

    return 0; // Program ba�ar�yla sona erdi�inde 0 d�nd�r�r
}
#endif