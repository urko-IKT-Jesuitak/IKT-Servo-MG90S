/*
  IKT 2 - Jesuitak Indautxu
  Proiektua: Clockpunk Servo Sinplea
  Egilea: Urko
  * Helburua: MG90S zerbomotorea 0º, 90º eta 180º artean mugitzea.
*/

#include <Servo.h> // Zerboak kontrolatzeko liburutegia

Servo motor; // Zerbo objektu bat sortu

void setup() {
  motor.attach(9); // Zerboaren seinale-pina 9. pinera konektatu (PWM pina)
}

void loop() {
  motor.write(0); // 0 graduetara mugitu
  delay(1000); // 1 segundo itxaron

  motor.write(90); // 90 graduetara mugitu
  delay(1000); // 1 segundo itxaron

  motor.write(180); // 180 graduetara mugitu
  delay(1000); // 1 segundo itxaron
}
