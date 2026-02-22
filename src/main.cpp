/**
* @file ldr_sensor.ino
 * @brief LDR (Light Dependent Resistor) analog reading example.
 *
 * @details
 * Reads analog value from LDR connected to A0.
 * Converts raw value (0–1023) to percentage (0–100%).
 * Prints both raw value and light percentage every 1 second.
 *
 * IMPORTANT:
 * - This is Arduino code.
 * - Remove main() if uploading to Arduino.
 * - Use Serial (capital S), not serial.
 */

#include <Arduino.h>

/// @brief Analog pin connected to LDR
#define ldrPin A0

/**
 * @brief Setup function
 * Initializes Serial communication and LDR pin.
 */
void setup() {
    Serial.begin(9600);
    pinMode(ldrPin, INPUT);
}

/**
 * @brief Main loop
 * Reads LDR value and prints light intensity.
 */
void loop() {

    /// Read analog value (0–1023)
    int ldrValue = analogRead(ldrPin);

    /// Convert to percentage (0–100)
    int lightPercent = map(ldrValue, 0, 1023, 0, 100);

    Serial.print("Raw Value: ");
    Serial.print(ldrValue);

    Serial.print(" | Light Intensity: ");
    Serial.print(lightPercent);
    Serial.println("%");

    delay(1000);
}