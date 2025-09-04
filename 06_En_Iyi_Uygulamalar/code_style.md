# Kod Stili ve Yazım Kuralları

Bu rehberin amacı, sadece çalışan kod yazmayı değil, aynı zamanda okunabilir ve sürdürülebilir kod yazmayı öğretmektir. Aşağıdaki kurallar, sektörde yaygın olarak kabul görmüş "en iyi uygulamalardır" ve kodunuzu daha profesyonel hale getirecektir.

---

### **1. İsimlendirme Kuralları**

Kodun en önemli okunuş unsurlarından biri doğru isimlendirmedir.

- **Değişkenler:** Değişken isimleri için `camelCase` kullanın. İsimler, ne amaçla kullanıldığını açıkça belirtmelidir.
  - ✅ **Doğru:** `ogrenciSayisi`, `ortalamaNot`
  - ❌ **Yanlış:** `o`, `s`, `not`
- **Fonksiyonlar:** Fonksiyon isimleri için de `camelCase` kullanın. Fonksiyonun ne yaptığını anlatan fiil tabanlı bir isim tercih edin.
  - ✅ **Doğru:** `hesaplaOrtalama()`, `kullaniciEkle()`
  - ❌ **Yanlış:** `ortalama()`, `ekle()`
- **Sınıflar:** Sınıf isimleri için `PascalCase` kullanın. Sınıfın neyi temsil ettiğini anlatan isimler tercih edin.
  - ✅ **Doğru:** `OgrenciBilgisi`, `KitapYonetimi`
  - ❌ **Yanlış:** `ogrenci_bilgisi`, `Kitap_Yonetimi`
- **Sabitler:** Değişmeyecek değerler (sabitler) için tamamı büyük harf ve kelimeler arasında alt çizgi (`_`) kullanın.
  - ✅ **Doğru:** `MAX_OGRENCI_SAYISI`, `PI_SAYISI`

### **2. Girintileme (Indentation) ve Boşluk Kullanımı**

Kodunuzun yapısını netleştirmek için girintileme çok önemlidir.

- Her girinti için **4 boşluk** kullanın.
- Operatörlerin çevresinde boşluk bırakın: `int x = a + b;`
- Fonksiyon ve döngü parantezlerinden sonra boşluk bırakın: `while (x > 0)`

### **3. Yorum Satırları**

Yorumlar, kodunuzun *neden* öyle yazıldığını açıklamak için kullanılır, kodun *ne yaptığını* açıklamak için değil.

- **Kötü Yorum:**
  ```cpp
  // x'i 10 artır
  x += 10;
- **İyi Yorum:**
  ```cpp
   // Performans optimizasyonu için veriyi direkt bellek adresinden al
  // (Çünkü bu işlem sıkça tekrarlanacak)
  // ...

### **4. Okunabilir Kod Yazmak**
Son olarak, kodunuzu kendinizden sonra okuyacak birisi (bu, gelecekteki siz de olabilirsiniz) için daha anlaşılır hale getirin.

Uzun ve karmaşık fonksiyonları daha küçük, basit ve tek amaçlı fonksiyonlara bölün.

Mantıksal grupları, boş satırlarla ayırın.

Anlamlı ve kısa değişken isimleri kullanın.


