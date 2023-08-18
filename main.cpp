#include "mbed.h"
#include <iostream>

#define BLINKING_RATE     50ms

UnbufferedSerial serial(USBTX, USBRX, 9600);

// Definición de pines para los LEDs
PwmOut redLED(LED1);
PwmOut greenLED(LED2);
PwmOut blueLED(LED3);

// Función para configurar el color del LED RGB
void setRGBColor(float red, float green, float blue) {
    redLED = red;
    greenLED = green;
    blueLED = blue;
}

int main() {
    while(true) {
        // Obtener valores de color en hexadecimal del usuario
        char input[7];  // Por ejemplo: "FF00FF"
        printf("Introduce el valor hexadecimal de color (RRGGBB): ");
        scanf("%s", input);

        // Convertir el valor hexadecimal en valores RGB
        unsigned int colorValue;
        sscanf(input, "%x", &colorValue);

        float red = (1-(float)((colorValue >> 16) & 0xFF) / 255.0f);
        float green = (1-(float)((colorValue >> 8) & 0xFF) / 255.0f);
        float blue = (1-(float)(colorValue & 0xFF) / 255.0f);

        // Configurar el color del LED RGB
        setRGBColor(red, green, blue);

    }
}

