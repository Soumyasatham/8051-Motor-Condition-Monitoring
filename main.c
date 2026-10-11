
#include <REGX51.H>

/* Input pins: simulated warning signals */
sbit TEMP_WARNING = P1^0;
sbit VIB_WARNING  = P1^1;

/* Output pins: status indicators */
sbit GREEN_LED = P2^0;
sbit RED_LED   = P2^1;
sbit BUZZER    = P2^2;

void main(void)
{
    /* Initialize output indicators */
    GREEN_LED = 0;
    RED_LED   = 0;
    BUZZER    = 0;

    while (1)
    {
        /* Check both warning inputs */
        if ((TEMP_WARNING == 1) || (VIB_WARNING == 1))
        {
            /* Warning condition detected */
            GREEN_LED = 0;
            RED_LED   = 1;
            BUZZER    = 1;
        }
        else
        {
            /* No warning condition detected */
            GREEN_LED = 1;
            RED_LED   = 0;
            BUZZER    = 0;
        }
    }
}
