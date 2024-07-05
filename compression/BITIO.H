#ifndef _BITIO_H
#define _BITIO_H
#include <stdio.h>

typedef struct bit_file {
FILE *file;
unsigned char mask;
int rack;
int pacifier_counter;
} BIT_FILE:

BIT_FILE *OpenInputBitFile( char *name );
BIT_FILE *OpenOutputBitFile ( char *name );