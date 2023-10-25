/*
 * main.c
 *
 *  Created on: Oct 17, 2023
 *      Author: Hazim Emad
 */
#include "../Library/STD_types.h"
#include "../Library/Bit_Math.h"
#include "../MCAL/DIO/Header/DIO_Interface.h"
int main(){
	DIO_voidInit();
	DIO_voidSetPortValue(DIO_PortA,0xFF);
	while(1){
		DIO_voidSetPinValue(DIO_PortB, DIO_PIN0,!DIO_u8GetPinValue(DIO_PortA,DIO_PIN0));
		DIO_voidSetPinValue(DIO_PortB, DIO_PIN1,!DIO_u8GetPinValue(DIO_PortA,DIO_PIN1));
		DIO_voidSetPinValue(DIO_PortB, DIO_PIN2,!DIO_u8GetPinValue(DIO_PortA,DIO_PIN2));
		DIO_voidSetPinValue(DIO_PortB, DIO_PIN3,!DIO_u8GetPinValue(DIO_PortA,DIO_PIN3));
	}
	return 0;
}
