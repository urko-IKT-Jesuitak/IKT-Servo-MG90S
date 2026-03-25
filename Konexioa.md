## 🛠️ 5. Konexio Eskema Teknikoa (SG90S)

Gogoratu kableen koloreen kodea:

* 🟫 **Marroia/Beltza:** GND (Lurra)
* 🟥 **Gorria:** 5V (VCC)
* 🟧 **Laranja:** Seinalea (PWM pina - Adibidez 9. pina)

```text
       CLOCKPUNK WIRING
    _______________________
   |   ARDUINO MEGA/UNO    |
   |                       |         SG90S SERVO
   |          5V  (VCC)  --|-------> (Kable Gorria)
   |          GND (LURRA)--|-------> (Kable Marroia)
   |          PIN 9 (PWM)--|-------> (Kable Laranja)
   |_______________________|
