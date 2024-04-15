#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <util/delay.h>
#include "IRlib/irreader.h"
#include "UARTlib/uart.h"

//#include <avr/io.h>
#include <avr/interrupt.h>
//#include "IRremote.h"

#define IR_RECEIVE_PIN 3
#define IR_RECEIVE_PORT B

volatile uint16_t irBuffer = 0;
volatile uint8_t irReceived = 0;


void Timer1_Init() {
    TCCR1B |= (1 << CS10); // No prescaling, start the timer
}

int main(void) {
    UART_init();
    Timer1_Init(); // Initialize Timer1

    while (1) {
        //UART_print(".");
        if (irReceived) {
            // UART_print("Received data: 0x%x\n", irBuffer);
            UART_print("Received data:");
            UART_print_uint16(irBuffer);
            UART_print("\n");
            irReceived = 0;
        }
    }
    return 0;
}
