/* PHOTONTECH */
/*
  Buton Uygulaması
  
  7.pin'e bağlı butona basıldığında, 4.pin'e bağlı LED açılır. 
  Eğer basılmamışsa Led kapatılır.
   
  Bu örnek kod PHOTONTECH tarafından kamuya sunulmuştur.

  https://github.com/PhotonTechnologyCodeSpace/Alpha-Board
 
*/

// Buton ve Led için pin tanımlamaları yapıldı.
#define BUTON 7          
#define LED 4

// Buton durumunu temsil edecek değişken tanımlandı.
int BUTON_DURUMU = 0;

void setup() {
  // Buton giriş olarak ayarlandı.
  pinMode(BUTON, INPUT);

  // Led çıkış olarak ayarlandı.
  pinMode(LED, OUTPUT);
}

void loop() {
  // Buton durumunu okunuyor. Butona basılıp basılmadığı buradan anlaşılır.
  BUTON_DURUMU = digitalRead(BUTON);

  // Buton durumunu kontrol ediliyor. Eğer butona basılmışsa;
  if (BUTON_DURUMU == HIGH) {
    // Led yakılır,
    digitalWrite(LED, HIGH);
  } else {
    // Basılmamışsa Led kapatılır.
    digitalWrite(LED, LOW);
  }
}
