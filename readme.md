AVR ATmega168 Driving KS0108 Graphic LCD Display
================================================

This is a proof of concept which uses the Universal KS0108 Library by Radosław Kwiecień

Library can be found here: http://en.radzio.dxp.pl/ks0108/

Pinout:
------------------------------------------------

12864J-1 Display must have +5V for VDD but
the data and control pins work with 3.3V

LCD contrast circuit needs voltage divider (trimpot)
which has V0 on center pole, with VEE and GND on outer pins

LCD
1	GND
2	+5V
3	V0 Connects to Center of Trimpot with 1 Side to GND
4	PC0
5	PC1
6	PC2
7-14	PD0-PD7
15	PC3
16	PC4
17	+5V
18	Other side of Trimpot
19	+5V
20	GND

Remarks:
-------------------------------------
I haven't fired this code up in nearly a decade. I chuckled to
find a sappy message to my (then girfriend, now) wife. The subdirectory
has some tests with larger fonts which I assume are in some working
order but I have not tested recently.
