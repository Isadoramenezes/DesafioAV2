#include <LiquidCrystal.h>

float pinSocorro = A5;
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int posicao=0;

void setup() {
  // put your setup code here, to run once:
  pinMode (pinSocorro,INPUT);
  Serial.begin(9600);
  lcd.begin(16, 2);
}

void loop() {
  
  //lcd.clear();
  float valor = analogRead(pinSocorro);
  delay(1500);
  Serial.println(valor*0.00488);
  lcd.println(valor*0.00488);
  lcd.print("-");

   /* for (int posicao = 0; posicao < 1000; posicao++)
  {
    lcd.scrollDisplayLeft();
    delay(1000);
  }
*/
  /*if (valor >= 0 && valor <=5) {
  Serial.println(valor);
  /*}*/
}
