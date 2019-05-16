
float pinSocorro = A5;

void setup() {
  // put your setup code here, to run once:
  pinMode (pinSocorro,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  float valor = analogRead(pinSocorro);
  delay(1500);
  Serial.println(valor*0.00488);
  /*if (valor >= 0 && valor <=5) {
  Serial.println(valor);
  /*}*/
}
