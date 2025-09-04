# Modern C++'a Giriş

C++ dili, C++11 standardıyla başlayarak büyük bir değişim ve gelişim sürecine girdi. Bu bölüm, kodunuzu daha güvenli, daha kısa ve daha etkili hale getiren modern özellikleri tanıtır.

---

### **1. Akıllı İşaretçiler (Smart Pointers)**

Eski C++'ta `new` ve `delete` ile bellek yönetimi hatalara çok açıktı. Akıllı işaretçiler, bellek yönetimini otomatik hale getirir.

- **`std::unique_ptr`:** Sadece bir işaretçinin sahip olabileceği bellek bloğu için kullanılır. Bellek, işaretçi kapsam dışına çıktığında otomatik olarak serbest bırakılır.
  - **Eski Yöntem:**
    ```cpp
    int* p = new int(10);
    // ...
    delete p; // Unutulursa bellek sızıntısı olur
    ```
  - **Modern Yöntem:**
    ```cpp
    std::unique_ptr<int> p = std::make_unique<int>(10);
    // Bellek otomatik olarak serbest bırakılır
    ```

### **2. `auto` Anahtar Kelimesi**

Değişkenin tipini derleyicinin otomatik olarak belirlemesini sağlar, bu da kod yazımını hızlandırır ve okumayı kolaylaştırır.

- **Eski Yöntem:**
  ```cpp
  std::vector<std::string>::iterator it = myVector.begin();

- **Modern Yöntem:**
   ```cpp
  auto it = myVector.begin();

### **3. Range-based for Döngüleri**
Koleksiyonlar (diziler, vektörler vb.) üzerinde gezinmek için daha basit ve hatasız bir yol sunar.
- **Eski Yöntem:**
  ```cpp
  for (int i = 0; i < myVector.size(); ++i) {
    // ...
  }

- **Modern Yöntem:**
   ```cpp
  for (const auto& item : myVector) {
    // ...
  }

### **4. nullptr**
C++11'den itibaren NULL yerine nullptr kullanılır. Bu, işaretçilerle ilgili belirsizlikleri ortadan kaldırır.
- **Eski Yöntem:**
  ```cpp
  int* p = NULL; // NULL, aslında 0'a denktir

- **Modern Yöntem:**
   ```cpp
   int* p = nullptr; // Sadece bir işaretçiyi temsil eder