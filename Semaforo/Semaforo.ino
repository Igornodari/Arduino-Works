

#define pin_led_4 10


void setup() {

 pinMode(pin_led_4, OUTPUT);
}

void loop() {
 for(int i =0; i<255;i++){
  analogWrite(pin_led_4,i);
  delay(20);
 }
 delay(300);
}
