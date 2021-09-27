int pinLed = 8;
String pesan="Ketik 1/0 untuk = ";
String ledOn="LED Berhasl Dinyalakan";
String ledOff="LED Berhasil dinonaktifkan";
void setup() {
  Serial.begin(9600);
  pinMode(pinLed,OUTPUT);

}

void loop() {
  Serial.println(pesan);
  
  while(Serial.available()==0){
  }
  int angka= Serial.parseInt();
  delay(100);
  Serial.print("Angka yang Anda masukkan =");
  Serial.println(angka);
  if (angka==1){
    digitalWrite(pinLed,HIGH);
    }
   else if (angka==0){
      digitalWrite(pinLed,LOW);
  }
}
