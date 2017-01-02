
/*********************************************************************************************
 *                                                                                           *
 *  File: pn-common.h                                                                        *
 *  Type: Pn-common main program (pn-gen.h, pn-gen.c).                                       *
 *  Distribution: source/object code.                                                        *
 *  License: GNU General Public License ver3.                                                *
 *  Dependency: PrimeTest module (primetest.h, primetect.c, primetest.asm).                  *
 *  Desription: main program.                                                                *
 *                                                                                           *
 *********************************************************************************************
 *                                                                                           *
 *     This is pn-common.h file (main program).                                              *
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
#ifndef PN-COMMON_H
#define PN-COMMON_H

/*********************************************************************************************
 *                                *** Header Files ***                                       *
 *********************************************************************************************/

#include <errno.h>
#include <stddef.h>
#include <stdlib.h>
#include <limits.h>
#include <string.h>
#include <stdio.h>
#include <signal.h>
#include <time.h>

/*********************************************************************************************
 *                              *** Global Variables ***                                     *
 *********************************************************************************************/

#define  PNCOMMON_STRING_BUFFER_SIZE                 4096
#define  PNCOMMON_FILE_BUFFER_SIZE                  32768

struct MYPRIME_TIME {
  time_t GMT;
  time_t Local;
  struct tm Broken;
  char String[PNCOMMON_STRING_BUFFER_SIZE];
};

struct MYPRIME_FILE {
  FILE *Handle;
  size_t nBytes;                                     // New size;
  struct stat fStat;                                 // File attributes;
  char Name[PNCOMMON_STRING_BUFFER_SIZE];            // File-name;
  char Data[PNCOMMON_FILE_BUFFER_SIZE];              // File-buffer.
};

struct MYPRIME_STRUCT {
  struct PRIMETEST_NUMBERS Prime;
  struct MYPRIME_TIME Time;
  struct MYPRIME_FILE File;
};

/*********************************************************************************************
 *                                *** End of File ***                                        *
 *********************************************************************************************/
#endif // PN-COMMON

