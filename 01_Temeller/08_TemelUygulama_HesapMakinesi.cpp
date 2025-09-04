#include <iostream> // Giri�/��k�� i�lemleri i�in gerekli k�t�phane
using namespace std;

int main() {
    int islem;      // Kullan�c�n�n se�ti�i i�lem t�r�n� tutar
    int sayi1, sayi2; // ��lem yap�lacak iki say�y� tutar

    // Sonsuz d�ng�: Kullan�c� ��k�� yapana kadar devam eder
    while (true) {
        // Men� ve i�lem se�enekleri ekrana yazd�r�l�r
        cout << "******  Hesap makinesi ************" << endl
            << "0) Cikis\n1) Toplama\n2) Cikarma\n3) Carpma\n4) Bolme\n"
            << "Lutfen yapmak istediginiz islemi seciniz: ";
        cin >> islem; // Kullan�c�dan i�lem se�imi al�n�r

        // Kullan�c� ��k�� se�erse d�ng� sonlan�r
        if (islem == 0) {
            cout << "Programdan cikiliyor.\n";
            break;
        }

        // Ge�erli bir i�lem se�ildiyse iki say� al�n�r
        if (islem >= 1 && islem <= 4) {
            cout << "�slem yapmak istediginiz iki sayiyi giriniz: ";
            cin >> sayi1 >> sayi2;
        }

        // Se�ilen i�leme g�re uygun matematiksel i�lem yap�l�r
        switch (islem) {
        case 1: // Toplama i�lemi
            cout << "Toplamlari: " << sayi1 + sayi2 << endl;
            break;
        case 2: // ��karma i�lemi
            cout << "Farklari: " << sayi1 - sayi2 << endl;
            break;
        case 3: // �arpma i�lemi
            cout << "Carpimlari: " << sayi1 * sayi2 << endl;
            break;
        case 4: // B�lme i�lemi
            if (sayi2 != 0) // S�f�ra b�lme kontrol�
                cout << "Bolum: " << static_cast<double>(sayi1) / sayi2 << endl; // B�lme i�lemi: Sonucu ondal�kl� g�stermek i�in sayi1 double'a d�n��t�r�l�r
            else
                cout << "Hata: Sifira bolme yapilamaz!" << endl;
            break;
        default: // Ge�ersiz i�lem se�ilirse uyar� verilir
            cout << "Gecersiz islem sectiniz!" << endl;
        }
    }
    return 0; // Program ba�ar�yla sona erdi�inde 0 d�nd�r�r
}
