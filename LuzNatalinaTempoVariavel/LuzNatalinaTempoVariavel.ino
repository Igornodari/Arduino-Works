#define pin_led_1 12
#define pin_led_2 13
#define pin_led_3 11
#define pin_led_4 10
#define pin_led_5 9

#define  LimiteMais  50
#define  LimiteMenos 1

int Tmenos = 10;
byte sentido = 1;

void setup() {
 Serial.begin(9600);
 pinMode(pin_led_1, OUTPUT);
 pinMode(pin_led_2, OUTPUT);
 pinMode(pin_led_3, OUTPUT);
 pinMode(pin_led_4, OUTPUT);
 pinMode(pin_led_5, OUTPUT);
 
}

void loop() {
Serial.println(Tmenos);
if(sentido==1){
  Tmenos++;
 }else{
  Tmenos--;
 }
 if(Tmenos>=LimiteMais +1){
  sentido=0;
  Tmenos=LimiteMais;
 }
 
 if(Tmenos<=LimiteMenos-1){
  sentido=1;
 Tmenos=LimiteMenos;
 }

  
  digitalWrite(pin_led_1,HIGH);
  delay(Tmenos);
  digitalWrite(pin_led_1,LOW);
  
  digitalWrite(pin_led_2,HIGH);
  delay(Tmenos);
  digitalWrite(pin_led_2,LOW);
  
  digitalWrite(pin_led_3,HIGH);
  delay(Tmenos);
  digitalWrite(pin_led_3,LOW);
  
  digitalWrite(pin_led_4,HIGH);
  delay(Tmenos);
  digitalWrite(pin_led_4,LOW);
  
  digitalWrite(pin_led_5,HIGH);
  delay(Tmenos);
  digitalWrite(pin_led_5,LOW);
}
