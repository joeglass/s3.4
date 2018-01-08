#include "mbed.h"

PwmOut speaker(D6);

int main()
{
    while (1) {
        float f;
        int k;

        for (k=1 ; k<=88 ; k++) {
            f = pow(2,(k-49.0)/12.0) * 440;
            speaker.period(1.0/f);
            speaker.write(0.5);
            wait(0.1);
        }
        speaker.write(0.0);

    }
}
