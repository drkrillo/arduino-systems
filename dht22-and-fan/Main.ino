#include <Arduino.h>
#include <DHT.h>

#include "Cooler.h"
#include "LinearStrategy.h"

#define COOLERPIN 2
#define DHTPIN 3    // Pin de datos del sensor DHT22
#define DHTTYPE DHT22   // Tipo de sensor DHT (DHT22)
DHT dht(DHTPIN, DHTTYPE);

Cooler cooler(COOLERPIN, new LinearStrategy());

void setup() {
    Serial.begin(9600);
    dht.begin(); // Inicializa el sensor DHT
}

void loop() {
    // Lectura de los datos del sensor
    float temperature = dht.readTemperature();
    float humidity = dht.readHumidity();

    // Imprime los datos del sensor en la consola
    Serial.print("Temperatura: ");
    Serial.print(temperature);
    Serial.print(" °C\t");
    Serial.print("Humedad: ");
    Serial.print(humidity);
    Serial.println(" %");
    Serial.print("");
  
    cooler.adjustSpeed(humidity);

    delay(10000);
}
