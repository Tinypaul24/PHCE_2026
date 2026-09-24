
#include <iostream>
//declared 3 variable because i don't have the pico yet :/
void pico_set_led(bool on) { std::cout << (on ? "ON  " : "off "); }
void sleep_ms(int ms)      { std::cout << ms << "ms\n"; }

const int UNIT = 200;

void dot()
{
    pico_set_led(true);    // LED on
    sleep_ms(UNIT);        // wait 1 unit (200 ms)
    pico_set_led(false);   // LED off
}
void dash()
{
    pico_set_led(true);
    sleep_ms(UNIT*3);
    pico_set_led(false);
}
const char* toMorse(char c)
{
    switch (c)
    {
        case 'h': return "....";
        case 'e': return ".";
        case 'l': return ".-..";
        case 'p': return ".--.";
        case '!': return "-.-.--";
        default:  return "";     //not known chars
    }
}
void blinkLetter(const char* pattern)
{
    for (int i = 0; pattern[i] != '\0'; i++) 
        {
            if(pattern[i] == '.')
            {
                dot();

            }
            else if(pattern[i] == '-')
            {
                dash();
            }
            if (pattern[i + 1] != '\0')   
            {
                sleep_ms(UNIT);           // gap between elements
            }
        }   
    sleep_ms(3 * UNIT);   // gap between letters
}
int main()
{
    const char* help = "help!";
    for(int i = 0; help[i] != '\0'; i++)
    {
        blinkLetter(toMorse(help[i]));
    }
    return 0;
}

