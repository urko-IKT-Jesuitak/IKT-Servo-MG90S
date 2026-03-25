# ⚙️ Servo Kontrola: SG90S & Arduino | Jesuitak Indautxu

![WhatsApp Image 2026-03-25 at 17 30 05](https://github.com/user-attachments/assets/4c0fed31-d869-495b-86bf-274241bbed74)

<p align="center">
  </p>

Proiektu honek **SG90S mikroszerboa**. Engranajeen mekanika biltzen ditugu, gure katu mekanikoak gainbegiratuta!

## 🧭 Proiektuaren Atalak
1.  [**Zertarako Dira Erabilgarriak Zerboak?**](TEORIA_ETA_AZALPENA.md#1-zertarako-dira-erabilgarriak-zerboak)
2.  [**Historia Laburra**](TEORIA_ETA_AZALPENA.md#2-historia-laburra)
3.  [**Zerboa vs DC Motorra: Aldaketa Nagusiak**](TEORIA_ETA_AZALPENA.md#3-zerboa-vs-dc-motorra-aldaketa-nagusiak)
4.  [**Prekauzioak eta Praxi Onak**](TEORIA_ETA_AZALPENA.md#4-prekauzioak-eta-praxi-onak)
5.  [**Hardware Konexioa**](Konexioa.md)
6.  [**Arduino Kodearen Azalpena**](servo_simple.ino)

## 🔩 Beharrezko Materiala
* **Arduino Mega / Uno** ⚙️
* **SG90S Zerbomotorea** (Metalikoagoa, Clockpunk estilora hobeto moldatzen da)
* **Potenziometro bat (10kΩ)** (Kontrolerako)
* **Cables macho-macho eta breadboard** 🔌
* **5V kanpoko elikadura** (Nahi baduzu, baina SG90S BAKAR baterako Arduino nahikoa da)

## 🔌 Hardware Konexioa
MG90S-ak hiru kable ditu:
* **Gorria** -> **5V**
* **Marróia/Beltza** -> **GND**
* **Laranja/Horia** -> **Signal** (Arduinoko pin PWM batera, adibidez 9. pina)

Hemen ikus dezakezue konexioen eskema ASCII formatuan: [Konexioa.md](Konexioa.md).

---

<p align="right">
  <i>2025/2026 Ikasturtea - Indautxuko Ingranajeak martxan!</i>
</p>
