#include "mbed.h"
#include "USBSerial.h"

//Virtual serial port over USB
USBSerial serial;

FileHandle *mbed::mbed_override_console(int) {
  return &serial;
}

int main(void)
{
    while (1) {
        printf("I am a virtual serial port\r\n");
        ThisThread::sleep_for(1000);
    }
}
