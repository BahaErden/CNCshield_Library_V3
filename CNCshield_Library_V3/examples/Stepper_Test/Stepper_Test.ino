/*
  ================================================ CNC SHIELD KÜTÜPHANESİ / CNC SHIELD LIBRARY ================================================

  Bu kütüphane Arduino NANO CNC shield ve Arduino UNO
  CNC shield için hazırlanmıştır.
  -----------------------------------------------------
  This library is made for Arduino NANO and
  Arduino UNO CNC shield.
  -----------------------------------------------------

*/
#include <CNCshield_Library_V3.h>// kütüphane |library
CNCshield_Library_V3 cnc;// CNCshield nesnesine bir isim veriyoruz | We give the CNCshield object a name
void setup() {
  cnc.pinSetup();// Gerekli pinleri ayarlıyoruz. | We set the necessary pins.
  cnc.InvertPin(0,0,0,0);// Bu komut motor sürücü pinlerinin yerlerini değiştirir. | This command is invert the motor driver pins.
}

void loop() {
  //cnc.stepsON(); //Bu komut motorları aktif hale getirir.(motorlar normalde aktiftir.) | This command is turn on the motors.(motors are normaly active)
  //cnc.stepsOFF(); //Bu komut motorları Kapatır. | This command is turn off the motors.

  cnc.XdirRight();
  cnc.StepX(200, 100); //StepX(adım sayısı,hız((RPM)25-300); | StepX(steps num,speed((RPM)25-300));
  delay(1000);         // hareketler arası 1 sn bekleme | 1 second wait between movements

  cnc.YdirLeft();
  cnc.StepY(200, 100); //StepY(adım sayısı,hız((RPM)25-300); | StepY(steps num,speed((RPM)25-300));
  delay(1000);         // hareketler arası 1 sn bekleme | 1 second wait between movements

  cnc.ZdirRight();
  cnc.StepZ(200, 100); //StepZ(adım sayısı,hız((RPM)25-300); | StepZ(steps num,speed((RPM)25-300));
  delay(1000);         // hareketler arası 1 sn bekleme | 1 second wait between movements

  cnc.AdirRight();
  cnc.StepA(200, 100); //StepZ(adım sayısı,hız((RPM)25-300); | StepZ(steps num,speed((RPM)25-300));
  delay(1000);         // hareketler arası 1 sn bekleme | 1 second wait between movements

}
