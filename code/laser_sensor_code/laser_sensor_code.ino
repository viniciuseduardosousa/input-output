#define DETECT 2
#define ACTION 8


void setup() {
  Serial.begin(9600);
  pinMode(DETECT, INPUT);
  pinMode(ACTION, OUTPUT);

}

void loop() {

  int detected = digitalRead(DETECT);

 
  if( detected == HIGH)
  {
    digitalWrite(ACTION,HIGH);
    Serial.println("Detected!");

  }else{
    digitalWrite(ACTION,LOW); 
    Serial.println("No laser");

  }
  
}
