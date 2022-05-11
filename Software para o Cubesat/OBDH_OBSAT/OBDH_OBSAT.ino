#include <RadioLib.h>
#include <PION_System.h>
System cubeSat;

SX1278 radio = new Module(26, 14, 13, RADIOLIB_NC);
AFSKClient audio(&radio, 5);


AX25Client ax25(&audio);

void setup() {
  Serial.begin(9600);
  delay(3000);
  cubeSat.init();
  Serial.print(F("[SX1278] Initializing ... "));
  int state = radio.beginFSK(433 , 1.2 , 6);
  if(state == RADIOLIB_ERR_NONE) {
    Serial.println(F("success!"));
  } else {
    Serial.print(F("failed, code "));
    Serial.println(state);
    while(true);
  }

  Serial.print(F("[AX.25] Initializing ... "));
  state = ax25.begin("YOUR_CALLSINGN");//Colocar o Indicativo do Radioamador Responsavel
  if(state == RADIOLIB_ERR_NONE) {
    Serial.println(F("success!"));
  } else {
    Serial.print(F("failed, code "));
    Serial.println(state);
    while(true);
  }
}

void loop() {

  uint8_t bateria = cubeSat.getBattery();
  float temperatura = cubeSat.getTemperature();
  float pressaoAtmosferica = cubeSat.getPressure();
  float aceleracaoX = cubeSat.getAccelerometer(0);
  float aceleracaoY = cubeSat.getAccelerometer(1);
  float aceleracaoZ = cubeSat.getAccelerometer(2);
  float velAngularX = cubeSat.getGyroscope(0);
  float velAngularY = cubeSat.getGyroscope(1);
  float velAngularZ = cubeSat.getGyroscope(2);
  String telemetria = String(bateria)+","+String(temperatura)+","+String(pressaoAtmosferica)+","+String(aceleracaoX)+","+String(aceleracaoY)+","+String(aceleracaoZ)+
  ","+String(velAngularX)+","+String(velAngularY)+","+String(velAngularZ)+"DADO DA SUA PAYLOAD";
  int str_len = telemetria.length()+1;
  char char_array[str_len];
  telemetria.toCharArray(char_array, str_len);
 
  Serial.print(F("[AX.25] Sending UI frame ... "));
  int state = ax25.transmit(char_array , "CALL_ESTAÇÃO");//Estação de Destivo
  if (state == RADIOLIB_ERR_NONE) {
    Serial.println(F("success!"));

  } else {
    Serial.print(F("failed, code "));
    Serial.println(state);
  }
  delay(5000);
}
