# ⚙️ Teoria Teknikoa eta Historia: Clockpunk Servo-ak
<img width="1024" height="572" alt="image" src="https://github.com/user-attachments/assets/19784e03-41ff-4cc6-98e8-3ae242fe0039" />

## 1. Zertarako Dira Erabilgarriak Zerboak?

Zerbomotoreak, edo zerboak, mugimendu mekaniko **kontrolatua** eta **zehatza** behar duten aplikazioetan erabiltzen dira. Clockpunk estetikan, engranaje konplexuen mugimendua kontrolatzeko aproposak dira. Adibidez:

* **Robotika**: Robot-besoen engranajeak mugitzeko.
* **Automatizazioa**: Ateak edo leihoak zehaztasunez irekitzeko.
* **Mekanika Konplexua**: Clockpunk ordu-orratzak edo bestelako mekanismoak mugitzeko.

## 2. Historia Laburra

Zerbomotoreen jatorria XIX. mendearen amaieran dago, baina **bigarren mundu gerran** lortu zuten benetako hedapena, hegazkinen eta itsasontzien kontrol-sistemetan. Hasieran, hidraulikoak edo pneumatikoak ziren, baina **mikroelektronikaren** iraultzarekin (XX. mendearen erdialdean), gaur egun ezagutzen ditugun zerbo elektriko txiki eta merkeak agertu ziren.

## 3. Zerboa vs DC Motorra: Aldaketa Nagusiak

Ikasleek askotan nahasten dituzte bi motor mota hauek. Hona hemen desberdintasun nagusiak:

| Ezaugarria | DC Motorra | Zerbomotorea (MG90S, adibidez) |
| :--- | :--- | :--- |
| **Mugimendu-Mota** | Etengabeko biraketa (360°) | Mugimendu mugatua (normalean 180° edo 360° rotazio jarraituarekin) |
| **Kontrola** | Tentsioaren bidez abiadura kontrolatzen da | PWM seinalearen bidez posizioa kontrolatzen da |
| **Zehaztasuna** | Gutxi (posizioa jakiteko kodetzaile bat behar da) | Handia (posizioa jakiteko potenziometro bat du barnean) |
| **Indarra (Torque)** | Abiaduraren arabera | Handia abiadura txikietan |
| **Konplexutasuna** | Sinplea | Konplexuagoa (kontagailua eta engranajeak barne) |

Hau da, **kodea da bi motor mota hauen arteko kontrola bereizten duena**. DC motor batekin ez dugu SoftwareSerial edo PWM zehatzik behar, baina zerbo batekin bai.

## 4. Prekauzioak eta Praxi Onak

Ikasleek MG90S-a erre edo kaltetzea ekiditeko, ezinbestekoa da prekauzio hauek hartzea:

1. **Kanpoko Elikadura**: MG90S-a metalikoa da eta SG90 baino korronte gehiago behar du. Arduino baterako nahikoa da, baina **bost edo gehiago** erabiltzen badituzu, erabili **5V-ko kanpoko elikadura** bat eta lotu GND komunera. Arduino kaltetzea ekidin daiteke horrela.
2. **GND Komuna**: Kanpoko elikadura erabiltzen baduzu, **GND**-ra lotzea ezinbestekoa da. GND komuna ez bada, zerboak ez du seinalea ondo ulertuko.
3. **Mugimendu Azkarrak**: Ez mugitu zerboaren engranajeak eskuz, batez ere azkar. Horrek barneko potenziometroa edo engranajeak kaltetu ditzake.
4. **Zertarako dugu Prekauzio Hau?** Softwarearen bidez, mugimenduak leunak eta kontrolatuak izatea bermatu behar dugu, ez bat-batekoak. `delay(10);` bezalako itxarote txikiak erabili mugimenduak kontrolatzeko.
