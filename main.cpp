#include <Arduino.h>
#include <Servo.h>

// Deklarasi objek servo
Servo muter;

// Pin yang digunakan untuk servo dan LED pada rangkaian
const int pinServo = D4; 
const int pinLEDHijau = D5; 
const int pinLEDMerah = D6; 

void setup() {
  // Menghubungkan servo ke pin yang ditentukan
  muter.attach(pinServo);

  // Mengatur mode pin LED menjadi OUTPUT
  pinMode(pinLEDHijau, OUTPUT);
  pinMode(pinLEDMerah, OUTPUT);
}

void loop() {
  // Servo bergerak ke 90 derajat
  muter.write(90);
  // LED hijau menyala
  digitalWrite(pinLEDHijau, HIGH);
  // Menunggu selama 5 detik
  delay(5000);
  // Mematikan LED hijau
  digitalWrite(pinLEDHijau, LOW);

  // Servo bergerak ke 180 derajat
  muter.write(180);
  // LED merah menyala
  digitalWrite(pinLEDMerah, HIGH);
  // Menunggu selama 5 detik
  delay(5000);
  // Mematikan LED merah
  digitalWrite(pinLEDMerah, LOW);

  // Servo kembali ke posisi awal (0 derajat)
  muter.write(0);
  // Menunggu sebentar sebelum loop dimulai lagi
  delay(1000);
}
