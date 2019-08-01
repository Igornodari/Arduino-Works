#define pin_led_1 13
#define pin_led_2 12
#define pin_led_3 11
#define pin_led_4 10
#define pin_led_5 9

int inter1=100;
int inter2=3000;

int intervalo1;
int intervalo2;

unsigned int ultimo1=0;
unsigned int ultimo2=0;
unsigned int atual=0;

int grupo_1 = 1;// 1 ou 2
int grupo_2 = 1; // 1 ou 2 ou 3

void setup() {
 Serial.begin(9600);
 pinMode(pin_led_1, OUTPUT);
 pinMode(pin_led_2, OUTPUT);
 pinMode(pin_led_3, OUTPUT);
 pinMode(pin_led_4, OUTPUT);
 pinMode(pin_led_5, OUTPUT);
}


void loop() {

  atual = millis();
  
  intervalo1 =atual - ultimo1 ;
  intervalo2 =atual - ultimo2 ;

  if(intervalo1>=inter1){

    grupo_1 = Muda_var_2(grupo_1); 
    acende_grupo_2(grupo_1);
    ultimo1=atual;
  }
  if (intervalo2>=inter2){

    grupo_2 = Muda_var_3(grupo_2);
    acende_grupo_3(grupo_2);
    ultimo2=atual;
  }
}

int Muda_var_2(int g){
  if(g == 1){
    g = 2;
  } else {
    g = 1;
  }
  return g;
}

int Muda_var_3(int g){
  if(g == 1){
    g = 2;
  } else if(g == 2) {
    g = 3;
  } else {
    g = 1;
  }
  return g;
}


void acende_grupo_2(int v_g){
  switch (v_g) {
  case 1:
    digitalWrite(pin_led_1,HIGH);
    digitalWrite(pin_led_2,LOW);
    break;
  case 2:
    digitalWrite(pin_led_2,HIGH);
    digitalWrite(pin_led_1,LOW);
    break;
  }
}


void acende_grupo_3(int v_g){
  switch (v_g) {
  case 1:
    digitalWrite(pin_led_4,HIGH);
    digitalWrite(pin_led_5,LOW);
    digitalWrite(pin_led_3,LOW);
    break;
  case 2:
    digitalWrite(pin_led_5,HIGH);
    digitalWrite(pin_led_4,LOW);
    digitalWrite(pin_led_3,LOW);
    break;
  case 3:
    digitalWrite(pin_led_3,HIGH);
    digitalWrite(pin_led_5,LOW);
    digitalWrite(pin_led_4,LOW);
    break;
  }
}
