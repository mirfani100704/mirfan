const int tb = 2;
const int lpin = 13;
bool led = false;

void setup() {
 pinMode(tb,INPUT_PULLUP);
 pinMode(lpin,OUTPUT);

}

void loop() {
 if (digitalRead(tb)== LOW){
 delay(50);
 if (digitalRead(tb)== LOW){
 led = !led;
 digitalWrite(lpin,led? HIGH : LOW);
 while (digitalRead(tb)== LOW){}

}
 }
 }
