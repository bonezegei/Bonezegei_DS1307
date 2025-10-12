/*
  Get Time And Date
  Author: Bonezegei (Jofel Batutay)
  Date Created: Feb 2024
  Last Update: Oct 2025
*/

#include <Bonezegei_DS1307.h>

Bonezegei_DS1307 rtc(0x68);

void setup() {
  Serial.begin(115200);
  rtc.begin();
}

void loop() {

  if (rtc.getTime()) {
    //Serial.printf only does not work on atmega
    //Serial.printf("Time %02d:%02d:%02d ", rtc.getHour(), rtc.getMinute(), rtc.getSeconds());
    char time_data[32];
    sprintf(time_data,"Time %02d:%02d:%02d ", rtc.getHour(), rtc.getMinute(), rtc.getSeconds());
    Serial.print(time_data);


    if (rtc.getFormat() == 12) {  // returns 12 or 24 hour format

      if (rtc.getAMPM()) {  //return 0 = AM  1 =PM
        Serial.print("AM  ");
      } else {
        Serial.print("PM  ");
      }
    }

    //Serial.printf only does not work on atmega
    //Serial.printf("Date %02d-%02d-%d \n", rtc.getMonth(), rtc.getDate(), rtc.getYear());
    char date_data[32];
    sprintf(date_data,"Date %02d-%02d-%d \n", rtc.getMonth(), rtc.getDate(), rtc.getYear());
    Serial.print(date_data);
  }
  
  delay(1000);
}
