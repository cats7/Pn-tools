
/*********************************************************************************************
 *                                                                                           *
 *  File: pn-gen.c                                                                           *
 *  Type: main program.                                                                      *
 *  Distribution: source/object code.                                                        *
 *  License: GNU General Public License ver3.                                                *
 *  Dependency: pn-calc modulle (pn-calc.h, pn-calc.c, pn-calc-ext.h, pn-calc-ext.asm),      *
 *  Desription: Prime Numbers Generator.                                                     *
 *                                                                                           *
 *********************************************************************************************
 *                                                                                           *
 *     This is pn-gen.c file (main program).                                                 *
 *     Copyleft, 2016, <feedback@7cats.biz>, cats7.                                          *
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

struct MYPRIME_STRUCT *AppData;

/*********************************************************************************************
 *                             *** Function Prototypes ***                                   *
 *********************************************************************************************/


/*********************************************************************************************
 *                                *** main Function ***                                      *
 *********************************************************************************************/

int main (int argc, char *argv[]){

  /* Memory allocation */
  if(!(AppData=(struct MYPRIME_STRUCT*)malloc(sizeof(struct MYPRIME_STRUCT))))
  { perror("Fatal! Can`t allocate memory! Exit program.\0"); exit(EXIT_FAILURE); };
  memset(AppData,0,sizeof(struct MYPRIME_STRUCT));


  // <== I know that the sect "of the BAD-goto" will be against me, but folks...
  //     this transition is simplified as the boots!

  return(EXIT_SUCCESS); }

/*********************************************************************************************
 *                                *** End of File ***                                        *
 *********************************************************************************************/

