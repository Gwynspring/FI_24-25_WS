/* BitMaskenFunktionen.c
 * Erstellt am:			28.4.2021
 * Autor:				Peter Frauscher
 * Aufgabenstellung:	Bibliothek mit Funktionen f�r Maskenprogrammierung von Registern
 * Version:				1.0
 */
#include "BitMaskenFunktionen.h"


/* void BitSet(volatile uint8_t *target, unsigned int bit)
 *	Aufgabe:			Soll mittels Maske ein Bit in einem Register setzen
 *	R�ckgabewert:		
 *		void			keiner
 *	�bergabeparameter:	
 *		volatile uint8_t *target	volatile -> weil Zustand sich ohne Einfluss des Codes ver�ndern kann
 *										*target -> Zugriff �ber Adresse des Registers
 *		unsigned int bit				Bitnummer von 0 bis 7
 */
void BitSet(volatile uint8_t *target, unsigned int bit)
{
	*target |= (1<<bit);
}  

/* void BitClear(volatile uint8_t *target, unsigned int bit)
 *	Aufgabe:			Soll mittels Maske ein Bit in einem Register l�schen
 *	R�ckgabewert:		
 *		void			keiner
 *	�bergabeparameter:	
 *		volatile uint8_t *target	volatile -> weil Zustand sich ohne Einfluss des Codes ver�ndern kann
 *										*target -> Zugriff �ber Adresse des Registers
 *		unsigned int bit				Bitnummer von 0 bis 7
 */
void BitClear(volatile uint8_t *target, unsigned int bit)
{
	*target &= ~(1<<bit);
}

/* void BitToggle(volatile uint8_t *target, unsigned int bit)
 *	Aufgabe:			Soll mittels Maske ein Bit in einem Register invertieren
 *	R�ckgabewert:		
 *		void			keiner
 *	�bergabeparameter:	
 *		volatile uint8_t *target	volatile -> weil Zustand sich ohne Einfluss des Codes ver�ndern kann
 *										*target -> Zugriff �ber Adresse des Registers
 *		unsigned int bit				Bitnummer von 0 bis 7
 */
void BitToggle(volatile uint8_t *target, unsigned int bit)
{
	*target ^= (1<<bit);
}

/* void BitSet(volatile unsigned int *target, unsigned int bit)
 *	Aufgabe:			Soll mittels Maske ein Bit in einem Register abfragen
 *	R�ckgabewert:		
 *		char			Zustand des Bits. CLEARED (0) oder SET (1)
 *	�bergabeparameter:	
 *		volatile uint8_t *target	volatile -> weil Zustand sich ohne Einfluss des Codes ver�ndern kann
 *										*target -> Zugriff �ber Adresse des Registers
 *		unsigned int bit				Bitnummer von 0 bis 7
 */
char BitQuery(volatile uint8_t *target, unsigned int bit)
{
	if(*target&(1<<bit))
		return SET;
	else
		return CLEARED;
}


