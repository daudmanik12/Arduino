//Serial Write #1
int led =5;
String msg1="Pilih satu huruf A|B|X";
String A="A";
String a="a";
String B="B";
String b="b";
String X="X";
String x="x";
void setup() {
  Serial.begin(9600);
  pinMode(led,OUTPUT);

}

void loop() {
  Serial.println(msg1);
  while (Serial.available()==0){
    
  }
  String kondisi = Serial.readString();
  if (kondisi== A ||kondisi==a){
    Serial.println("LED berkedip dengan delay 1s");
    while(Serial.available()==0){
      digitalWrite(led,HIGH);
      delay(1000);
      digitalWrite(led,LOW);
      delay(1000);
    }
    }
  if (kondisi==B || kondisi==b){
    Serial.println("LED berkedip degnan delay 200ms");
    while(Serial.available()==0){
      digitalWrite(led,HIGH);
      delay(200);
      digitalWrite(led,LOW);
      delay(200);
    }
  }
  if (kondisi==X || kondisi==x){
    Serial.println("LED diNonaktifkan");
    digitalWrite(led,LOW);
  }
}
