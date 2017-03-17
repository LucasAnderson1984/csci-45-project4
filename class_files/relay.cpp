#include "./../header_files/relay.h"

Relay::Relay(const int pin):relayPin(pin) {
  pinMode(relayPin, OUTPUT);
}

Relay::~Relay(void) { }

void Relay::on(void) {
  digitalWrite(relayPin, HIGH);
}

void Relay::off(void) {
  digitalWrite(relayPin, LOW);
}
