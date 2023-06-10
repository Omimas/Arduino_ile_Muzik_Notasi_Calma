int buzzerPin = 8; // Buzzer'ın bağlı olduğu pin (D8)

void setup() {
  pinMode(buzzerPin, OUTPUT); // Buzzer pini çıkış olarak ayarlanır
}

void loop() {
  // Nota: Do
  playTone(261, 500); // 261 Hz frekansında 0.5 saniye çal

  delay(500); // 0.5 saniye bekle

  // Nota: Re
  playTone(293, 500); // 293 Hz frekansında 0.5 saniye çal

  delay(500); // 0.5 saniye bekle

  // Nota: Mi
  playTone(329, 500); // 329 Hz frekansında 0.5 saniye çal

  delay(500); // 0.5 saniye bekle
}

void playTone(int frequency, int duration) {
  tone(buzzerPin, frequency, duration); // Arduino'nun tone() fonksiyonu ile sesi çal
  delay(duration); // Nota süresi kadar bekle
  noTone(buzzerPin); // Sesi durdur
}
