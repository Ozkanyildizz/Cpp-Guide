#include <iostream> // Giriþ/çýkýþ iþlemleri için gerekli kütüphane
using namespace std;

#if 0
int main() {
	// Ayný türdeki deðiþkenler yan yana tanýmlanabilir
	int a, b;
	//Ayrý ayrý da tanýmlanabilir
	int result;

	// Deðiþkenlere deðer atanýyor
	a = 5;    // 'a' deðiþkenine 5 deðeri atanýyor
	b = 4;    // 'b' deðiþkenine 4 deðeri atanýyor
	a = a + 1; // 'a' deðiþkeninin deðeri 1 artýrýlýyor (a artýk 6)
	result = a + b; // 'result' deðiþkenine 'a' ve 'b'nin toplamý atanýyor

	// Sonuç ekrana yazdýrýlýyor
	cout << result; // Ekrana 10 yazdýrýlýr
	return 0; // Program baþarýyla sona erdiðinde 0 döndürür
}
#endif