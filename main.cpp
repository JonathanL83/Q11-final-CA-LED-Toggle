#include "mbed.h"

// Define the button and LEDs
DigitalIn button(PC_13); // Button connected to PC_13

DigitalOut led1(LED1);   // LED1
DigitalOut led2(LED2);   // LED2

// Define the flag
bool flag = 0;

int main() {
    // Initialize LED states
    led1 = 1; // LED1 is ON initially
    led2 = 0; // LED2 is OFF initially
    
    while (true) {
        if (button == 0) { // Button pressed (assuming active low)
            if (flag == 0) {
                flag = 1;
            }
            if(flag == 1) {
                led1 = !led1; // Toggle LED1
                led2 = !led2; // Toggle LED2
            }
        } else {
            flag = 0; // Reset flag when button is released
        }
    }
}
