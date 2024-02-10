/*
  This Library is written for DS1307 RTC
  Author: Bonezegei (Jofel Batutay)
  Date: Jan 28 2024
  Updated: Feb 2024
*/

#include "Bonezegei_DS3231.h"

Bonezegei_DS3231::Bonezegei_DS3231() {
}

Bonezegei_DS3231::Bonezegei_DS3231(uint8_t addr) {
  _addr = addr;
}

char Bonezegei_DS3231::begin() {
  if (Wire.begin()) {
    return 1;
  } else {
    return 0;
  }
}

uint8_t Bonezegei_DS3231::convert(uint8_t data) {
  uint8_t result = data & 0x0f;
  result += ((data & 0xf0) >> 4) * 10;
  return result;
}

uint8_t Bonezegei_DS3231::convertBCD(int data) {
  int tmp1;
  if (data > 10) {
    tmp1 = (int)(data / 10);
  } else {
    tmp1 = 0;
  }
  int tmp2 = data - (tmp1 * 10);

  uint8_t result = (tmp1 << 4) | tmp2;

  return result;
}

char Bonezegei_DS1307::getTime() {
  return 0;
}

uint8_t Bonezegei_DS1307::getSeconds() {
  return 0;
}
uint8_t Bonezegei_DS1307::getMinute() {
  return 0;
}
uint8_t Bonezegei_DS1307::getHour() {
  return 0;
}
uint8_t Bonezegei_DS1307::getDay() {
  return 0;
}
uint8_t Bonezegei_DS1307::getDate() {
  return 0;
}
uint8_t Bonezegei_DS1307::getMonth() {
  return 0;
}
uint8_t Bonezegei_DS1307::getYear() {
  return 0;
}
uint8_t Bonezegei_DS1307::getAMPM() {
  return 0;
}
uint8_t Bonezegei_DS1307::getFormat() {
  return 0;
}

void Bonezegei_DS1307::setFormat(uint8_t fmt) {
}

void Bonezegei_DS1307::setAMPM(uint8_t ampm) {
}
void Bonezegei_DS1307::setTime(const char *t) {
}
void Bonezegei_DS1307::setDate(const char *d) {
}
void Bonezegei_DS1307::setDay(uint8_t d) {
}

