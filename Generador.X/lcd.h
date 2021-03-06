/*
 * File:   lcd.h
 
 */

#include <xc.h>
#include "config.h"



#define RS            PORTDbits.RD1          //Esto se puedee
#define TRIS_RS     TRISDbits.TRISD1        //modificar para utilizar
#define RW            PORTDbits.RD2          //otros pines del PIC
#define TRIS_RW     TRISDbits.TRISD2         //para los bits de control del LCD
#define E             PORTDbits.RD3
#define TRIS_E      TRISDbits.TRISD3

#define D4            PORTDbits.RD4          //Esto se puede modificar si se quiere
#define TRIS_D4     TRISDbits.TRISD4         //que los pines para el envio de datos
#define D5            PORTDbits.RD5          //u ordenes sean a trav�s de otro puerto
#define TRIS_D5     TRISDbits.TRISD5         //pero es este caso siempre tendr� que
#define D6            PORTDbits.RD6          //ser el nibble alto del puerto que se utilice.
#define TRIS_D6     TRISDbits.TRISD6
#define D7            PORTDbits.RD7
#define TRIS_D7     TRISDbits.TRISD7

#define LCD_TRIS TRISD
#define LCD PORTD

void lcd_inicializar();
void lcd_pulso();
void lcd_orden(unsigned int);
void lcd_caracter(unsigned int );
void lcd_mensaje(char*);
//void lcd_limpiar();
//void lcd_origen();
//void lcd_ubicarXY(char,char);
 

void lcd_iniciar();
void lcd_comando(unsigned char);
void lcd_dato(unsigned char);
unsigned int lcd_Busy();
void lcd_texto(unsigned char M[32]);
void lcd_ubicarXY(char,char);
void lcd_limpiar();
void lcd_origen();
void lcd_movimiento_derecha();
void lcd_movimiento_izquierda();
void move_cursor(unsigned int position);
//@Brief: This function is used to move the cursor wherever the user points to.

