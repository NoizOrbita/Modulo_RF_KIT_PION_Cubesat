# Modulo_RF_KIT_PION_Cubesat
Módulo TT&C desenvolvido pela **NoizOrbita** para complementar o Kit Educacional da Pion 


**Instruções para Desenvolvimento:


Disponibilizamos **dois** arquivos de fabricação do tipo Gerber:

1-Gerber_PCB_NoizOrbita_TT&C_Face_simples

2-Gerber_PCB_NoizOrbita_TT&C_DUPLA_FACE

**Com esses arquivos será possivel fabricar as placas no padrão do Cubesat da PION**

Caso queiram também realizar alguma modificação na placa do TT&C também estamos disponibilizando o arquivo para modificação: 

**Lembrando que para desenvolver este módulo utilizamos um software online e gratuito chamado EasyEda, o arquivo está no formato deste software.**
  
  1-PCB_PCB_NoizOrbita_TT&C_DUPLA_FACE.json
  
  2-PCB_PCB_NoizOrbita_TT&C_Face_Simples.json


**Materiais Utilizados no módulo TT&C:

  1- Módulo GPS NEO-6M
  
  1- SX1278 LoRa 433MHz Ra-02
  
  2- Barra de Pinos 2x10 Fêmea Empilhável 
  
 **Conexões**
 
 **Ra-02**
 
 GND -> GND
 
 3.3V -> 3.3V
 
 MISO -> MISO
 
 MOSI -> MOSI
 
 SCK -> SCK
 
 NSS -> 26
 
 DIO0 -> 14
 
 RST -> 13
 
 DIO2 -> 5
 
 **GPS-MÓDULO**
 
 GND -> GND
 
 VCC -> 3.3V
 
 TX -> 27
 
 RX -> 36
  
**Software:**
  
  Estamos disponibilizando também um software para que possam realizar testes básicos do subsistema.

**Montagem da Estação Terrena para Receber os dados do cubesat:**

  Para realizar a recepção e decodificação dos dados enviados pelo Cubesat será necessária a utilização de um dongle SDR(Rádio definido por Software) e também a instalação de alguns softwares, o passo a passo para realizar a instalação dos sodtwares estão disponiveis em um PDF(Instalação SDR# e AFSK1200 Decoder).

**Atenção: para que o envio de telemetrias funcione corretamente será necessário realizar a modificação da bateria padrão do KIT, os testes foram realizados usando uma bateria de 3.7V de 8000mAh** 
  
  
  

