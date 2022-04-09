/* PHOTONTECH */
/*
  Alpha_Board_Demo
  
  Board üzerindeki pinler birer saniye arayla yakılıp söndürülür.
  İki adet butondan 7.pine bağlı olan buzzer'ı sustururken, 6.pin'e bağlı olanı buzzer'ı öttürür.

   
  Bu örnek kod PHOTONTECH tarafından kamuya sunulmuştur.
  
  https://github.com/PhotonTechnologyCodeSpace/Alpha-Board
  
*/

// Ledler için pin tanımlamaları yapıldı.
#define LED1 3 
#define LED2 4
#define LED3 5

// Butonlar için pin tanımlamaları yapıldı.
#define BUTON_AC 6
#define BUTON_KAPAT 7 

// Butonların durumunu temsil edecek değişkenler tanımlandı.
int BUTON_AC_DURUMU    = 0;
int BUTON_KAPAT_DURUMU = 0;

// Buzzer için pin tanımlaması yapıldı.
#define BUZZER 11

// Bekleme süresi için bekle adında milisaniye cinsinden değişken tanımlandı.
int bekle = 1000;

// Buzzer şiddeti için değişken tanımlandı.
int siddet = 10;

void setup() {
  // Ledleri'i çıkış olarak ayarlandı.
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);

  // Buzzer'ı çıkış olarak ayarlandı.
  pinMode(BUZZER, OUTPUT);
  
  // Butonları giriş olarak ayarlandı.
  pinMode(BUTON_AC, INPUT);
  pinMode(BUTON_KAPAT, INPUT);
}

void loop() {
  //Buzzer fonksiyonu çağırılıyor.  
  buzzer(); 
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED3, HIGH);
  analogWrite(BUZZER, siddet);
  delay(bekle);
  buzzer();
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
  digitalWrite(LED3, LOW);
  analogWrite(BUZZER, 0);
  delay(bekle);
  buzzer();
}

//Buzzer adında modülün çalışması için bir fonksiyon tanımlandı.
void buzzer(){
  BUTON_AC_DURUMU    = digitalRead(BUTON_AC);
  BUTON_KAPAT_DURUMU = digitalRead(BUTON_KAPAT);

  if (BUTON_AC_DURUMU == HIGH) {
    siddet=10;
  } else if (BUTON_KAPAT_DURUMU == HIGH){
    siddet=0;
  }
}
