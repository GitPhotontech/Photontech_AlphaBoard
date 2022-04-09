/* PHOTONTECH */
/*
  Led_Yakma
  
  Bir pin'e bir saniye boyunca 5V (HIGH) ve ardından bir saniye boyunca 0V (LOW) gerilim uygular.
  ALPHA-BOARD üzerindeki yerleşik biçimde bulunan ledlerin bağlı olduğu pinler (D3,D4,D5)
  bu örnek kod ile kontrol edilebilir.
   
  Bu örnek kod PHOTONTECH tarafından kamuya sunulmuştur.
  
  https://github.com/GitPhotontech/Photontech_AlphaBoard
*/

// Led için pin tanımlaması yaptık.
#define LED 4 

//void setup bloğunda konfigürasyon ayarlamaları yapılır.
void setup() {
  // LED değişkeninin bulunduğu 4.pin dijital çıkış olarak ayarlandı.
  pinMode(LED, OUTPUT);
}

// döngü işlevi sonsuza kadar tekrar tekrar çalışır.
void loop() {
  digitalWrite(LED, HIGH);     // LED'i çalıştırdı (HIGH=5V)
  delay(1000);                 // 1 saniye bekle
  digitalWrite(LED, LOW);      // LED'i kapattı (LOW=0V)
  delay(1000);                 // 1 saniye bekle
}
