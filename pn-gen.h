
/*********************************************************************************************
 *                                                                                           *
 *  File: pn-gen.h                                                                           *
 *  Type: Pn-gen main program (pn-gen.h, pn-gen.c).                                          *
 *  Distribution: source/object code.                                                        *
 *  License: GNU General Public License ver3.                                                *
 *  Dependency: PrimeTest module (primetest.h, primetect.c, primetest.asm).                  *
 *  Desription: main program.                                                                *
 *                                                                                           *
 *********************************************************************************************
 *                                                                                           *
 *     This is pn-gen.h file (main program).                                                 *
 *     Copyleft, 2016, <info@7cats.biz>, cats7.                                              *
 *                                                                                           *
 *     This library is free software; you can redistribute it and/or modify it under the     *
 *  terms of the GNU General Public License as published by the Free Software Foundation;    *
 *  either version 3 of the License, or (at your option) any later version.                  *
 *                                                                                           *
 *     This program is distributed in the hope that it will be useful, but WITHOUT ANY       *
 *  WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A          *
 *  PARTICULAR PURPOSE.  See the GNU General Public License for more details.                *
 *                                                                                           *
 *********************************************************************************************/
#ifndef PN-GEN_H
#define PN-GEN_H

/*********************************************************************************************
 *                                *** Header Files ***                                       *
 *********************************************************************************************/

#include <errno.h>
#include <stddef.h>
#include <stdlib.h>
#include <limits.h>
#include <signal.h>
//#include <pthread.h>
#include <time.h>

/*********************************************************************************************
 *                              *** Global Variables ***                                     *
 *********************************************************************************************/

struct MYPRIME_FILE {
  int Handle;
  char *Data;
};

struct MYPRIME_STRUCT {
  struct PRIMETEST_NUMBERS Prime;
  struct MYPRIME_TIME Time;
  struct MYPRIME_FILE File;
};

/*********************************************************************************************
 *                                *** End of File ***                                        *
 *********************************************************************************************/
#endif // PN-GEN

