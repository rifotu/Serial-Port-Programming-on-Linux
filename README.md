## Programming the Serial port on a Linux System using C and termios API

This repo contains code for transmitting and receiving characters (Strings) serially between an x86 Linux PC and a Microcontroller (MSP430G2553 on Launchpad).

<img src="http://s25.postimg.org/b6qc8sbz3/Serial_Port_Write.jpg" alt ="Screenshot of the serial port programming code running on Linux">

Full code explanation along with screenshots can be <a href = http://xanthium.in/Serial-Port-Programming-on-Linux> found here on the xanthium website </a>

The Microcontroller and PC are connected in null modem configuration using  3 signals (TX,RX and Ground).

The code uses termios API's to intialize the PC serial port and transmit a character to the microcontroller board.
- The PC side code is written in **C** using **termios API** 
- and can be compiled using **GCC** .

The Code will Work With Standard **RS232 Serial ports** or any **USB to Serial Converter**.


The Microcontroller side code is written in **Embedded C** and can be Compiled using **Code Composer Studio for MSP430**.

The Hardware used is MSP430G2553 on Launch pad development board.