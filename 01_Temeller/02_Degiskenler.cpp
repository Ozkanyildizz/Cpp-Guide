#include <iostream> // Giri�/��k�� i�lemleri i�in gerekli k�t�phane
using namespace std;

#if 0
int main() {
	// Ayn� t�rdeki de�i�kenler yan yana tan�mlanabilir
	int a, b;
	//Ayr� ayr� da tan�mlanabilir
	int result;

	// De�i�kenlere de�er atan�yor
	a = 5;    // 'a' de�i�kenine 5 de�eri atan�yor
	b = 4;    // 'b' de�i�kenine 4 de�eri atan�yor
	a = a + 1; // 'a' de�i�keninin de�eri 1 art�r�l�yor (a art�k 6)
	result = a + b; // 'result' de�i�kenine 'a' ve 'b'nin toplam� atan�yor

	// Sonu� ekrana yazd�r�l�yor
	cout << result; // Ekrana 10 yazd�r�l�r
	return 0; // Program ba�ar�yla sona erdi�inde 0 d�nd�r�r
}
#endif