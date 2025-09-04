#include <iostream> // Giriþ/çýkýþ iþlemleri için gerekli kütüphane
using namespace std;

int main() {
    int islem;      // Kullanýcýnýn seçtiði iþlem türünü tutar
    int sayi1, sayi2; // Ýþlem yapýlacak iki sayýyý tutar

    // Sonsuz döngü: Kullanýcý çýkýþ yapana kadar devam eder
    while (true) {
        // Menü ve iþlem seçenekleri ekrana yazdýrýlýr
        cout << "******  Hesap makinesi ************" << endl
            << "0) Cikis\n1) Toplama\n2) Cikarma\n3) Carpma\n4) Bolme\n"
            << "Lutfen yapmak istediginiz islemi seciniz: ";
        cin >> islem; // Kullanýcýdan iþlem seçimi alýnýr

        // Kullanýcý çýkýþ seçerse döngü sonlanýr
        if (islem == 0) {
            cout << "Programdan cikiliyor.\n";
            break;
        }

        // Geçerli bir iþlem seçildiyse iki sayý alýnýr
        if (islem >= 1 && islem <= 4) {
            cout << "Ýslem yapmak istediginiz iki sayiyi giriniz: ";
            cin >> sayi1 >> sayi2;
        }

        // Seçilen iþleme göre uygun matematiksel iþlem yapýlýr
        switch (islem) {
        case 1: // Toplama iþlemi
            cout << "Toplamlari: " << sayi1 + sayi2 << endl;
            break;
        case 2: // Çýkarma iþlemi
            cout << "Farklari: " << sayi1 - sayi2 << endl;
            break;
        case 3: // Çarpma iþlemi
            cout << "Carpimlari: " << sayi1 * sayi2 << endl;
            break;
        case 4: // Bölme iþlemi
            if (sayi2 != 0) // Sýfýra bölme kontrolü
                cout << "Bolum: " << static_cast<double>(sayi1) / sayi2 << endl; // Bölme iþlemi: Sonucu ondalýklý göstermek için sayi1 double'a dönüþtürülür
            else
                cout << "Hata: Sifira bolme yapilamaz!" << endl;
            break;
        default: // Geçersiz iþlem seçilirse uyarý verilir
            cout << "Gecersiz islem sectiniz!" << endl;
        }
    }
    return 0; // Program baþarýyla sona erdiðinde 0 döndürür
}
