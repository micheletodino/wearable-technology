#include <SoftwareSerial.h>

int x=0;
int button[6]={2,3,4,5,6,7};
int txPin = 8;
int rxPin = 9;
SoftwareSerial bluetooth(rxPin, txPin);

char felice []="#Felice";
char nervoso[]="#Nervoso";
char annoiato []="#Annoiato";
char triste[]="#Triste";
char si[]="#Si";
char  no[]="#No";


 
void setup() {
  for(x=0;x<6;x++)
  pinMode(button[x],INPUT);
  Serial.begin(9600);
  bluetooth.begin(9600);
}

void loop() {
 if(digitalRead(button[0])==LOW){
  Serial.println("si");
  bluetooth.println( String (si));
  delay(500);

 }
 if(digitalRead(button[1])==LOW){
  Serial.println("no");
   bluetooth.println(String (no));
  delay(500);
 }
 if(digitalRead(button[2])==LOW){
  Serial.println("felice");
   bluetooth.println( String (felice));
  delay(500);
 }
 if(digitalRead(button[3])==LOW){
  Serial.println("arrabbiato");
   bluetooth.println( String(nervoso));
  delay(500);
 }
 if(digitalRead(button[4])==LOW){
  Serial.println("annoiato");
   bluetooth.println( String(annoiato));
  delay(500);
 
}
if(digitalRead(button[5])==LOW){
  Serial.println("triste");
   bluetooth.println(String (triste));
  delay(500);

}
}
