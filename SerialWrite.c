char myChar[26]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int j;
int k;
void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
}

void loop() {
  // Loop untuk mencetak karakter A-Z
  for (j=0;j<=25;j+=1){
    Serial.println(myChar[j]);
    delay(1000);
  }
  Serial.println();// memberi NewLine setelah samapi pada karakter Z
  
// Loop untuk mencetak karakter Z-A
  for (k=25;k>=0;k--){
    Serial.println(myChar[k]);
    delay(1000);
  }
  Serial.println();// memberi NewLine setelah samapi pada karakter A

}
