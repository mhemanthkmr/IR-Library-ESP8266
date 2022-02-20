

#include <Arduino.h>
#include <IRremoteESP8266.h>
#include <IRsend.h>

const uint16_t kIrLed = 4; 
// ESP8266 GPIO pin to use. Recommended: 4 (D2).
unsigned int rawdata[73] = {4588, 4618,  588, 568,  588, 1726,  588, 1726,  588, 1726,  588, 1726,  588, 1726,  588, 568,  588, 568,  590, 566,  588, 1664,  650, 1726,  588, 1726,  588, 1726,  588, 1726,  588, 568,  588, 568,  588, 570,  586, 568,  588, 1726,  588, 1726,  588, 570,  588, 568,  588, 568,  588, 568,  588, 1726,  588, 1726,  588, 568,  588, 570,  586, 1726,  588, 1726,  588, 1726,  588, 1726,  588, 40210,  4674, 4616,  590, 1724,  590};
IRsend irsend(kIrLed);  // Set the GPIO to be used to sending the message.
uint16_t rawData[229] = {3098, 3056,  3096, 4518,  570, 1664,  570, 526,  622, 1608,  570, 524,  570, 526,  624, 1608,  570, 1662,  570, 524,  622, 1610,  570, 524,  570, 1662,  570, 524,  570, 1662,  570, 1664,  570, 526,  570, 526,  570, 524,  570, 524,  570, 526,  624, 470,  570, 524,  570, 526,  570, 526,  570, 526,  570, 524,  572, 512,  570, 520,  586, 526,  570, 524,  570, 526,  570, 526,  570, 526,  570, 524,  570, 526,  570, 526,  570, 524,  570, 524,  570, 526,  622, 472,  570, 524,  570, 1662,  570, 526,  570, 1662,  570, 526,  570, 526,  570, 524,  570, 526,  570, 524,  570, 524,  570, 524,  570, 524,  570, 524,  570, 524,  570, 526,  570, 524,  570, 526,  570, 526,  570, 524,  570, 1662,  570, 524,  570, 526,  570, 524,  570, 526,  570, 524,  570, 526,  570, 526,  570, 524,  570, 524,  570, 526,  570, 526,  570, 524,  570, 524,  572, 524,  570, 526,  570, 526,  570, 524,  570, 526,  570, 524,  570, 524,  570, 524,  570, 526,  570, 526,  572, 524,  570, 526,  570, 526,  570, 526,  570, 526,  570, 526,  570, 526,  570, 524,  572, 524,  570, 524,  570, 524,  570, 526,  570, 524,  570, 524,  570, 526,  570, 524,  570, 524,  570, 524,  570, 524,  570, 1664,  570, 526,  570, 1664,  570, 524,  572, 524,  570, 524,  570, 1662,  570, 524,  570, 1664,  570, 1652,  570, 1674,  570};

void setup() {
  irsend.begin();
  Serial.begin(9600);
}

void loop() {
  irsend.sendSAMSUNG(0x7C7C30CF,32);
}
