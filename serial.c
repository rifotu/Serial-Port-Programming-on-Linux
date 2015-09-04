	/*====================================================================================================*/
        /* Serial Port Programming in C                                                                       */
	/*----------------------------------------------------------------------------------------------------*/
        /* Program opens the serial port and closes it                                                        */
	/*----------------------------------------------------------------------------------------------------*/
	/* Compiler/IDE  : gcc 4.6.3                                                                          */
	/* Library       :                                                                                    */
	/* Commands      : gcc -o serial serial.c                                                             */
	/* OS            : Linux(x86) (Linux Mint 13 Maya/Ubuntu)(Linux Kernel 3.x.x)                         */                              
	/* Programmer    : Rahul.S                                                                            */
	/* Date	         : 21-December-2014                                                                   */
	/*====================================================================================================*/

	/*====================================================================================================*/
	/* www.xanthium.in										      */
	/* Copyright (C) 2014 Rahul.S                                                                         */
	/*====================================================================================================*/

	/*====================================================================================================*/
	/* Running the executable                                                                             */
	/* ---------------------------------------------------------------------------------------------------*/ 
	/* 1) Compile the  serial.c  file using gcc on the terminal (without quotes)                          */
        /*                                                                                                    */
	/*	" gcc -o serial serial.c "                                                                    */
	/*                                                                                                    */
        /* 2) Linux will not allow you to access the serial port from user space,you have to be root.So use   */
        /*    "sudo" command to execute the compiled binary as super user.                                    */
        /*                                                                                                    */
        /*       "sudo ./serial"                                                                              */
	/*                                                                                                    */
	/*====================================================================================================*/

	/*====================================================================================================*/
	/* Sellecting the Serial port Number on Linux                                                         */
	/* ---------------------------------------------------------------------------------------------------*/ 
	/* /dev/ttyUSBx - when using USB to Serial Converter, where x can be 0,1,2...etc                      */
	/* /dev/ttySx   - for PC hardware based Serial ports, where x can be 0,1,2...etc                      */
        /*====================================================================================================*/

	#include <stdio.h>
	#include <fcntl.h>   /* File Control Definitions           */
	#include <termios.h> /* POSIX Terminal Control Definitions */
	#include <unistd.h>  /* UNIX Standard Definitions 	   */ 
	#include <errno.h>   /* ERROR Number Definitions           */
	void main()
	{
		int fd; /*File Descriptor*/

		fd = open("/dev/ttyUSB0",O_RDWR | O_NOCTTY);    /* ttyUSB0 is the FT232 based USB2SERIAL Converter   */
			   					/* O_RDWR   - Read/Write access to serial port       */
								/* O_NOCTTY - No terminal will control the process   */
								/* Open in blocking mode,read will wait              */

		if(fd == -1)					/* Error Checking */
          	   printf("\n  Error! in Opening ttyUSB0\n\n");
       		else
         	   printf("\n\n  ttyUSB0 Opened Successfully\n\n");

	        close(fd); /* Close the serial port */

	}
