#include "./../header_files/relay.h"

Relay::Relay(const int pin):RELAYPIN(pin) {
  pinMode(RELAYPIN, OUTPUT);
}

Relay::~Relay(void) { }

void Relay::on(void) {
  digitalWrite(RELAYPIN, LOW);
}

void Relay::off(void) {
  digitalWrite(RELAYPIN, HIGH);
}
