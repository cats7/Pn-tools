
/*********************************************************************************************
 *                                                                                           *
 *  File: pn-gen.c                                                                           *
 *  Type: main program.                                                                      *
 *  Distribution: source/object code.                                                        *
 *  License: GNU General Public License ver3.                                                *
 *  Dependency: PrimeTest modulle (primetest.h, primetest.c primetest.asm)                   *
 *  Desription: Prime Numbers Generator.                                                     *
 *                                                                                           *
 *********************************************************************************************
 *                                                                                           *
 *     This is prime.c file (main program).                                                  *
 *     Copyleft, 2016, <info@7cats.biz>, cats7.                                              *
 *                                                                                           *
 *     This program is free software; you can redistribute it and/or modify it under the     *
 *  terms of the GNU General Public License as published by the Free Software Foundation;    *
 *  either version 3 of the License, or (at your option) any later version.                  *
 *                                                                                           *
 *     This program is distributed in the hope that it will be useful, but WITHOUT ANY       *
 *  WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A          *
 *  PARTICULAR PURPOSE.  See the GNU General Public License for more details.                *
 *                                                                                           *
 *********************************************************************************************/

/*********************************************************************************************
 *                                *** Header Files ***                                       *
 *********************************************************************************************/

#include "pn-gen.h"

/*********************************************************************************************
 *                              *** Global Variables ***                                     *
 *********************************************************************************************/

char *MemBuf;

/*********************************************************************************************
 *                             *** Function Prototypes ***                                   *
 *********************************************************************************************/


/*********************************************************************************************
 *                                *** main Function ***                                      *
 *********************************************************************************************/

int main (int argc, char *argv[]){

  if(!(MemBuf=(char*)malloc(4094)))
  {  };
  
  
  return(EXIT_SUCCESS); }

/*********************************************************************************************
 *                                *** End of File ***                                        *
 *********************************************************************************************/

