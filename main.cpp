#include <SPI.h>
#include <SD.h>

#define SD_CS_PIN 5

void setup() {
  Serial.begin(115200);
  delay(1000);

   Serial.println("===== ESP32 STARTED =====");
   Serial.println("Serial communication is working!");

  Serial.println("Initializing SD card...");

  if (!SD.begin(SD_CS_PIN)) {
    Serial.println("SD card initialization FAILED. Check wiring/CS pin.");
    return;
  }
  Serial.println("SD card initialized successfully.");

  File dataFile = SD.open("/test.txt", FILE_WRITE);
  if (dataFile) {
    dataFile.println("Hello from ESP32 via SPI!");
    dataFile.close();
    Serial.println("Data written to test.txt");
  } else {
    Serial.println("Error opening test.txt for writing.");
  }

  dataFile = SD.open("/test.txt");
  if (dataFile) {
    Serial.println("Reading back from test.txt:");
    while (dataFile.available()) {
      Serial.write(dataFile.read());
    }
    dataFile.close();
  } else {
    Serial.println("Error opening test.txt for reading.");
  }
}

void loop() {}
