# Exercise Session 1

Work through the exercises in order. Write your answers directly in this file, in the
`_Answer:_` blocks under each question, and commit it together with any `.cpp` files
you are asked to attach, to your own copy of the repository.

---

## Exercise 1: Verify your setup

Confirm that the [`SETUP.md`](../SETUP.md)
instructions have been followed and your Pico development environment is in place.

**Anything that did not work, and how you solved it:**

> _Answer:_
>

---

## Exercise 2: Build and run the blinker

Create, build and flash the example **Blink** project to confirm that your development
environment works from source code all the way to running firmware on the Pico W.

### Instructions

1. Open **Visual Studio Code**.
2. Open the **Raspberry Pi Pico** extension from the sidebar.
3. Create a new project and select the **Blink** example.
   - Select **Pico W** as the target board.
   - Choose a folder for the project.
   - Create/open the project in VS Code.
4. Add `stdio_init_all();` as the first step inside main()
5. Add `printf("Test");` inside while loop in main()
6. Build the project.
   - Use the **Compile / Build** command from the Raspberry Pi Pico extension.
   - Watch the terminal output and make sure the build finishes without errors.
7. Connect the Pico W to your computer using USB.
8. Flash the program to the Pico W using the **Run / Flash** command in the
   Raspberry Pi Pico extension or by manually uploading the .uf2 file.
9. Check the board. The LED should now blink continuously.
10. Connect the **Debug Probe** (hardware) and open the **Serial Monitor**, then look for the output.

### Checklist
- [ ] Blink project created and opened
- [ ] Project builds without errors
- [ ] Program flashed to the Pico W
- [ ] The LED is blinking
- [ ] Serial Monitor output is visible

**If the build or flash failed, what was the error and what fixed it?**

> _Answer:_
>

---

## Exercise 3: Explore PicoBricks

For each hardware module on the PicoBricks board, answer the following
questions:

1. What is the name of this module?
2. What does this module do?
3. Is it an input or output?

### Module 1

| # | Question | Answer |
|---|----------|--------|
| 1 | Name | |
| 2 | Purpose | |
| 3 | Input or output | |

_Add more blocks as you write._

Light Sensor (LDR)	Measures ambient light; resistance changes with brightness, read by the Pico as an analog value (ADC)	Input
2	Potentiometer	Knob that lets the user set a value (e.g., volume, speed); the Pico reads its position as an analog value	Input
3	Buzzer	Produces beeps and tones controlled by the Pico, for audio feedback like alarms	Output
4	Relay	Electrically controlled switch; lets the Pico's small signal switch a separate, higher-power circuit (e.g., a lamp) on/off	Output
5	OLED Screen	Small display showing text and graphics, e.g., sensor values (communicates over I2C)	Output
6	RGB LED	Single LED that can show any colour by mixing red, green and blue	Output
7	Button & LED	Push button the user presses, plus a red LED the Pico can turn on/off	Both: button = input, LED = output
8	Temperature & Humidity Sensor (DHT11)	Measures air temperature and humidity and sends the readings to the Pico	Input
9	Motor Driver	Controls DC motors (on/off, speed, direction), since motors need more current than a Pico pin can supply	Output
10	Infrared & Bluetooth	IR receiver picks up signals from a remote control; the Bluetooth module exchanges data wirelessly with e.g. a phone	Both: IR = input, Bluetooth = two-way
## Exercise 4: Morse Code

Make a program that blinks `help!` as Morse
code using the LED abstractions in the blink project (`pico_set_led`). How you represent
and translate Morse code is up to you.

Rules:

- dot = 1 time unit (200ms)
- dash = 3 time units
- gap between dot/dash elements within one letter = 1 unit
- gap between letters = 3 units
- gap between words = 7 units

Use the Morse-code reference below and the C++ book/documentation, Google as needed.

Reference: <https://en.wikipedia.org/wiki/Morse_code>

Simply copy the modified .c file(s) containing your solution to the exercise folder.

**Attached file(s):**

> _Filename:_
>
