#include "mbed.h"

DigitalOut led1(PA_5);
DigitalOut led2(LED2);
DigitalIn buttn(PC_13);

int main()
{
    printf("This is the bare metal blinky example running on Mbed OS %d.%d.%d. \r\n\n", MBED_MAJOR_VERSION, MBED_MINOR_VERSION, MBED_PATCH_VERSION);

    while (true){
        if(buttn == 1){
            led1 = 1;
            led2 = 1;
        }else{
            led1 = 0;
            led2 = 0;
        }
        

    }
}
