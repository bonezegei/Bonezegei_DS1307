/*
  This Library is written for DS1307 RTC
  Author: Bonezegei (Jofel Batutay)
  Date: Jan 28 2024
*/

#include "Bonezegei_DS1307.h"

Bonezegei_DS1307::Bonezegei_DS1307(){}
Bonezegei_DS1307::Bonezegei_DS1307(uint8_t addr){}

char Bonezegei_DS1307::begin(){}
uint8_t Bonezegei_DS1307::convert(uint8_t data){}
uint8_t Bonezegei_DS1307::convertBCD(int data){}
char Bonezegei_DS1307::getTime(){}

uint8_t Bonezegei_DS1307::getSeconds(){}
uint8_t Bonezegei_DS1307::getMinute(){}
uint8_t Bonezegei_DS1307::getHour(){}
uint8_t Bonezegei_DS1307::getDay();      //return Day of Week
uint8_t Bonezegei_DS1307::getDate();     //return Date
uint8_t Bonezegei_DS1307::getMonth();    //return Month
uint8_t Bonezegei_DS1307::getYear();     //return Year
uint8_t Bonezegei_DS1307::getAMPM();     //return 0=AM  1=PM
uint8_t Bonezegei_DS1307::getFormat();   //return 12 or 24 hour format

void Bonezegei_DS1307::setFormat(uint8_t fmt);  // set time format 12 or 24
void Bonezegei_DS1307::setAMPM(uint8_t ampm);   // set AM or PM   PM=1 AM=0
void Bonezegei_DS1307::setTime(const char *t);  // set time Hour:Minute:Seconds
void Bonezegei_DS1307::setDate(const char *d);  // set Date Month:Date:Year
void Bonezegei_DS1307::setDay(uint8_t d);       // set Day of week
