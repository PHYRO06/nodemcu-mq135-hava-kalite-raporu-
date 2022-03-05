#include "MQ135.h"
#include "CayenneDefines.h"
#include "CayenneWiFi.h"
#include "CayenneWiFiClient.h"
#define CAYANNE_DEBUG
#define CAYANNE_PRINT Serial
#define VIRTUAL_PIN 5
#define ANALOGPIN A0

char token[] = ""; // kodu buraya yazınız
char ssid[] = ""; // wifi adınız
char pwd[] = ""; // wifi şifreniz
MQ135 gasSensor = MQ135(ANALOGPIN);

void setup() {
  // kurulum kodunuzu bir kez çalıştırmak için buraya koyun:
  Serial.begin(115200);
  Cayenne.begin(token, ssid, pwd);
}

void loop() {
   // tekrar tekrar çalıştırmak için ana kodunuzu buraya koyun:
  Cayenne.run();
//  float rzero = gasSensor.getRZero(); // rzero değerini almak için bu, ppm değerini almak için bunun etiketini kaldırın
//  float ppm = gasSensor.getPPM(); // ppm değeri almak için bu, rzero değeri almak için bunun etiketini kaldırın
//  Serial.println(rzero); // bu, rzero değerini sürekli olarak görüntülemek için, ppm değerini almak için bunun etiketini kaldırın
//  Serial.println(ppm); // ppm değerini sürekli olarak görüntülemek için bu, rzero değerini almak için bunun etiketini kaldırın
//  Cayenne.virtualWrite(VIRTUAL_PIN,ppm); // rzero tanımladıktan sonra uncomment ve ppm hesaplamanızı alın
}
