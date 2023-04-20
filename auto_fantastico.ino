
/*
 Fundacion Kinal
 Centro Educativo Tecnico Laboral KINAL
 Electronica
 Grado:5to A
 Nombre:Roberto Monterroso
 Carne :2019507
 */

int entrada=2;
#define i
void setup() {
for(entrada;entrada<=11;entrada++){
  {
    pinMode(entrada, OUTPUT);
  }
}
}
void loop() {
  entrada=2;
  for(i;entrada<=11;entrada++){
    digitalWrite(entrada, HIGH);
    delay(500);
    digitalWrite(entrada, LOW);
    }
   entrada=11;
  for(i;entrada>=2;entrada--){
    digitalWrite(entrada, HIGH);
    delay(500);
    digitalWrite(entrada, LOW);
}
}
