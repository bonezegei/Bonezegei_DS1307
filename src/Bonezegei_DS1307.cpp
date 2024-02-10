/*
  This Library is written for DS1307 RTC
  Author: Bonezegei (Jofel Batutay)
  Date: Jan 28 2024
  Updated: Feb 2024
*/


#include "Bonezegei_DS1307.h"

Bonezegei_DS1307::Bonezegei_DS1307() {}
Bonezegei_DS1307::Bonezegei_DS1307(uint8_t addr) {}

char Bonezegei_DS1307::begin() {
  return 0;
}
uint8_t Bonezegei_DS1307::convert(uint8_t data) {
  return 0;
}
uint8_t Bonezegei_DS1307::convertBCD(int data) {
  return 0;
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

