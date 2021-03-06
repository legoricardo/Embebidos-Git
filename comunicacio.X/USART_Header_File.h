
/* PIC18F4550 USART Header File 
 * http://www.electronicwings.com
 */

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef USART_HEADER_FILE_H
#define	USART_HEADER_FILE_H
#define _XTAL_FREQ 80000000
#include <pic18f4550.h>

 

void USART_Init(long);
void USART_TransmitChar(char);
void USART_SendString(const char *);
void MSdelay(unsigned int val);
char USART_ReceiveChar();
char recieveUSART();
 void USART_ReceiveString(char *Input, unsigned char length);

//void USART_ReceiveString(char *Input, unsigned char length);


  


#define F_CPU 8000000/64//AQUI SE CAMBIA EL 8M POR EL TAMA�O DEL CRISTAL DESEADO
//#define Baud_value(baud_rate) (((float)(F_CPU)/(float)baud_rate)-1)
#define Baud_value (((float)(F_CPU)/(float)baud_rate)-1)

#endif	/* USART_HEADER_FILE_H */

