/******************************************************************************
 *   This file is part of avr-libc3.                                          * 
 *                                                                            * 
 *   Automatically created by devtools/gen-ioheader-atdf.py (V0.91)           * 
 *                                                                            * 
 *   .atpack File: AT90PWM81.atdf                                             * 
 *   .ATDF File:   atdf/AT90PWM81.atdf                                        * 
 *   Version:      2.0.12                                                     * 
 *   Date:         2019-04-26                                                 * 
 *   Device:       AT90PWM81                                                  * 
 *   Architecture: AVR8                                                       * 
 *                                                                            * 
 *   Changelog:                                                               * 
 *                                                                            * 
 *   2.0.12 2019-04-26 :                                                      * 
 *        - Added missing registers and corrceted event generator list for    * 
 *        - mega4809/4808/3209/3208/1609/1608/809/808.                        * 
 *    2.0.2 2019-01-24 :                                                      * 
 *        - Succeeds Atmel.ATmega_DFP 1.3.300.                                * 
 *                                                                            * 
 *   Generated Source Derived from data:                                      * 
 *   Copyright (c) 2019 Microchip Technology Inc.                             * 
 *                                                                            * 
 *   Licensed under the Apache License, Version 2.0 (the "License");          * 
 *   you may not use this file except in compliance with the License.         * 
 *   You may obtain a copy of the Licence at                                  * 
 *                                                                            * 
 *       http://www.apache.org/licenses/LICENSE-2.0                           * 
 *                                                                            * 
 *   Unless required by applicable law or agreed to in writing, software      * 
 *   distributed under the License is distributed on an "AS IS" BASIS,        * 
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. * 
 *   See the License for the specific language governing permissions and      * 
 *   limitations under the License.                                           * 
 ******************************************************************************/


#ifndef _AVR_IO_H_
#  error "Include <avr/io.h> instead of this file."
#endif

#ifndef _AVR_IOXXX_H_
#  define _AVR_IOXXX_H_ "ioAT90PWM81.h"
#else
#  error "Attempt to include more than one <avr/ioXXX.h> file."
#endif

#ifndef _AVR_AT90PWM81_H_INCLUDED
#  define _AVR_AT90PWM81_H_INCLUDED

/*
================================================================================
Ungrouped common register
================================================================================
*/

#define GPIOR0  _SFR_MEM8 (0x39) /* General Purpose IO Register 0 */
#define GPIOR1  _SFR_MEM8 (0x3A) /* General Purpose IO Register 1 */
#define GPIOR2  _SFR_MEM8 (0x3B) /* General Purpose IO Register 2 */

#define SMCR    _SFR_MEM8 (0x53) /* Sleep Mode Control Register */
#define MCUSR   _SFR_MEM8 (0x54) /* MCU Status Register */
#define MCUCR   _SFR_MEM8 (0x55) /* MCU Control Register */

#define SP      _SFR_MEM16(0x5D) /* Stack Pointer  */
#define SREG    _SFR_MEM8 (0x5F) /* Status Register */

#define BGCRR   _SFR_MEM8 (0x80) /* BandGap Resistor Calibration Register */
#define BGCCR   _SFR_MEM8 (0x81) /* BandGap Current Calibration Register */

#define CLKPR   _SFR_MEM8 (0x83) 
#define CLKCSR  _SFR_MEM8 (0x84) 
#define CLKSELR _SFR_MEM8 (0x85) 
#define PRR     _SFR_MEM8 (0x86) /* Power Reduction Register */
#define PLLCSR  _SFR_MEM8 (0x87) /* PLL Control And Status Register */
#define OSCCAL  _SFR_MEM8 (0x88) /* Oscillator Calibration Value */


/*
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
C LANGUAGE - ONLY
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/

#if !defined (__ASSEMBLER__)
/*
================================================================================
IO Module Structures
================================================================================
*/


/*
--------------------------------------------------------------------------------
FUSE - Fuses
--------------------------------------------------------------------------------
*/

typedef struct FUSE_struct
{
    register8_t LOW;     
    register8_t HIGH;    
    register8_t EXTENDED;
} FUSE_t;


/* PSC2 Reset Behavior */
typedef enum FUSE_PSC2RB_enum
{
    FUSE_PSC2RB_CLEAR_gc = (0x00), /* PSC2 Reset Behavior - CLEAR */
    FUSE_PSC2RB_SET_gc   = (0x80), /* PSC2 Reset Behavior - SET */
} FUSE_PSC2RB_t;

/* PSC2 Reset Behavior for 22 and 23 */
typedef enum FUSE_PSC2RBA_enum
{
    FUSE_PSC2RBA_CLEAR_gc = (0x00), /* PSC2 Reset Behavior for 22 and 23 - CLEAR */
    FUSE_PSC2RBA_SET_gc   = (0x40), /* PSC2 Reset Behavior for 22 and 23 - SET */
} FUSE_PSC2RBA_t;

/* PSC0 Reset Behavior */
typedef enum FUSE_PSC0RB_enum
{
    FUSE_PSC0RB_CLEAR_gc = (0x00), /* PSC0 Reset Behavior - CLEAR */
    FUSE_PSC0RB_SET_gc   = (0x20), /* PSC0 Reset Behavior - SET */
} FUSE_PSC0RB_t;

/* PSC Reset Value */
typedef enum FUSE_PSCRV_enum
{
    FUSE_PSCRV_CLEAR_gc = (0x00), /* PSC Reset Value - CLEAR */
    FUSE_PSCRV_SET_gc   = (0x10), /* PSC Reset Value - SET */
} FUSE_PSCRV_t;

/* PSC2 and PSC0 input Reset Behavior */
typedef enum FUSE_PSCINRB_enum
{
    FUSE_PSCINRB_CLEAR_gc = (0x00), /* PSC2 and PSC0 input Reset Behavior - CLEAR */
    FUSE_PSCINRB_SET_gc   = (0x08), /* PSC2 and PSC0 input Reset Behavior - SET */
} FUSE_PSCINRB_t;

/* Brown-out Detector Trigger Level */
typedef enum FUSE_BODLEVEL_enum
{
    FUSE_BODLEVEL_DISABLED_gc = (0x07), /* Brown-out detection disabled */
    FUSE_BODLEVEL_1V8_gc      = (0x06), /* Brown-out detection at VCC=1.8 V */
    FUSE_BODLEVEL_2V7_gc      = (0x05), /* Brown-out detection at VCC=2.7 V */
    FUSE_BODLEVEL_4V3_gc      = (0x04), /* Brown-out detection at VCC=4.3 V */
    FUSE_BODLEVEL_2V3_gc      = (0x03), /* Brown-out detection at VCC=2.3 V */
    FUSE_BODLEVEL_2V2_gc      = (0x02), /* Brown-out detection at VCC=2.2 V */
    FUSE_BODLEVEL_1V9_gc      = (0x01), /* Brown-out detection at VCC=1.9 V */
    FUSE_BODLEVEL_2V0_gc      = (0x00), /* Brown-out detection at VCC=2.0 V */
} FUSE_BODLEVEL_t;

/* Reset Disabled (Enable PE0 as I/O pin) */
typedef enum FUSE_RSTDISBL_enum
{
    FUSE_RSTDISBL_CLEAR_gc = (0x00), /* Reset Disabled (Enable PE0 as I/O pin) - CLEAR */
    FUSE_RSTDISBL_SET_gc   = (0x80), /* Reset Disabled (Enable PE0 as I/O pin) - SET */
} FUSE_RSTDISBL_t;

/* Debug Wire enable */
typedef enum FUSE_DWEN_enum
{
    FUSE_DWEN_CLEAR_gc = (0x00), /* Debug Wire enable - CLEAR */
    FUSE_DWEN_SET_gc   = (0x40), /* Debug Wire enable - SET */
} FUSE_DWEN_t;

/* Serial program downloading (SPI) enabled */
typedef enum FUSE_SPIEN_enum
{
    FUSE_SPIEN_CLEAR_gc = (0x00), /* Serial program downloading (SPI) enabled - CLEAR */
    FUSE_SPIEN_SET_gc   = (0x20), /* Serial program downloading (SPI) enabled - SET */
} FUSE_SPIEN_t;

/* Watch-dog Timer always on */
typedef enum FUSE_WDTON_enum
{
    FUSE_WDTON_CLEAR_gc = (0x00), /* Watch-dog Timer always on - CLEAR */
    FUSE_WDTON_SET_gc   = (0x10), /* Watch-dog Timer always on - SET */
} FUSE_WDTON_t;

/* Preserve EEPROM through the Chip Erase cycle */
typedef enum FUSE_EESAVE_enum
{
    FUSE_EESAVE_CLEAR_gc = (0x00), /* Preserve EEPROM through the Chip Erase cycle - CLEAR */
    FUSE_EESAVE_SET_gc   = (0x08), /* Preserve EEPROM through the Chip Erase cycle - SET */
} FUSE_EESAVE_t;

/* Select Boot Size */
typedef enum FUSE_BOOTSZ_enum
{
    FUSE_BOOTSZ_128W_0F80_gc  = (0x03<<1), /* Boot Flash size=128 words Boot address=$0F80 */
    FUSE_BOOTSZ_256W_0F00_gc  = (0x02<<1), /* Boot Flash size=256 words Boot address=$0F00 */
    FUSE_BOOTSZ_512W_0E00_gc  = (0x01<<1), /* Boot Flash size=512 words Boot address=$0E00 */
    FUSE_BOOTSZ_1024W_0C00_gc = (0x00<<1), /* Boot Flash size=1024 words Boot address=$0C00 */
} FUSE_BOOTSZ_t;

/* Select Reset Vector */
typedef enum FUSE_BOOTRST_enum
{
    FUSE_BOOTRST_CLEAR_gc = (0x00), /* Select Reset Vector - CLEAR */
    FUSE_BOOTRST_SET_gc   = (0x01), /* Select Reset Vector - SET */
} FUSE_BOOTRST_t;

/* Divide clock by 8 internally */
typedef enum FUSE_CKDIV8_enum
{
    FUSE_CKDIV8_CLEAR_gc = (0x00), /* Divide clock by 8 internally - CLEAR */
    FUSE_CKDIV8_SET_gc   = (0x80), /* Divide clock by 8 internally - SET */
} FUSE_CKDIV8_t;

/* Clock output on PORTD1 */
typedef enum FUSE_CKOUT_enum
{
    FUSE_CKOUT_CLEAR_gc = (0x00), /* Clock output on PORTD1 - CLEAR */
    FUSE_CKOUT_SET_gc   = (0x40), /* Clock output on PORTD1 - SET */
} FUSE_CKOUT_t;

/* Select Clock Source */
typedef enum FUSE_SUT_CKSEL_enum
{
    FUSE_SUT_CKSEL_EXTCLK_PLLIN_RC_8MHZ_6CK_14CK_0MS_gc             = (0x00), /* Ext. CK; PLLin: RC8; SUT: 6CK/14CK+0ms; [CKSEL=0000 SUT=00] */
    FUSE_SUT_CKSEL_EXTCLK_PLLIN_RC_8MHZ_6CK_14CK_4MS1_gc            = (0x10), /* Ext. CK; PLLin: RC8 MHz; SUT:6 CK/14CK+4.1 ms; [CKSEL=0000 SUT=01] */
    FUSE_SUT_CKSEL_EXTCLK_PLLIN_RC_8MHZ_6CK_14CK_65MS_gc            = (0x20), /* Ext. CK; PLLin: RC8 MHz; SUT:6 CK/14CK+65 ms; [CKSEL=0000 SUT=10] */
    FUSE_SUT_CKSEL_RC_8MHZ_PLLIN_RC_8MHZ_6CK_14CK_0MS_gc            = (0x02), /* RC8 MHz; PLLin: RC8; SUT: 6CK/14CK+0ms; [CKSEL=0010 SUT=00] */
    FUSE_SUT_CKSEL_RC_8MHZ_PLLIN_RC_8MHZ_6CK_14CK_4MS1_gc           = (0x12), /* RC8 MHz; PLLin: RC8; SUT: 6CK/14CK+4.1 ms; [CKSEL=0010 SUT=01] */
    FUSE_SUT_CKSEL_RC_8MHZ_PLLIN_RC_8MHZ_6CK_14CK_65MS_gc           = (0x22), /* RC8 MHz; PLLin: RC8; SUT: 6CK/14CK+65 ms;  [CKSEL=0010 SUT=10] */
    FUSE_SUT_CKSEL_XOSC_PLLIN_RC_8MHZ_258CK_14CK_4MS1_gc            = (0x08), /* XOSC.9-3MHz; PLLin: RC8; SUT: 258CK/14CK+4.1 ms; [CKSEL=1000 SUT=00] */
    FUSE_SUT_CKSEL_XOSC_PLLIN_RC_8MHZ_258CK_14CK_65MS_gc            = (0x18), /* XOSC.9-3MHz; PLLin: RC8; SUT: 258CK/14CK+65 ms; [CKSEL=1000 SUT=01] */
    FUSE_SUT_CKSEL_XOSC_PLLIN_RC_8MHZ_1KCK_14CK_0MS_gc              = (0x28), /* XOSC.9-3MHz; PLLin: RC8; SUT: 1KCK/14CK+0 ms; [CKSEL=1000 SUT=10] */
    FUSE_SUT_CKSEL_XOSC_PLLIN_RC_8MHZ_1KCK_14CK_4MS1_gc             = (0x38), /* XOSC.9-3MHz; PLLin: RC8; SUT: 1KCK/14CK+4.1 ms; [CKSEL=1000 SUT=11] */
    FUSE_SUT_CKSEL_XOSC_PLLIN_RC_8MHZ_1KCK_14CK_65MS_gc             = (0x09), /* XOSC.9-3MHz; PLLin: RC8; SUT: 1KCK/14CK+65 ms; [CKSEL=1001 SUT=00] */
    FUSE_SUT_CKSEL_XOSC_PLLIN_RC_8MHZ_16KCK_14CK_0MS_gc             = (0x19), /* XOSC.9-3MHz; PLLin: RC8; SUT: 16KCK/14CK+0 ms; [CKSEL=1001 SUT=01] */
    FUSE_SUT_CKSEL_XOSC_PLLIN_RC_8MHZ_16KCK_14CK_4MS1_gc            = (0x29), /* XOSC.9-3MHz; PLLin: RC8; SUT: 16KCK/14CK+4.1 ms; [CKSEL=1001 SUT=10] */
    FUSE_SUT_CKSEL_XOSC_PLLIN_RC_8MHZ_16KCK_14CK_65MS_gc            = (0x39), /* XOSC.9-3MHz; PLLin: RC8; SUT: 16KCK/14CK+65 ms;  [CKSEL=1001 SUT=11] */
    FUSE_SUT_CKSEL_XOSC_3MHZ_8MHZ_PLLIN_RC_8MHZ_258CK_14CK_4MS1_gc  = (0x0A), /* XOSC3-8MHz; PLLin: RC8; SUT: 258CK/14CK+4.1 ms; [CKSEL=1010 SUT=00] */
    FUSE_SUT_CKSEL_XOSC_3MHZ_8MHZ_PLLIN_RC_8MHZ_258CK_14CK_65MS_gc  = (0x1A), /* XOSC3-8MHz; PLLin: RC8; SUT: 258CK/14CK+65 ms; [CKSEL=1010 SUT=01] */
    FUSE_SUT_CKSEL_XOSC_3MHZ_8MHZ_PLLIN_RC_8MHZ_1KCK_14CK_0MS_gc    = (0x2A), /* XOSC3-8MHz; PLLin: RC8; SUT: 1KCK/14CK+0 ms; [CKSEL=1010 SUT=10] */
    FUSE_SUT_CKSEL_XOSC_3MHZ_8MHZ_PLLIN_RC_8MHZ_1KCK_14CK_4MS1_gc   = (0x3A), /* XOSC3-8MHz; PLLin: RC8; SUT: 1KCK/14CK+4.1 ms; [CKSEL=1010 SUT=11] */
    FUSE_SUT_CKSEL_XOSC_3MHZ_8MHZ_PLLIN_RC_8MHZ_1KCK_14CK_65MS_gc   = (0x0B), /* XOSC3-8MHz; PLLin: RC8; SUT: 1KCK/14CK+65 ms;  [CKSEL=1011 SUT=00] */
    FUSE_SUT_CKSEL_XOSC_3MHZ_8MHZ_PLLIN_RC_8MHZ_16KCK_14CK_0MS_gc   = (0x1B), /* XOSC3-8MHz; PLLin: RC8; SUT: 16KCK/14CK+0 ms; [CKSEL=1011 SUT=01] */
    FUSE_SUT_CKSEL_XOSC_3MHZ_8MHZ_PLLIN_RC_8MHZ_16KCK_14CK_4MS1_gc  = (0x2B), /* XOSC3-8MHz; PLLin: RC8; SUT: 16KCK/14CK+4.1 ms; [CKSEL=1011 SUT=10] */
    FUSE_SUT_CKSEL_XOSC_3MHZ_8MHZ_PLLIN_RC_8MHZ_16KCK_14CK_65MS_gc  = (0x3B), /* XOSC3-8MHz; PLLin: RC8; SUT: 16KCK/14CK+65 ms;  [CKSEL=1011 SUT=11] */
    FUSE_SUT_CKSEL_XOSC_3MHZ_8MHZ_PLLIN_XOSC_258CK_14CK_4MS1_gc     = (0x0C), /* XOSC3-8MHz; PLLin: XOSC; SUT: 258CK/14CK+4.1 ms; [CKSEL=1100 SUT=00] */
    FUSE_SUT_CKSEL_XOSC_3MHZ_8MHZ_PLLIN_XOSC_258CK_14CK_65MS_gc     = (0x1C), /* XOSC3-8MHz; PLLin: XOSC; SUT: 258CK/14CK+65 ms;  [CKSEL=1100 SUT=01] */
    FUSE_SUT_CKSEL_XOSC_3MHZ_8MHZ_PLLIN_XOSC_1KCK_14CK_0MS_gc       = (0x2C), /* XOSC3-8MHz; PLLin: XOSC; SUT: 1KCK/14CK+0 ms; [CKSEL=1100 SUT=10] */
    FUSE_SUT_CKSEL_XOSC_3MHZ_8MHZ_PLLIN_XOSC_1KCK_14CK_4MS1_gc      = (0x3C), /* XOSC3-8MHz; PLLin: XOSC; SUT: 1KCK/14CK+4.1 ms; [CKSEL=1100 SUT=11] */
    FUSE_SUT_CKSEL_XOSC_3MHZ_8MHZ_PLLIN_XOSC_1KCK_14CK_65MS_gc      = (0x0D), /* XOSC3-8MHz; PLLin: XOSC; SUT: 1KCK/14CK+65 ms;  [CKSEL=1101 SUT=00 */
    FUSE_SUT_CKSEL_XOSC_3MHZ_8MHZ_PLLIN_XOSC_16KCK_14CK_0MS_gc      = (0x1D), /* XOSC3-8MHz; PLLin: XOSC; SUT: 16KCK/14CK+0 ms; [CKSEL=1101 SUT=01] */
    FUSE_SUT_CKSEL_XOSC_3MHZ_8MHZ_PLLIN_XOSC_16KCK_14CK_4MS1_gc     = (0x2D), /* XOSC3-8MHz; PLLin: XOSC; SUT: 16KCK/14CK+4.1 ms; [CKSEL=1101 SUT=10] */
    FUSE_SUT_CKSEL_XOSC_3MHZ_8MHZ_PLLIN_XOSC_16KCK_14CK_65MS_gc     = (0x3D), /* XOSC3-8MHz; PLLin: XOSC; SUT: 16KCK/14CK+65 ms;  [CKSEL=1101 SUT=11] */
    FUSE_SUT_CKSEL_XOSC_8MHZ_16MHZ_PLLIN_RC_8MHZ_258CK_14CK_4MS1_gc = (0x0E), /* XOSC8-16MHz; PLLin: RC8; SUT: 258CK/14CK+4.1 ms; [CKSEL=1110 SUT=00] */
    FUSE_SUT_CKSEL_XOSC_8MHZ_16MHZ_PLLIN_RC_8MHZ_258CK_14CK_65MS_gc = (0x1E), /* XOSC8-16MHz; PLLin: RC8; SUT: 258CK/14CK+65 ms;  [CKSEL=1110 SUT=01] */
    FUSE_SUT_CKSEL_XOSC_8MHZ_16MHZ_PLLIN_RC_8MHZ_1KCK_14CK_0MS_gc   = (0x2E), /* XOSC8-16MHz; PLLin: RC8; SUT: 1KCK/14CK+0 ms; [CKSEL=1110 SUT=10] */
    FUSE_SUT_CKSEL_XOSC_8MHZ_16MHZ_PLLIN_RC_8MHZ_1KCK_14CK_4MS1_gc  = (0x3E), /* XOSC8-16MHz; PLLin: RC8; SUT: 1KCK/14CK+4.1 ms; [CKSEL=1110 SUT=11] */
    FUSE_SUT_CKSEL_XOSC_8MHZ_16MHZ_PLLIN_RC_8MHZ_1KCK_14CK_65MS_gc  = (0x0F), /* XOSC8-16MHz; PLLin: RC8; SUT: 1KCK/14CK+65 ms; [CKSEL=1111 SUT=00] */
    FUSE_SUT_CKSEL_XOSC_8MHZ_16MHZ_PLLIN_RC_8MHZ_16KCK_14CK_0MS_gc  = (0x1F), /* XOSC8-16MHz; PLLin: RC8; SUT: 16KCK/14CK+0 ms; [CKSEL=1111 SUT=01] */
    FUSE_SUT_CKSEL_XOSC_8MHZ_16MHZ_PLLIN_RC_8MHZ_16KCK_14CK_4MS1_gc = (0x2F), /* XOSC8-16MHz; PLLin: RC8; SUT: 16KCK/14CK+4.1 ms; [CKSEL=1111 SUT=10] */
    FUSE_SUT_CKSEL_XOSC_8MHZ_16MHZ_PLLIN_RC_8MHZ_16KCK_14CK_65MS_gc = (0x3F), /* XOSC8-16MHz; PLLin: RC8; SUT: 16KCK/14CK+65 ms;  [CKSEL=1111 SUT=11] */
    FUSE_SUT_CKSEL_WDOSC_128KHZ_1KCK_14CK_0MS_gc                    = (0x03), /* WD128 KHz; SUT: 1KCK/14CK+0 ms; [CKSEL=0011 SUT=00] */
    FUSE_SUT_CKSEL_WDOSC_128KHZ_1KCK_14CK_4MS1_gc                   = (0x13), /* WD128 KHz; SUT: 1KCK/14CK+4.1 ms; [CKSEL=0011 SUT=01] */
    FUSE_SUT_CKSEL_WDOSC_128KHZ_1KCK_14CK_65MS_gc                   = (0x23), /* WD128 KHz; SUT: 1KCK/14CK+65 ms; [CKSEL=0011 SUT=10] */
    FUSE_SUT_CKSEL_WDOSC_128KHZ_16KCK_14CK_0MS_gc                   = (0x33), /* WD128 KHz; SUT: 16KCK/14CK+0 ms; [CKSEL=0011 SUT=11] */
    FUSE_SUT_CKSEL_PLLCLK_DIV4_PLLIN_RC_8MHZ_1KCK_14CK_0MS_gc       = (0x01), /* PLL/4; PLLin: RC8; SUT: 1KCK/14CK+0 ms; [CKSEL=0001 SUT=00] */
    FUSE_SUT_CKSEL_PLLCLK_DIV4_PLLIN_RC_8MHZ_1KCK_14CK_4MS_gc       = (0x11), /* PLL/4; PLLin: RC8; SUT: 1KCK/14CK+4 ms;   [CKSEL=0001 SUT=01] */
    FUSE_SUT_CKSEL_PLLCLK_DIV4_PLLIN_RC_8MHZ_1KCK_14CK_64MS_gc      = (0x21), /* PLL/4; PLLin: RC8; SUT: 1KCK/14CK+64 ms;   [CKSEL=0001 SUT=10] */
    FUSE_SUT_CKSEL_PLLCLK_DIV4_PLLIN_EXTCLK_16KCK_14CK_0MS_gc       = (0x05), /* PLL/4; PLLin: Ext. CK; SUT: 16KCK/14CK+0 ms; [CKSEL=0101 SUT=00] */
    FUSE_SUT_CKSEL_PLLCLK_DIV4_PLLIN_EXTCLK_16KCK_14CK_4MS_gc       = (0x15), /* PLL/4; PLLin: Ext. CK; SUT: 16KCK/14CK+4 ms; [CKSEL=0101 SUT=01] */
    FUSE_SUT_CKSEL_PLLCLK_DIV4_PLLIN_EXTCLK_16KCK_14CK_4MS_gc       = (0x25), /* PLL/4; PLLin: Ext. CK; SUT: 16KCK/14CK+4 ms; [CKSEL=0101 SUT=10] */
    FUSE_SUT_CKSEL_PLLCLK_DIV4_PLLIN_EXTCLK_16KCK_14CK_64MS_gc      = (0x35), /* PLL/4; PLLin: Ext. CK; SUT: 16KCK/14CK+64 ms; [CKSEL=0101 SUT=11] */
    FUSE_SUT_CKSEL_PLLCLK_DIV4_PLLIN_XOSC_1KCK_14CK_0MS_gc          = (0x04), /* PLL/4; PLLin: XOSC; SUT: 1KCK/14CK+0 ms; [CKSEL=0100 SUT=00] */
    FUSE_SUT_CKSEL_PLLCLK_DIV4_PLLIN_XOSC_1KCK_14CK_4MS_gc          = (0x14), /* PLL/4; PLLin: XOSC; SUT: 1KCK/14CK+4 ms; [CKSEL=0100 SUT=01] */
    FUSE_SUT_CKSEL_PLLCLK_DIV4_PLLIN_XOSC_1KCK_14CK_64MS_gc         = (0x24), /* PLL/4; PLLin: XOSC; SUT: 1KCK/14CK+64 ms; [CKSEL=0100 SUT=10] */
    FUSE_SUT_CKSEL_PLLCLK_DIV4_PLLIN_XOSC_16KCK_14CK_0MS_gc         = (0x34), /* PLL/4; PLLin: XOSC; SUT: 16KCK/14CK+0 ms; [CKSEL=0100 SUT=11] */
    FUSE_SUT_CKSEL_RC_1MHZ_1KCK_14CK_0MS_gc                         = (0x06), /* RC 1 MHz; SUT: 1KCK/14CK+0 ms; [CKSEL=0110 SUT=00] */
    FUSE_SUT_CKSEL_RC_1MHZ_1KCK_14CK_4MS1_gc                        = (0x16), /* RC 1 MHz; SUT: 1KCK/14CK+4.1 ms; [CKSEL=0110 SUT=01] */
    FUSE_SUT_CKSEL_RC_1MHZ_1KCK_14CK_65MS_gc                        = (0x26), /* RC 1 MHz; SUT: 1KCK/14CK+65 ms;  [CKSEL=0110 SUT=10] */
} FUSE_SUT_CKSEL_t;

/*
--------------------------------------------------------------------------------
LOCKBIT - Lockbits
--------------------------------------------------------------------------------
*/

typedef struct LOCKBIT_struct
{
    register8_t LOCKBIT;
} LOCKBIT_t;


/* Memory Lock */
typedef enum LOCKBIT_LB_enum
{
    LOCKBIT_LB_PROG_VER_DISABLED_gc = (0x00), /* Further programming and verification disabled */
    LOCKBIT_LB_PROG_DISABLED_gc     = (0x02), /* Further programming disabled */
    LOCKBIT_LB_NO_LOCK_gc           = (0x03), /* No memory lock features enabled */
} LOCKBIT_LB_t;

/* Boot Loader Protection Mode */
typedef enum LOCKBIT_BLB0_enum
{
    LOCKBIT_BLB0_LPM_SPM_DISABLE_gc = (0x00<<2), /* LPM and SPM prohibited in Application Section */
    LOCKBIT_BLB0_LPM_DISABLE_gc     = (0x01<<2), /* LPM prohibited in Application Section */
    LOCKBIT_BLB0_SPM_DISABLE_gc     = (0x02<<2), /* SPM prohibited in Application Section */
    LOCKBIT_BLB0_NO_LOCK_gc         = (0x03<<2), /* No lock on SPM and LPM in Application Section */
} LOCKBIT_BLB0_t;

/* Boot Loader Protection Mode */
typedef enum LOCKBIT_BLB1_enum
{
    LOCKBIT_BLB1_LPM_SPM_DISABLE_gc = (0x00<<4), /* LPM and SPM prohibited in Boot Section */
    LOCKBIT_BLB1_LPM_DISABLE_gc     = (0x01<<4), /* LPM prohibited in Boot Section */
    LOCKBIT_BLB1_SPM_DISABLE_gc     = (0x02<<4), /* SPM prohibited in Boot Section */
    LOCKBIT_BLB1_NO_LOCK_gc         = (0x03<<4), /* No lock on SPM and LPM in Boot Section */
} LOCKBIT_BLB1_t;

/*
--------------------------------------------------------------------------------
PORT - I/O Port
--------------------------------------------------------------------------------
*/

typedef struct PORTB_struct
{
    register8_t rsv_0x00[35]; /* RESERVED REGISTER BLOCK */
    register8_t PINB;         /* Port B Input Pins */
    register8_t DDRB;         /* Port B Data Direction Register */
    register8_t PORTB;        /* Port B Data Register */
} PORTB_t;


/*
--------------------------------------------------------------------------------
PORT - I/O Port
--------------------------------------------------------------------------------
*/

typedef struct PORTD_struct
{
    register8_t rsv_0x00[41]; /* RESERVED REGISTER BLOCK */
    register8_t PIND;         /* Port D Input Pins */
    register8_t DDRD;         /* Port D Data Direction Register */
    register8_t PORTD;        /* Port D Data Register */
} PORTD_t;


/*
--------------------------------------------------------------------------------
PORT - I/O Port
--------------------------------------------------------------------------------
*/

typedef struct PORTE_struct
{
    register8_t rsv_0x00[44]; /* RESERVED REGISTER BLOCK */
    register8_t PINE;         /* Port E Input Pins */
    register8_t DDRE;         /* Port E Data Direction Register */
    register8_t PORTE;        /* Port E Data Register */
} PORTE_t;


/*
--------------------------------------------------------------------------------
DAC - Digital-to-Analog Converter
--------------------------------------------------------------------------------
*/

typedef struct DAC_struct
{
    register8_t rsv_0x00[88]; /* RESERVED REGISTER BLOCK */
    _REGISTER16 (DAC);        /* DAC Data Register */
    register8_t rsv_0x59[29]; /* RESERVED REGISTER BLOCK */
    register8_t DACON;        /* DAC Control Register */
} DAC_t;


/* DAC Auto Trigger Enable Bit */
typedef enum DAC_DAATE_enum
{
    DAC_DAATE_CLEAR_gc = (0x00), /* DAC Auto Trigger Enable Bit - CLEAR */
    DAC_DAATE_SET_gc   = (0x80), /* DAC Auto Trigger Enable Bit - SET */
} DAC_DAATE_t;

/* DAC Trigger Selection Bits */
typedef enum DAC_DATS_enum
{
    DAC_DATS_VAL_0x00_gc = (0x00<<4), /* Analog Comparator 0 */
    DAC_DATS_VAL_0x01_gc = (0x01<<4), /* Analog Comparator 1 */
    DAC_DATS_VAL_0x02_gc = (0x02<<4), /* External Interrupt Request 0 */
    DAC_DATS_VAL_0x03_gc = (0x03<<4), /* Timer/Counter0 Compare Match A */
    DAC_DATS_VAL_0x04_gc = (0x04<<4), /* Timer/Counter0 Overflow */
    DAC_DATS_VAL_0x05_gc = (0x05<<4), /* Timer/Counter1 Compare Match B */
    DAC_DATS_VAL_0x06_gc = (0x06<<4), /* Timer/Counter1 Overflow */
    DAC_DATS_VAL_0x07_gc = (0x07<<4), /* Timer/Counter1 Capture Event */
} DAC_DATS_t;

/* DAC Left Adjust */
typedef enum DAC_DALA_enum
{
    DAC_DALA_CLEAR_gc = (0x00), /* DAC Left Adjust - CLEAR */
    DAC_DALA_SET_gc   = (0x04), /* DAC Left Adjust - SET */
} DAC_DALA_t;

/* DAC Enable Bit */
typedef enum DAC_DAEN_enum
{
    DAC_DAEN_CLEAR_gc = (0x00), /* DAC Enable Bit - CLEAR */
    DAC_DAEN_SET_gc   = (0x01), /* DAC Enable Bit - SET */
} DAC_DAEN_t;

/*
--------------------------------------------------------------------------------
SPI - Serial Peripheral Interface
--------------------------------------------------------------------------------
*/

typedef struct SPI_struct
{
    register8_t rsv_0x00[55]; /* RESERVED REGISTER BLOCK */
    register8_t SPCR;         /* SPI Control Register */
    register8_t SPSR;         /* SPI Status Register */
    register8_t rsv_0x39[29]; /* RESERVED REGISTER BLOCK */
    register8_t SPDR;         /* SPI Data Register */
} SPI_t;


/* SPI Interrupt Enable */
typedef enum SPI_SPIE_enum
{
    SPI_SPIE_CLEAR_gc = (0x00), /* SPI Interrupt Enable - CLEAR */
    SPI_SPIE_SET_gc   = (0x80), /* SPI Interrupt Enable - SET */
} SPI_SPIE_t;

/* SPI Enable */
typedef enum SPI_SPE_enum
{
    SPI_SPE_CLEAR_gc = (0x00), /* SPI Enable - CLEAR */
    SPI_SPE_SET_gc   = (0x40), /* SPI Enable - SET */
} SPI_SPE_t;

/* Data Order */
typedef enum SPI_DORD_enum
{
    SPI_DORD_CLEAR_gc = (0x00), /* Data Order - CLEAR */
    SPI_DORD_SET_gc   = (0x20), /* Data Order - SET */
} SPI_DORD_t;

/* Master/Slave Select */
typedef enum SPI_MSTR_enum
{
    SPI_MSTR_CLEAR_gc = (0x00), /* Master/Slave Select - CLEAR */
    SPI_MSTR_SET_gc   = (0x10), /* Master/Slave Select - SET */
} SPI_MSTR_t;

/* Clock polarity */
typedef enum SPI_CPOL_enum
{
    SPI_CPOL_CLEAR_gc = (0x00), /* Clock polarity - CLEAR */
    SPI_CPOL_SET_gc   = (0x08), /* Clock polarity - SET */
} SPI_CPOL_t;

/* Clock Phase */
typedef enum SPI_CPHA_enum
{
    SPI_CPHA_CLEAR_gc = (0x00), /* Clock Phase - CLEAR */
    SPI_CPHA_SET_gc   = (0x04), /* Clock Phase - SET */
} SPI_CPHA_t;

/* SPI Clock Rate Selects */
typedef enum SPI_SPR_enum
{
    SPI_SPR_VAL_0x00_gc = (0x00), /* fosc/4 */
    SPI_SPR_VAL_0x01_gc = (0x01), /* fosc/16 */
    SPI_SPR_VAL_0x02_gc = (0x02), /* fosc/64 */
    SPI_SPR_VAL_0x03_gc = (0x03), /* fosc/128 */
    SPI_SPR_VAL_0x04_gc = (0x04), /* fosc/2 */
    SPI_SPR_VAL_0x05_gc = (0x05), /* fosc/8 */
    SPI_SPR_VAL_0x06_gc = (0x06), /* fosc/32 */
    SPI_SPR_VAL_0x07_gc = (0x07), /* fosc/64 */
} SPI_SPR_t;

/* SPI Interrupt Flag */
typedef enum SPI_SPIF_enum
{
    SPI_SPIF_CLEAR_gc = (0x00), /* SPI Interrupt Flag - CLEAR */
    SPI_SPIF_SET_gc   = (0x80), /* SPI Interrupt Flag - SET */
} SPI_SPIF_t;

/* Write Collision Flag */
typedef enum SPI_WCOL_enum
{
    SPI_WCOL_CLEAR_gc = (0x00), /* Write Collision Flag - CLEAR */
    SPI_WCOL_SET_gc   = (0x40), /* Write Collision Flag - SET */
} SPI_WCOL_t;

/* Double SPI Speed Bit */
typedef enum SPI_SPI2X_enum
{
    SPI_SPI2X_CLEAR_gc = (0x00), /* Double SPI Speed Bit - CLEAR */
    SPI_SPI2X_SET_gc   = (0x01), /* Double SPI Speed Bit - SET */
} SPI_SPI2X_t;

/*
--------------------------------------------------------------------------------
WDT - Watchdog Timer
--------------------------------------------------------------------------------
*/

typedef struct WDT_struct
{
    register8_t rsv_0x00[130]; /* RESERVED REGISTER BLOCK */
    register8_t WDTCSR;        /* Watchdog Timer Control Register */
} WDT_t;


/* Watchdog Timeout Interrupt Flag */
typedef enum WDT_WDIF_enum
{
    WDT_WDIF_CLEAR_gc = (0x00), /* Watchdog Timeout Interrupt Flag - CLEAR */
    WDT_WDIF_SET_gc   = (0x80), /* Watchdog Timeout Interrupt Flag - SET */
} WDT_WDIF_t;

/* Watchdog Timeout Interrupt Enable */
typedef enum WDT_WDIE_enum
{
    WDT_WDIE_CLEAR_gc = (0x00), /* Watchdog Timeout Interrupt Enable - CLEAR */
    WDT_WDIE_SET_gc   = (0x40), /* Watchdog Timeout Interrupt Enable - SET */
} WDT_WDIE_t;

/* Watchdog Timer Prescaler Bits */
typedef enum WDT_WDP_enum
{
    WDT_WDP_VAL_0x00_gc = (0x00), /* Oscillator Cycles 2K */
    WDT_WDP_VAL_0x01_gc = (0x01), /* Oscillator Cycles 4K */
    WDT_WDP_VAL_0x02_gc = (0x02), /* Oscillator Cycles 8K */
    WDT_WDP_VAL_0x03_gc = (0x03), /* Oscillator Cycles 16K */
    WDT_WDP_VAL_0x04_gc = (0x04), /* Oscillator Cycles 32K */
    WDT_WDP_VAL_0x05_gc = (0x05), /* Oscillator Cycles 64K */
    WDT_WDP_VAL_0x06_gc = (0x06), /* Oscillator Cycles 128K */
    WDT_WDP_VAL_0x07_gc = (0x07), /* Oscillator Cycles 256K */
    WDT_WDP_VAL_0x08_gc = (0x08), /* Oscillator Cycles 512K */
    WDT_WDP_VAL_0x09_gc = (0x09), /* Oscillator Cycles 1024K */
} WDT_WDP_t;

/* Watchdog Change Enable */
typedef enum WDT_WDCE_enum
{
    WDT_WDCE_CLEAR_gc = (0x00), /* Watchdog Change Enable - CLEAR */
    WDT_WDCE_SET_gc   = (0x10), /* Watchdog Change Enable - SET */
} WDT_WDCE_t;

/* Watch Dog Enable */
typedef enum WDT_WDE_enum
{
    WDT_WDE_CLEAR_gc = (0x00), /* Watch Dog Enable - CLEAR */
    WDT_WDE_SET_gc   = (0x08), /* Watch Dog Enable - SET */
} WDT_WDE_t;

/*
--------------------------------------------------------------------------------
EXINT - External Interrupts
--------------------------------------------------------------------------------
*/

typedef struct EXINT_struct
{
    register8_t rsv_0x00[64]; /* RESERVED REGISTER BLOCK */
    register8_t EIFR;         /* External Interrupt Flag Register */
    register8_t EIMSK;        /* External Interrupt Mask Register */
    register8_t rsv_0x42[71]; /* RESERVED REGISTER BLOCK */
    register8_t EICRA;        /* External Interrupt Control Register A */
} EXINT_t;


/* External Interrupt Sense Control Bit */
typedef enum EXINT_ISC2_enum
{
    EXINT_ISC2_VAL_0x00_gc = (0x00<<4), /* Low Level of INTX */
    EXINT_ISC2_VAL_0x01_gc = (0x01<<4), /* Any Logical Change of INTX */
    EXINT_ISC2_VAL_0x02_gc = (0x02<<4), /* Falling Edge of INTX */
    EXINT_ISC2_VAL_0x03_gc = (0x03<<4), /* Rising Edge of INTX */
} EXINT_ISC2_t;

/* External Interrupt Sense Control Bit */
typedef enum EXINT_ISC1_enum
{
    EXINT_ISC1_VAL_0x00_gc = (0x00<<2), /* Low Level of INTX */
    EXINT_ISC1_VAL_0x01_gc = (0x01<<2), /* Any Logical Change of INTX */
    EXINT_ISC1_VAL_0x02_gc = (0x02<<2), /* Falling Edge of INTX */
    EXINT_ISC1_VAL_0x03_gc = (0x03<<2), /* Rising Edge of INTX */
} EXINT_ISC1_t;

/* External Interrupt Sense Control Bit */
typedef enum EXINT_ISC0_enum
{
    EXINT_ISC0_VAL_0x00_gc = (0x00), /* Low Level of INTX */
    EXINT_ISC0_VAL_0x01_gc = (0x01), /* Any Logical Change of INTX */
    EXINT_ISC0_VAL_0x02_gc = (0x02), /* Falling Edge of INTX */
    EXINT_ISC0_VAL_0x03_gc = (0x03), /* Rising Edge of INTX */
} EXINT_ISC0_t;

/*
--------------------------------------------------------------------------------
ADC - Analog-to-Digital Converter
--------------------------------------------------------------------------------
*/

typedef struct ADC_struct
{
    register8_t rsv_0x00[38]; /* RESERVED REGISTER BLOCK */
    register8_t ADCSRA;       /* The ADC Control and Status register */
    register8_t ADCSRB;       /* ADC Control and Status Register B */
    register8_t ADMUX;        /* The ADC multiplexer Selection Register */
    register8_t rsv_0x29[35]; /* RESERVED REGISTER BLOCK */
    _REGISTER16 (ADC);        /* ADC Data Register Bytes */
    register8_t rsv_0x4D[42]; /* RESERVED REGISTER BLOCK */
    register8_t DIDR0;        /* Digital Input Disable Register 0 */
    register8_t DIDR1;        /* Digital Input Disable Register 1 */
    register8_t AMP0CSR;     
} ADC_t;


/* Reference Selection Bits */
typedef enum ADC_REFS_enum
{
    ADC_REFS_VAL_0x00_gc = (0x00<<6), /* AREF, Internal Vref turned off */
    ADC_REFS_VAL_0x01_gc = (0x01<<6), /* AVCC with external capacitor at AREF pin */
    ADC_REFS_VAL_0x02_gc = (0x02<<6), /* Reserved */
    ADC_REFS_VAL_0x03_gc = (0x03<<6), /* Internal 2.56V Voltage Reference with external capacitor at AREF pin */
} ADC_REFS_t;

/* Left Adjust Result */
typedef enum ADC_ADLAR_enum
{
    ADC_ADLAR_CLEAR_gc = (0x00), /* Left Adjust Result - CLEAR */
    ADC_ADLAR_SET_gc   = (0x20), /* Left Adjust Result - SET */
} ADC_ADLAR_t;

/* Analog Channel and Gain Selection Bits */
#define ADC_ADMUX_MUX_gc(x) (x & 0x0F)

/* ADC Enable */
typedef enum ADC_ADEN_enum
{
    ADC_ADEN_CLEAR_gc = (0x00), /* ADC Enable - CLEAR */
    ADC_ADEN_SET_gc   = (0x80), /* ADC Enable - SET */
} ADC_ADEN_t;

/* ADC Start Conversion */
typedef enum ADC_ADSC_enum
{
    ADC_ADSC_CLEAR_gc = (0x00), /* ADC Start Conversion - CLEAR */
    ADC_ADSC_SET_gc   = (0x40), /* ADC Start Conversion - SET */
} ADC_ADSC_t;

/* ADC Auto Trigger Enable */
typedef enum ADC_ADATE_enum
{
    ADC_ADATE_CLEAR_gc = (0x00), /* ADC Auto Trigger Enable - CLEAR */
    ADC_ADATE_SET_gc   = (0x20), /* ADC Auto Trigger Enable - SET */
} ADC_ADATE_t;

/* ADC Interrupt Flag */
typedef enum ADC_ADIF_enum
{
    ADC_ADIF_CLEAR_gc = (0x00), /* ADC Interrupt Flag - CLEAR */
    ADC_ADIF_SET_gc   = (0x10), /* ADC Interrupt Flag - SET */
} ADC_ADIF_t;

/* ADC Interrupt Enable */
typedef enum ADC_ADIE_enum
{
    ADC_ADIE_CLEAR_gc = (0x00), /* ADC Interrupt Enable - CLEAR */
    ADC_ADIE_SET_gc   = (0x08), /* ADC Interrupt Enable - SET */
} ADC_ADIE_t;

/* ADC Prescaler Select Bits */
#define ADC_ADCSRA_ADPS_gc(x) (x & 0x07)

/* ADC High Speed Mode */
typedef enum ADC_ADHSM_enum
{
    ADC_ADHSM_CLEAR_gc = (0x00), /* ADC High Speed Mode - CLEAR */
    ADC_ADHSM_SET_gc   = (0x80), /* ADC High Speed Mode - SET */
} ADC_ADHSM_t;

/* ADC Noise Canceller Disable */
typedef enum ADC_ADNCDIS_enum
{
    ADC_ADNCDIS_CLEAR_gc = (0x00), /* ADC Noise Canceller Disable - CLEAR */
    ADC_ADNCDIS_SET_gc   = (0x40), /* ADC Noise Canceller Disable - SET */
} ADC_ADNCDIS_t;

/* ADC Single Shot Enable on PSC's Synchronisation Signals */
typedef enum ADC_ADSSEN_enum
{
    ADC_ADSSEN_CLEAR_gc = (0x00), /* ADC Single Shot Enable on PSC's Synchronisation Signals - CLEAR */
    ADC_ADSSEN_SET_gc   = (0x10), /* ADC Single Shot Enable on PSC's Synchronisation Signals - SET */
} ADC_ADSSEN_t;

/* ADC Auto Trigger Sources */
typedef enum ADC_ADTS_enum
{
    ADC_ADTS_VAL_0x00_gc = (0x00), /* Free Running mode */
    ADC_ADTS_VAL_0x01_gc = (0x01), /* Analog Comparator */
    ADC_ADTS_VAL_0x02_gc = (0x02), /* External Interrupt Request 0 */
    ADC_ADTS_VAL_0x03_gc = (0x03), /* Timer/Counter0 Compare Match A */
    ADC_ADTS_VAL_0x04_gc = (0x04), /* Timer/Counter0 Overflow */
    ADC_ADTS_VAL_0x05_gc = (0x05), /* Timer/Counter1 Compare Match B */
    ADC_ADTS_VAL_0x06_gc = (0x06), /* Timer/Counter1 Overflow */
    ADC_ADTS_VAL_0x07_gc = (0x07), /* Timer/Counter1 Capture Event */
    ADC_ADTS_VAL_0x08_gc = (0x08), /* PSC0ASY Event */
    ADC_ADTS_VAL_0x09_gc = (0x09), /* PSC1ASY Event */
    ADC_ADTS_VAL_0x0A_gc = (0x0A), /* PSC2ASY Event */
    ADC_ADTS_VAL_0x0B_gc = (0x0B), /* Analog comparator 1 */
    ADC_ADTS_VAL_0x0C_gc = (0x0C), /* Analog comparator 2 */
} ADC_ADTS_t;

/* ADC8 Digital input Disable */
typedef enum ADC_ADC8D_enum
{
    ADC_ADC8D_CLEAR_gc = (0x00), /* ADC8 Digital input Disable - CLEAR */
    ADC_ADC8D_SET_gc   = (0x80), /* ADC8 Digital input Disable - SET */
} ADC_ADC8D_t;

/* ADC7 Digital input Disable */
typedef enum ADC_ADC7D_enum
{
    ADC_ADC7D_CLEAR_gc = (0x00), /* ADC7 Digital input Disable - CLEAR */
    ADC_ADC7D_SET_gc   = (0x40), /* ADC7 Digital input Disable - SET */
} ADC_ADC7D_t;

/* ADC5 Digital input Disable */
typedef enum ADC_ADC5D_enum
{
    ADC_ADC5D_CLEAR_gc = (0x00), /* ADC5 Digital input Disable - CLEAR */
    ADC_ADC5D_SET_gc   = (0x20), /* ADC5 Digital input Disable - SET */
} ADC_ADC5D_t;

/* ADC4 Digital input Disable */
typedef enum ADC_ADC4D_enum
{
    ADC_ADC4D_CLEAR_gc = (0x00), /* ADC4 Digital input Disable - CLEAR */
    ADC_ADC4D_SET_gc   = (0x10), /* ADC4 Digital input Disable - SET */
} ADC_ADC4D_t;

/* ADC3 Digital input Disable */
typedef enum ADC_ADC3D_enum
{
    ADC_ADC3D_CLEAR_gc = (0x00), /* ADC3 Digital input Disable - CLEAR */
    ADC_ADC3D_SET_gc   = (0x08), /* ADC3 Digital input Disable - SET */
} ADC_ADC3D_t;

/* ADC2 Digital input Disable */
typedef enum ADC_ADC2D_enum
{
    ADC_ADC2D_CLEAR_gc = (0x00), /* ADC2 Digital input Disable - CLEAR */
    ADC_ADC2D_SET_gc   = (0x04), /* ADC2 Digital input Disable - SET */
} ADC_ADC2D_t;

/* ADC1 Digital input Disable */
typedef enum ADC_ADC1D_enum
{
    ADC_ADC1D_CLEAR_gc = (0x00), /* ADC1 Digital input Disable - CLEAR */
    ADC_ADC1D_SET_gc   = (0x02), /* ADC1 Digital input Disable - SET */
} ADC_ADC1D_t;

/* ADC0 Digital input Disable */
typedef enum ADC_ADC0D_enum
{
    ADC_ADC0D_CLEAR_gc = (0x00), /* ADC0 Digital input Disable - CLEAR */
    ADC_ADC0D_SET_gc   = (0x01), /* ADC0 Digital input Disable - SET */
} ADC_ADC0D_t;

/* Digital Input Disable Register 1-ACMP1MD */
typedef enum ADC_ACMP1MD_enum
{
    ADC_ACMP1MD_CLEAR_gc = (0x00), /* Digital Input Disable Register 1-ACMP1MD - CLEAR */
    ADC_ACMP1MD_SET_gc   = (0x08), /* Digital Input Disable Register 1-ACMP1MD - SET */
} ADC_ACMP1MD_t;

/* Digital Input Disable Register 1-AMP0PD */
typedef enum ADC_AMP0PD_enum
{
    ADC_AMP0PD_CLEAR_gc = (0x00), /* Digital Input Disable Register 1-AMP0PD - CLEAR */
    ADC_AMP0PD_SET_gc   = (0x04), /* Digital Input Disable Register 1-AMP0PD - SET */
} ADC_AMP0PD_t;

/* ADC10 Digital input Disable */
typedef enum ADC_ADC10D_enum
{
    ADC_ADC10D_CLEAR_gc = (0x00), /* ADC10 Digital input Disable - CLEAR */
    ADC_ADC10D_SET_gc   = (0x02), /* ADC10 Digital input Disable - SET */
} ADC_ADC10D_t;

/* ADC9 Digital input Disable */
typedef enum ADC_ADC9D_enum
{
    ADC_ADC9D_CLEAR_gc = (0x00), /* ADC9 Digital input Disable - CLEAR */
    ADC_ADC9D_SET_gc   = (0x01), /* ADC9 Digital input Disable - SET */
} ADC_ADC9D_t;

/* -AMP0EN */
typedef enum ADC_AMP0EN_enum
{
    ADC_AMP0EN_CLEAR_gc = (0x00), /* -AMP0EN - CLEAR */
    ADC_AMP0EN_SET_gc   = (0x80), /* -AMP0EN - SET */
} ADC_AMP0EN_t;

/* -AMP0IS */
typedef enum ADC_AMP0IS_enum
{
    ADC_AMP0IS_CLEAR_gc = (0x00), /* -AMP0IS - CLEAR */
    ADC_AMP0IS_SET_gc   = (0x40), /* -AMP0IS - SET */
} ADC_AMP0IS_t;

/* -AMP0G */
#define ADC_AMP0CSR_AMP0G_gc(x) ((x<<4) & 0x30)

/* -AMP0GS */
typedef enum ADC_AMP0GS_enum
{
    ADC_AMP0GS_CLEAR_gc = (0x00), /* -AMP0GS - CLEAR */
    ADC_AMP0GS_SET_gc   = (0x08), /* -AMP0GS - SET */
} ADC_AMP0GS_t;

/* -AMP0TS */
#define ADC_AMP0CSR_AMP0TS_gc(x) (x & 0x03)

/*
--------------------------------------------------------------------------------
AC - Analog Comparator
--------------------------------------------------------------------------------
*/

typedef struct AC_struct
{
    register8_t rsv_0x00[32]; /* RESERVED REGISTER BLOCK */
    register8_t ACSR;         /* Analog Comparator Status Register */
    register8_t rsv_0x21[89]; /* RESERVED REGISTER BLOCK */
    register8_t AC1ECON;     
    register8_t AC2ECON;     
    register8_t AC3ECON;     
    register8_t AC1CON;       /* Analog Comparator 1 Control Register */
    register8_t AC2CON;       /* Analog Comparator 2 Control Register */
    register8_t AC3CON;       /* Analog Comparator3 Control Register */
} AC_t;


/* Analog Comparator3 Enable Bit */
typedef enum AC_AC3EN_enum
{
    AC_AC3EN_CLEAR_gc = (0x00), /* Analog Comparator3 Enable Bit - CLEAR */
    AC_AC3EN_SET_gc   = (0x80), /* Analog Comparator3 Enable Bit - SET */
} AC_AC3EN_t;

/* Analog Comparator 3 Interrupt Enable Bit */
typedef enum AC_AC3IE_enum
{
    AC_AC3IE_CLEAR_gc = (0x00), /* Analog Comparator 3 Interrupt Enable Bit - CLEAR */
    AC_AC3IE_SET_gc   = (0x40), /* Analog Comparator 3 Interrupt Enable Bit - SET */
} AC_AC3IE_t;

/* Analog Comparator 3  Interrupt Select Bit */
#define AC_AC3CON_AC3IS_gc(x) ((x<<4) & 0x30)

/* Analog Comparator 3 Alternate Output Enable */
typedef enum AC_AC3OEA_enum
{
    AC_AC3OEA_CLEAR_gc = (0x00), /* Analog Comparator 3 Alternate Output Enable - CLEAR */
    AC_AC3OEA_SET_gc   = (0x08), /* Analog Comparator 3 Alternate Output Enable - SET */
} AC_AC3OEA_t;

/* Analog Comparator 3 Multiplexer Register */
#define AC_AC3CON_AC3M_gc(x) (x & 0x07)

/* Analog Comparator 1 Enable Bit */
typedef enum AC_AC1EN_enum
{
    AC_AC1EN_CLEAR_gc = (0x00), /* Analog Comparator 1 Enable Bit - CLEAR */
    AC_AC1EN_SET_gc   = (0x80), /* Analog Comparator 1 Enable Bit - SET */
} AC_AC1EN_t;

/* Analog Comparator 1 Interrupt Enable Bit */
typedef enum AC_AC1IE_enum
{
    AC_AC1IE_CLEAR_gc = (0x00), /* Analog Comparator 1 Interrupt Enable Bit - CLEAR */
    AC_AC1IE_SET_gc   = (0x40), /* Analog Comparator 1 Interrupt Enable Bit - SET */
} AC_AC1IE_t;

/* Analog Comparator 1  Interrupt Select Bit */
typedef enum AC_AC1IS_enum
{
    AC_AC1IS_VAL_0x00_gc = (0x00<<4), /* Interrupt on Toggle */
    AC_AC1IS_VAL_0x01_gc = (0x01<<4), /* Reserved */
    AC_AC1IS_VAL_0x02_gc = (0x02<<4), /* Interrupt on Falling Edge */
    AC_AC1IS_VAL_0x03_gc = (0x03<<4), /* Interrupt on Rising Edge */
} AC_AC1IS_t;

/* Analog Comparator 1 Multiplexer Register */
#define AC_AC1CON_AC1M_gc(x) (x & 0x07)

/* Analog Comparator 2 Enable Bit */
typedef enum AC_AC2EN_enum
{
    AC_AC2EN_CLEAR_gc = (0x00), /* Analog Comparator 2 Enable Bit - CLEAR */
    AC_AC2EN_SET_gc   = (0x80), /* Analog Comparator 2 Enable Bit - SET */
} AC_AC2EN_t;

/* Analog Comparator 2 Interrupt Enable Bit */
typedef enum AC_AC2IE_enum
{
    AC_AC2IE_CLEAR_gc = (0x00), /* Analog Comparator 2 Interrupt Enable Bit - CLEAR */
    AC_AC2IE_SET_gc   = (0x40), /* Analog Comparator 2 Interrupt Enable Bit - SET */
} AC_AC2IE_t;

/* Analog Comparator 2  Interrupt Select Bit */
typedef enum AC_AC2IS_enum
{
    AC_AC2IS_VAL_0x00_gc = (0x00<<4), /* Interrupt on Toggle */
    AC_AC2IS_VAL_0x01_gc = (0x01<<4), /* Reserved */
    AC_AC2IS_VAL_0x02_gc = (0x02<<4), /* Interrupt on Falling Edge */
    AC_AC2IS_VAL_0x03_gc = (0x03<<4), /* Interrupt on Rising Edge */
} AC_AC2IS_t;

/* Analog Comparator 2 Multiplexer Register */
#define AC_AC2CON_AC2M_gc(x) (x & 0x07)

/* Analog Comparator 3 Interrupt Flag Bit */
typedef enum AC_AC3IF_enum
{
    AC_AC3IF_CLEAR_gc = (0x00), /* Analog Comparator 3 Interrupt Flag Bit - CLEAR */
    AC_AC3IF_SET_gc   = (0x80), /* Analog Comparator 3 Interrupt Flag Bit - SET */
} AC_AC3IF_t;

/* Analog Comparator 2 Interrupt Flag Bit */
typedef enum AC_AC2IF_enum
{
    AC_AC2IF_CLEAR_gc = (0x00), /* Analog Comparator 2 Interrupt Flag Bit - CLEAR */
    AC_AC2IF_SET_gc   = (0x40), /* Analog Comparator 2 Interrupt Flag Bit - SET */
} AC_AC2IF_t;

/* Analog Comparator 1  Interrupt Flag Bit */
typedef enum AC_AC1IF_enum
{
    AC_AC1IF_CLEAR_gc = (0x00), /* Analog Comparator 1  Interrupt Flag Bit - CLEAR */
    AC_AC1IF_SET_gc   = (0x20), /* Analog Comparator 1  Interrupt Flag Bit - SET */
} AC_AC1IF_t;

/* Analog Comparator 3 Output Bit */
typedef enum AC_AC3O_enum
{
    AC_AC3O_CLEAR_gc = (0x00), /* Analog Comparator 3 Output Bit - CLEAR */
    AC_AC3O_SET_gc   = (0x08), /* Analog Comparator 3 Output Bit - SET */
} AC_AC3O_t;

/* Analog Comparator 2 Output Bit */
typedef enum AC_AC2O_enum
{
    AC_AC2O_CLEAR_gc = (0x00), /* Analog Comparator 2 Output Bit - CLEAR */
    AC_AC2O_SET_gc   = (0x04), /* Analog Comparator 2 Output Bit - SET */
} AC_AC2O_t;

/* Analog Comparator 1 Output Bit */
typedef enum AC_AC1O_enum
{
    AC_AC1O_CLEAR_gc = (0x00), /* Analog Comparator 1 Output Bit - CLEAR */
    AC_AC1O_SET_gc   = (0x02), /* Analog Comparator 1 Output Bit - SET */
} AC_AC1O_t;

/* Analog Comparator Ouput Invert */
typedef enum AC_AC3OI_enum
{
    AC_AC3OI_CLEAR_gc = (0x00), /* Analog Comparator Ouput Invert - CLEAR */
    AC_AC3OI_SET_gc   = (0x20), /* Analog Comparator Ouput Invert - SET */
} AC_AC3OI_t;

/* Analog Comparator Ouput Enable */
typedef enum AC_AC3OE_enum
{
    AC_AC3OE_CLEAR_gc = (0x00), /* Analog Comparator Ouput Enable - CLEAR */
    AC_AC3OE_SET_gc   = (0x10), /* Analog Comparator Ouput Enable - SET */
} AC_AC3OE_t;

/* Analog Comparator Hysteresis Select */
#define AC_AC3ECON_AC3H_gc(x) (x & 0x07)

/* Analog Comparator Ouput Invert */
typedef enum AC_AC2OI_enum
{
    AC_AC2OI_CLEAR_gc = (0x00), /* Analog Comparator Ouput Invert - CLEAR */
    AC_AC2OI_SET_gc   = (0x20), /* Analog Comparator Ouput Invert - SET */
} AC_AC2OI_t;

/* Analog Comparator Ouput Enable */
typedef enum AC_AC2OE_enum
{
    AC_AC2OE_CLEAR_gc = (0x00), /* Analog Comparator Ouput Enable - CLEAR */
    AC_AC2OE_SET_gc   = (0x10), /* Analog Comparator Ouput Enable - SET */
} AC_AC2OE_t;

/* Analog Comparator Hysteresis Select */
#define AC_AC2ECON_AC2H_gc(x) (x & 0x07)

/* Analog Comparator Ouput Invert */
typedef enum AC_AC1OI_enum
{
    AC_AC1OI_CLEAR_gc = (0x00), /* Analog Comparator Ouput Invert - CLEAR */
    AC_AC1OI_SET_gc   = (0x20), /* Analog Comparator Ouput Invert - SET */
} AC_AC1OI_t;

/* Analog Comparator Ouput Enable */
typedef enum AC_AC1OE_enum
{
    AC_AC1OE_CLEAR_gc = (0x00), /* Analog Comparator Ouput Enable - CLEAR */
    AC_AC1OE_SET_gc   = (0x10), /* Analog Comparator Ouput Enable - SET */
} AC_AC1OE_t;

/* Analog Comparator Interrupt Capture Enable */
typedef enum AC_AC1ICE_enum
{
    AC_AC1ICE_CLEAR_gc = (0x00), /* Analog Comparator Interrupt Capture Enable - CLEAR */
    AC_AC1ICE_SET_gc   = (0x08), /* Analog Comparator Interrupt Capture Enable - SET */
} AC_AC1ICE_t;

/* Analog Comparator Hysteresis Select */
#define AC_AC1ECON_AC1H_gc(x) (x & 0x07)

/*
--------------------------------------------------------------------------------
CPU - CPU Registers
--------------------------------------------------------------------------------
*/

typedef struct CPU_struct
{
    register8_t rsv_0x00[57]; /* RESERVED REGISTER BLOCK */
    register8_t GPIOR0;       /* General Purpose IO Register 0 */
    register8_t GPIOR1;       /* General Purpose IO Register 1 */
    register8_t GPIOR2;       /* General Purpose IO Register 2 */
    register8_t rsv_0x3C[23]; /* RESERVED REGISTER BLOCK */
    register8_t SMCR;         /* Sleep Mode Control Register */
    register8_t MCUSR;        /* MCU Status Register */
    register8_t MCUCR;        /* MCU Control Register */
    register8_t rsv_0x56[7];  /* RESERVED REGISTER BLOCK */
    _REGISTER16 (SP);         /* Stack Pointer  */
    register8_t rsv_0x5E;     /* RESERVED REGISTER */
    register8_t SREG;         /* Status Register */
    register8_t rsv_0x60[32]; /* RESERVED REGISTER BLOCK */
    register8_t BGCRR;        /* BandGap Resistor Calibration Register */
    register8_t BGCCR;        /* BandGap Current Calibration Register */
    register8_t rsv_0x82;     /* RESERVED REGISTER */
    register8_t CLKPR;       
    register8_t CLKCSR;      
    register8_t CLKSELR;     
    register8_t PRR;          /* Power Reduction Register */
    register8_t PLLCSR;       /* PLL Control And Status Register */
    register8_t OSCCAL;       /* Oscillator Calibration Value */
} CPU_t;


/* Global Interrupt Enable */
typedef enum CPU_I_enum
{
    CPU_I_CLEAR_gc = (0x00), /* Global Interrupt Enable - CLEAR */
    CPU_I_SET_gc   = (0x80), /* Global Interrupt Enable - SET */
} CPU_I_t;

/* Bit Copy Storage */
typedef enum CPU_T_enum
{
    CPU_T_CLEAR_gc = (0x00), /* Bit Copy Storage - CLEAR */
    CPU_T_SET_gc   = (0x40), /* Bit Copy Storage - SET */
} CPU_T_t;

/* Half Carry Flag */
typedef enum CPU_H_enum
{
    CPU_H_CLEAR_gc = (0x00), /* Half Carry Flag - CLEAR */
    CPU_H_SET_gc   = (0x20), /* Half Carry Flag - SET */
} CPU_H_t;

/* Sign Bit */
typedef enum CPU_S_enum
{
    CPU_S_CLEAR_gc = (0x00), /* Sign Bit - CLEAR */
    CPU_S_SET_gc   = (0x10), /* Sign Bit - SET */
} CPU_S_t;

/* Two's Complement Overflow Flag */
typedef enum CPU_V_enum
{
    CPU_V_CLEAR_gc = (0x00), /* Two's Complement Overflow Flag - CLEAR */
    CPU_V_SET_gc   = (0x08), /* Two's Complement Overflow Flag - SET */
} CPU_V_t;

/* Negative Flag */
typedef enum CPU_N_enum
{
    CPU_N_CLEAR_gc = (0x00), /* Negative Flag - CLEAR */
    CPU_N_SET_gc   = (0x04), /* Negative Flag - SET */
} CPU_N_t;

/* Zero Flag */
typedef enum CPU_Z_enum
{
    CPU_Z_CLEAR_gc = (0x00), /* Zero Flag - CLEAR */
    CPU_Z_SET_gc   = (0x02), /* Zero Flag - SET */
} CPU_Z_t;

/* Carry Flag */
typedef enum CPU_C_enum
{
    CPU_C_CLEAR_gc = (0x00), /* Carry Flag - CLEAR */
    CPU_C_SET_gc   = (0x01), /* Carry Flag - SET */
} CPU_C_t;

/* Pull-up disable */
typedef enum CPU_PUD_enum
{
    CPU_PUD_CLEAR_gc = (0x00), /* Pull-up disable - CLEAR */
    CPU_PUD_SET_gc   = (0x10), /* Pull-up disable - SET */
} CPU_PUD_t;

/* Reset Pin Disable */
typedef enum CPU_RSTDIS_enum
{
    CPU_RSTDIS_CLEAR_gc = (0x00), /* Reset Pin Disable - CLEAR */
    CPU_RSTDIS_SET_gc   = (0x08), /* Reset Pin Disable - SET */
} CPU_RSTDIS_t;

/* Frequency Selection of the Calibrated RC Oscillator */
typedef enum CPU_CKRC81_enum
{
    CPU_CKRC81_CLEAR_gc = (0x00), /* Frequency Selection of the Calibrated RC Oscillator - CLEAR */
    CPU_CKRC81_SET_gc   = (0x04), /* Frequency Selection of the Calibrated RC Oscillator - SET */
} CPU_CKRC81_t;

/* Interrupt Vector Select */
typedef enum CPU_IVSEL_enum
{
    CPU_IVSEL_CLEAR_gc = (0x00), /* Interrupt Vector Select - CLEAR */
    CPU_IVSEL_SET_gc   = (0x02), /* Interrupt Vector Select - SET */
} CPU_IVSEL_t;

/* Interrupt Vector Change Enable */
typedef enum CPU_IVCE_enum
{
    CPU_IVCE_CLEAR_gc = (0x00), /* Interrupt Vector Change Enable - CLEAR */
    CPU_IVCE_SET_gc   = (0x01), /* Interrupt Vector Change Enable - SET */
} CPU_IVCE_t;

/* Watchdog Reset Flag */
typedef enum CPU_WDRF_enum
{
    CPU_WDRF_CLEAR_gc = (0x00), /* Watchdog Reset Flag - CLEAR */
    CPU_WDRF_SET_gc   = (0x08), /* Watchdog Reset Flag - SET */
} CPU_WDRF_t;

/* Brown-out Reset Flag */
typedef enum CPU_BORF_enum
{
    CPU_BORF_CLEAR_gc = (0x00), /* Brown-out Reset Flag - CLEAR */
    CPU_BORF_SET_gc   = (0x04), /* Brown-out Reset Flag - SET */
} CPU_BORF_t;

/* External Reset Flag */
typedef enum CPU_EXTRF_enum
{
    CPU_EXTRF_CLEAR_gc = (0x00), /* External Reset Flag - CLEAR */
    CPU_EXTRF_SET_gc   = (0x02), /* External Reset Flag - SET */
} CPU_EXTRF_t;

/* Power-on reset flag */
typedef enum CPU_PORF_enum
{
    CPU_PORF_CLEAR_gc = (0x00), /* Power-on reset flag - CLEAR */
    CPU_PORF_SET_gc   = (0x01), /* Power-on reset flag - SET */
} CPU_PORF_t;

/* -CLKPCE */
typedef enum CPU_CLKPCE_enum
{
    CPU_CLKPCE_CLEAR_gc = (0x00), /* -CLKPCE - CLEAR */
    CPU_CLKPCE_SET_gc   = (0x80), /* -CLKPCE - SET */
} CPU_CLKPCE_t;

/* -CLKPS */
typedef enum CPU_CLKPS_enum
{
    CPU_CLKPS_VAL_0x00_gc = (0x00), /* 1 */
    CPU_CLKPS_VAL_0x01_gc = (0x01), /* 2 */
    CPU_CLKPS_VAL_0x02_gc = (0x02), /* 4 */
    CPU_CLKPS_VAL_0x03_gc = (0x03), /* 8 */
    CPU_CLKPS_VAL_0x04_gc = (0x04), /* 16 */
    CPU_CLKPS_VAL_0x05_gc = (0x05), /* 32 */
    CPU_CLKPS_VAL_0x06_gc = (0x06), /* 64 */
    CPU_CLKPS_VAL_0x07_gc = (0x07), /* 128 */
    CPU_CLKPS_VAL_0x08_gc = (0x08), /* 256 */
} CPU_CLKPS_t;

/* Sleep Mode Select bits */
typedef enum CPU_SM_enum
{
    CPU_SM_IDLE_gc     = (0x00<<1), /* Idle */
    CPU_SM_ADC_gc      = (0x01<<1), /* ADC Noise Reduction (If Available) */
    CPU_SM_PDOWN_gc    = (0x02<<1), /* Power Down */
    CPU_SM_VAL_0x03_gc = (0x03<<1), /* Reserved */
    CPU_SM_VAL_0x04_gc = (0x04<<1), /* Reserved */
    CPU_SM_VAL_0x05_gc = (0x05<<1), /* Reserved */
    CPU_SM_STDBY_gc    = (0x06<<1), /* Standby */
    CPU_SM_VAL_0x07_gc = (0x07<<1), /* Reserved */
} CPU_SM_t;

/* Sleep Enable */
typedef enum CPU_SE_enum
{
    CPU_SE_CLEAR_gc = (0x00), /* Sleep Enable - CLEAR */
    CPU_SE_SET_gc   = (0x01), /* Sleep Enable - SET */
} CPU_SE_t;

/* General Purpose IO Register 0 bit 7 */
typedef enum CPU_GPIOR07_enum
{
    CPU_GPIOR07_CLEAR_gc = (0x00), /* General Purpose IO Register 0 bit 7 - CLEAR */
    CPU_GPIOR07_SET_gc   = (0x80), /* General Purpose IO Register 0 bit 7 - SET */
} CPU_GPIOR07_t;

/* General Purpose IO Register 0 bit 6 */
typedef enum CPU_GPIOR06_enum
{
    CPU_GPIOR06_CLEAR_gc = (0x00), /* General Purpose IO Register 0 bit 6 - CLEAR */
    CPU_GPIOR06_SET_gc   = (0x40), /* General Purpose IO Register 0 bit 6 - SET */
} CPU_GPIOR06_t;

/* General Purpose IO Register 0 bit 5 */
typedef enum CPU_GPIOR05_enum
{
    CPU_GPIOR05_CLEAR_gc = (0x00), /* General Purpose IO Register 0 bit 5 - CLEAR */
    CPU_GPIOR05_SET_gc   = (0x20), /* General Purpose IO Register 0 bit 5 - SET */
} CPU_GPIOR05_t;

/* General Purpose IO Register 0 bit 4 */
typedef enum CPU_GPIOR04_enum
{
    CPU_GPIOR04_CLEAR_gc = (0x00), /* General Purpose IO Register 0 bit 4 - CLEAR */
    CPU_GPIOR04_SET_gc   = (0x10), /* General Purpose IO Register 0 bit 4 - SET */
} CPU_GPIOR04_t;

/* General Purpose IO Register 0 bit 3 */
typedef enum CPU_GPIOR03_enum
{
    CPU_GPIOR03_CLEAR_gc = (0x00), /* General Purpose IO Register 0 bit 3 - CLEAR */
    CPU_GPIOR03_SET_gc   = (0x08), /* General Purpose IO Register 0 bit 3 - SET */
} CPU_GPIOR03_t;

/* General Purpose IO Register 0 bit 2 */
typedef enum CPU_GPIOR02_enum
{
    CPU_GPIOR02_CLEAR_gc = (0x00), /* General Purpose IO Register 0 bit 2 - CLEAR */
    CPU_GPIOR02_SET_gc   = (0x04), /* General Purpose IO Register 0 bit 2 - SET */
} CPU_GPIOR02_t;

/* General Purpose IO Register 0 bit 1 */
typedef enum CPU_GPIOR01_enum
{
    CPU_GPIOR01_CLEAR_gc = (0x00), /* General Purpose IO Register 0 bit 1 - CLEAR */
    CPU_GPIOR01_SET_gc   = (0x02), /* General Purpose IO Register 0 bit 1 - SET */
} CPU_GPIOR01_t;

/* General Purpose IO Register 0 bit 0 */
typedef enum CPU_GPIOR00_enum
{
    CPU_GPIOR00_CLEAR_gc = (0x00), /* General Purpose IO Register 0 bit 0 - CLEAR */
    CPU_GPIOR00_SET_gc   = (0x01), /* General Purpose IO Register 0 bit 0 - SET */
} CPU_GPIOR00_t;

/* PLL Control And Status Register-PLLF */
#define CPU_PLLCSR_PLLF_gc(x) ((x<<2) & 0x3C)

/* PLL Enable */
typedef enum CPU_PLLE_enum
{
    CPU_PLLE_CLEAR_gc = (0x00), /* PLL Enable - CLEAR */
    CPU_PLLE_SET_gc   = (0x02), /* PLL Enable - SET */
} CPU_PLLE_t;

/* PLL Lock Detector */
typedef enum CPU_PLOCK_enum
{
    CPU_PLOCK_CLEAR_gc = (0x00), /* PLL Lock Detector - CLEAR */
    CPU_PLOCK_SET_gc   = (0x01), /* PLL Lock Detector - SET */
} CPU_PLOCK_t;

/* Power Reduction PSC2 */
typedef enum CPU_PRPSC2_enum
{
    CPU_PRPSC2_CLEAR_gc = (0x00), /* Power Reduction PSC2 - CLEAR */
    CPU_PRPSC2_SET_gc   = (0x80), /* Power Reduction PSC2 - SET */
} CPU_PRPSC2_t;

/* Power Reduction PSC0 */
typedef enum CPU_PRPSCR_enum
{
    CPU_PRPSCR_CLEAR_gc = (0x00), /* Power Reduction PSC0 - CLEAR */
    CPU_PRPSCR_SET_gc   = (0x20), /* Power Reduction PSC0 - SET */
} CPU_PRPSCR_t;

/* Power Reduction Timer/Counter1 */
typedef enum CPU_PRTIM1_enum
{
    CPU_PRTIM1_CLEAR_gc = (0x00), /* Power Reduction Timer/Counter1 - CLEAR */
    CPU_PRTIM1_SET_gc   = (0x10), /* Power Reduction Timer/Counter1 - SET */
} CPU_PRTIM1_t;

/* Power Reduction Serial Peripheral Interface */
typedef enum CPU_PRSPI_enum
{
    CPU_PRSPI_CLEAR_gc = (0x00), /* Power Reduction Serial Peripheral Interface - CLEAR */
    CPU_PRSPI_SET_gc   = (0x04), /* Power Reduction Serial Peripheral Interface - SET */
} CPU_PRSPI_t;

/* Power Reduction ADC */
typedef enum CPU_PRADC_enum
{
    CPU_PRADC_CLEAR_gc = (0x00), /* Power Reduction ADC - CLEAR */
    CPU_PRADC_SET_gc   = (0x01), /* Power Reduction ADC - SET */
} CPU_PRADC_t;

/* Clock Control Change Enable */
typedef enum CPU_CLKCCE_enum
{
    CPU_CLKCCE_CLEAR_gc = (0x00), /* Clock Control Change Enable - CLEAR */
    CPU_CLKCCE_SET_gc   = (0x80), /* Clock Control Change Enable - SET */
} CPU_CLKCCE_t;

/* Clock Ready Flag */
typedef enum CPU_CLKRDY_enum
{
    CPU_CLKRDY_CLEAR_gc = (0x00), /* Clock Ready Flag - CLEAR */
    CPU_CLKRDY_SET_gc   = (0x10), /* Clock Ready Flag - SET */
} CPU_CLKRDY_t;

/* Clock Control */
#define CPU_CLKCSR_CLKC_gc(x) (x & 0x0F)

/* Clock OUT */
typedef enum CPU_COUT_enum
{
    CPU_COUT_CLEAR_gc = (0x00), /* Clock OUT - CLEAR */
    CPU_COUT_SET_gc   = (0x40), /* Clock OUT - SET */
} CPU_COUT_t;

/* Clock Start up Time */
#define CPU_CLKSELR_CSUT_gc(x) ((x<<4) & 0x30)

/* Clock Source Select */
#define CPU_CLKSELR_CKSEL_gc(x) (x & 0x0F)

/*
--------------------------------------------------------------------------------
EEPROM - EEPROM
--------------------------------------------------------------------------------
*/

typedef struct EEPROM_struct
{
    register8_t rsv_0x00[60]; /* RESERVED REGISTER BLOCK */
    register8_t EECR;         /* EEPROM Control Register */
    register8_t EEDR;         /* EEPROM Data Register */
    _REGISTER16 (EEAR);       /* EEPROM Read/Write Access Bytes */
} EEPROM_t;


/* None Volatile Busy Memory Busy */
typedef enum EEPROM_NVMBSY_enum
{
    EEPROM_NVMBSY_CLEAR_gc = (0x00), /* None Volatile Busy Memory Busy - CLEAR */
    EEPROM_NVMBSY_SET_gc   = (0x80), /* None Volatile Busy Memory Busy - SET */
} EEPROM_NVMBSY_t;

/* EEPROM Page Access */
typedef enum EEPROM_EEPAGE_enum
{
    EEPROM_EEPAGE_CLEAR_gc = (0x00), /* EEPROM Page Access - CLEAR */
    EEPROM_EEPAGE_SET_gc   = (0x40), /* EEPROM Page Access - SET */
} EEPROM_EEPAGE_t;

/* EEPROM Programming Mode */
#define EEPROM_EECR_EEPM_gc(x) ((x<<4) & 0x30)

/* EEPROM Ready Interrupt Enable */
typedef enum EEPROM_EERIE_enum
{
    EEPROM_EERIE_CLEAR_gc = (0x00), /* EEPROM Ready Interrupt Enable - CLEAR */
    EEPROM_EERIE_SET_gc   = (0x08), /* EEPROM Ready Interrupt Enable - SET */
} EEPROM_EERIE_t;

/* EEPROM Master Write Enable */
typedef enum EEPROM_EEMWE_enum
{
    EEPROM_EEMWE_CLEAR_gc = (0x00), /* EEPROM Master Write Enable - CLEAR */
    EEPROM_EEMWE_SET_gc   = (0x04), /* EEPROM Master Write Enable - SET */
} EEPROM_EEMWE_t;

/* EEPROM Write Enable */
typedef enum EEPROM_EEWE_enum
{
    EEPROM_EEWE_CLEAR_gc = (0x00), /* EEPROM Write Enable - CLEAR */
    EEPROM_EEWE_SET_gc   = (0x02), /* EEPROM Write Enable - SET */
} EEPROM_EEWE_t;

/* EEPROM Read Enable */
typedef enum EEPROM_EERE_enum
{
    EEPROM_EERE_CLEAR_gc = (0x00), /* EEPROM Read Enable - CLEAR */
    EEPROM_EERE_SET_gc   = (0x01), /* EEPROM Read Enable - SET */
} EEPROM_EERE_t;

/*
--------------------------------------------------------------------------------
PSC - Power Stage Controller
--------------------------------------------------------------------------------
*/

typedef struct PSC0_struct
{
    register8_t rsv_0x00[47]; /* RESERVED REGISTER BLOCK */
    register8_t PIM0;         /* PSC0 Interrupt Mask Register */
    register8_t PIFR0;        /* PSC0 Interrupt Flag Register */
    register8_t PCNF0;        /* PSC 0 Configuration Register */
    register8_t PCTL0;        /* PSC 0 Control Register */
    register8_t rsv_0x33[15]; /* RESERVED REGISTER BLOCK */
    _REGISTER16 (OCR0SB);     /* Output Compare SB Register  */
    register8_t rsv_0x43;     /* RESERVED REGISTER */
    _REGISTER16 (OCR0RB);     /* Output Compare RB Register  */
    register8_t rsv_0x45[5];  /* RESERVED REGISTER BLOCK */
    _REGISTER16 (OCR0RA);     /* Output Compare RA Register  */
    register8_t rsv_0x4B[21]; /* RESERVED REGISTER BLOCK */
    _REGISTER16 (OCR0SA);     /* Output Compare SA Register  */
    register8_t rsv_0x61;     /* RESERVED REGISTER */
    register8_t PFRC0A;       /* PSC 0 Input A Control */
    register8_t PFRC0B;       /* PSC 0 Input B Control */
    register8_t rsv_0x64[4];  /* RESERVED REGISTER BLOCK */
    _REGISTER16 (PICR0);      /* PSC 0 Input Capture Register  */
    register8_t rsv_0x69;     /* RESERVED REGISTER */
    register8_t PSOC0;        /* PSC0 Synchro and Output Configuration */
} PSC0_t;


/*
--------------------------------------------------------------------------------
PSC - Power Stage Controller
--------------------------------------------------------------------------------
*/

typedef struct PSC2_struct
{
    register8_t rsv_0x00[51]; /* RESERVED REGISTER BLOCK */
    register8_t PIM2;         /* PSC2 Interrupt Mask Register */
    register8_t PIFR2;        /* PSC2 Interrupt Flag Register */
    register8_t PCNF2;        /* PSC 2 Configuration Register */
    register8_t PCTL2;        /* PSC 2 Control Register */
    register8_t rsv_0x37[15]; /* RESERVED REGISTER BLOCK */
    _REGISTER16 (OCR2SB);     /* Output Compare SB Register  */
    register8_t rsv_0x47;     /* RESERVED REGISTER */
    _REGISTER16 (OCR2RB);     /* Output Compare RB Register  */
    register8_t rsv_0x49[5];  /* RESERVED REGISTER BLOCK */
    _REGISTER16 (OCR2RA);     /* Output Compare RA Register  */
    register8_t rsv_0x4F[21]; /* RESERVED REGISTER BLOCK */
    _REGISTER16 (OCR2SA);     /* Output Compare SA Register  */
    register8_t rsv_0x65;     /* RESERVED REGISTER */
    register8_t PFRC2A;       /* PSC 2 Input B Control */
    register8_t PFRC2B;       /* PSC 2 Input B Control */
    register8_t rsv_0x68[4];  /* RESERVED REGISTER BLOCK */
    _REGISTER16 (PICR2);      /* PSC 2 Input Capture Register */
    register8_t rsv_0x6D;     /* RESERVED REGISTER */
    register8_t PSOC2;        /* PSC2 Synchro and Output Configuration */
    register8_t POM2;         /* PSC 2 Output Matrix */
    register8_t PCNFE2;       /* PSC 2 Enhanced Configuration Register */
    register8_t PASDLY2;      /* Analog Synchronization Delay Register */
} PSC2_t;


/* PSC 0 Capture Software Trigger Bit */
typedef enum PSC0_PCST0_enum
{
    PSC0_PCST0_CLEAR_gc = (0x00)  , /* PSC 0 Capture Software Trigger Bit - CLEAR */
    PSC0_PCST0_SET_gc   = (0x8000), /* PSC 0 Capture Software Trigger Bit - SET */
} PSC0_PCST0_t;

/* PSC 0 Input Capture Bytes */
#define PSC0_PICR0_PICR0_gc(x) (x & 0xFFF)

/* PSC 0 Capture Enable Input Part B */
typedef enum PSC0_PCAE0B_enum
{
    PSC0_PCAE0B_CLEAR_gc = (0x00), /* PSC 0 Capture Enable Input Part B - CLEAR */
    PSC0_PCAE0B_SET_gc   = (0x80), /* PSC 0 Capture Enable Input Part B - SET */
} PSC0_PCAE0B_t;

/* PSC 0 Input Select for Part B */
typedef enum PSC0_PISEL0B_enum
{
    PSC0_PISEL0B_CLEAR_gc = (0x00), /* PSC 0 Input Select for Part B - CLEAR */
    PSC0_PISEL0B_SET_gc   = (0x40), /* PSC 0 Input Select for Part B - SET */
} PSC0_PISEL0B_t;

/* PSC 0 Edge Level Selector on Input Part B */
typedef enum PSC0_PELEV0B_enum
{
    PSC0_PELEV0B_CLEAR_gc = (0x00), /* PSC 0 Edge Level Selector on Input Part B - CLEAR */
    PSC0_PELEV0B_SET_gc   = (0x20), /* PSC 0 Edge Level Selector on Input Part B - SET */
} PSC0_PELEV0B_t;

/* PSC 0 Filter Enable on Input Part B */
typedef enum PSC0_PFLTE0B_enum
{
    PSC0_PFLTE0B_CLEAR_gc = (0x00), /* PSC 0 Filter Enable on Input Part B - CLEAR */
    PSC0_PFLTE0B_SET_gc   = (0x10), /* PSC 0 Filter Enable on Input Part B - SET */
} PSC0_PFLTE0B_t;

/* PSC 0 Retrigger and Fault Mode for Part B */
#define PSC0_PFRC0B_PRFM0B_gc(x) (x & 0x0F)

/* PSC 0 Capture Enable Input Part A */
typedef enum PSC0_PCAE0A_enum
{
    PSC0_PCAE0A_CLEAR_gc = (0x00), /* PSC 0 Capture Enable Input Part A - CLEAR */
    PSC0_PCAE0A_SET_gc   = (0x80), /* PSC 0 Capture Enable Input Part A - SET */
} PSC0_PCAE0A_t;

/* PSC 0 Input Select for Part A */
typedef enum PSC0_PISEL0A_enum
{
    PSC0_PISEL0A_CLEAR_gc = (0x00), /* PSC 0 Input Select for Part A - CLEAR */
    PSC0_PISEL0A_SET_gc   = (0x40), /* PSC 0 Input Select for Part A - SET */
} PSC0_PISEL0A_t;

/* PSC 0 Edge Level Selector on Input Part A */
typedef enum PSC0_PELEV0A_enum
{
    PSC0_PELEV0A_CLEAR_gc = (0x00), /* PSC 0 Edge Level Selector on Input Part A - CLEAR */
    PSC0_PELEV0A_SET_gc   = (0x20), /* PSC 0 Edge Level Selector on Input Part A - SET */
} PSC0_PELEV0A_t;

/* PSC 0 Filter Enable on Input Part A */
typedef enum PSC0_PFLTE0A_enum
{
    PSC0_PFLTE0A_CLEAR_gc = (0x00), /* PSC 0 Filter Enable on Input Part A - CLEAR */
    PSC0_PFLTE0A_SET_gc   = (0x10), /* PSC 0 Filter Enable on Input Part A - SET */
} PSC0_PFLTE0A_t;

/* PSC 0 Retrigger and Fault Mode for Part A */
#define PSC0_PFRC0A_PRFM0A_gc(x) (x & 0x0F)

/* PSC 0 Prescaler Selects */
#define PSC0_PCTL0_PPRE0_gc(x) ((x<<6) & 0xC0)

/* PSC 0 Balance Flank Width Modulation */
#define PSC0_PCTL0_PBFM0_gc(x) ((x<<2) & 0x24)

/* PSC 0 Asynchronous Output Control B */
typedef enum PSC0_PAOC0B_enum
{
    PSC0_PAOC0B_CLEAR_gc = (0x00), /* PSC 0 Asynchronous Output Control B - CLEAR */
    PSC0_PAOC0B_SET_gc   = (0x10), /* PSC 0 Asynchronous Output Control B - SET */
} PSC0_PAOC0B_t;

/* PSC 0 Asynchronous Output Control A */
typedef enum PSC0_PAOC0A_enum
{
    PSC0_PAOC0A_CLEAR_gc = (0x00), /* PSC 0 Asynchronous Output Control A - CLEAR */
    PSC0_PAOC0A_SET_gc   = (0x08), /* PSC 0 Asynchronous Output Control A - SET */
} PSC0_PAOC0A_t;

/* PSC0 Complete Cycle */
typedef enum PSC0_PCCYC0_enum
{
    PSC0_PCCYC0_CLEAR_gc = (0x00), /* PSC0 Complete Cycle - CLEAR */
    PSC0_PCCYC0_SET_gc   = (0x02), /* PSC0 Complete Cycle - SET */
} PSC0_PCCYC0_t;

/* PSC 0 Run */
typedef enum PSC0_PRUN0_enum
{
    PSC0_PRUN0_CLEAR_gc = (0x00), /* PSC 0 Run - CLEAR */
    PSC0_PRUN0_SET_gc   = (0x01), /* PSC 0 Run - SET */
} PSC0_PRUN0_t;

/* PSC 0 Fifty */
typedef enum PSC0_PFIFTY0_enum
{
    PSC0_PFIFTY0_CLEAR_gc = (0x00), /* PSC 0 Fifty - CLEAR */
    PSC0_PFIFTY0_SET_gc   = (0x80), /* PSC 0 Fifty - SET */
} PSC0_PFIFTY0_t;

/* PSC 0 Autolock */
typedef enum PSC0_PALOCK0_enum
{
    PSC0_PALOCK0_CLEAR_gc = (0x00), /* PSC 0 Autolock - CLEAR */
    PSC0_PALOCK0_SET_gc   = (0x40), /* PSC 0 Autolock - SET */
} PSC0_PALOCK0_t;

/* PSC 0 Lock */
typedef enum PSC0_PLOCK0_enum
{
    PSC0_PLOCK0_CLEAR_gc = (0x00), /* PSC 0 Lock - CLEAR */
    PSC0_PLOCK0_SET_gc   = (0x20), /* PSC 0 Lock - SET */
} PSC0_PLOCK0_t;

/* PSC 0 Mode */
#define PSC0_PCNF0_PMODE0_gc(x) ((x<<3) & 0x18)

/* PSC 0 Output Polarity */
typedef enum PSC0_POP0_enum
{
    PSC0_POP0_CLEAR_gc = (0x00), /* PSC 0 Output Polarity - CLEAR */
    PSC0_POP0_SET_gc   = (0x04), /* PSC 0 Output Polarity - SET */
} PSC0_POP0_t;

/* PSC 0 Input Clock Select */
typedef enum PSC0_PCLKSEL0_enum
{
    PSC0_PCLKSEL0_CLEAR_gc = (0x00), /* PSC 0 Input Clock Select - CLEAR */
    PSC0_PCLKSEL0_SET_gc   = (0x02), /* PSC 0 Input Clock Select - SET */
} PSC0_PCLKSEL0_t;

/* PSC Input Select */
typedef enum PSC0_PISEL0A1_enum
{
    PSC0_PISEL0A1_CLEAR_gc = (0x00), /* PSC Input Select - CLEAR */
    PSC0_PISEL0A1_SET_gc   = (0x80), /* PSC Input Select - SET */
} PSC0_PISEL0A1_t;

/* PSC Input Select */
typedef enum PSC0_PISEL0B1_enum
{
    PSC0_PISEL0B1_CLEAR_gc = (0x00), /* PSC Input Select - CLEAR */
    PSC0_PISEL0B1_SET_gc   = (0x40), /* PSC Input Select - SET */
} PSC0_PISEL0B1_t;

/* Synchronisation out for ADC selection */
#define PSC0_PSOC0_PSYNC0_gc(x) ((x<<4) & 0x30)

/* PSCOUT01 Output Enable */
typedef enum PSC0_POEN0B_enum
{
    PSC0_POEN0B_CLEAR_gc = (0x00), /* PSCOUT01 Output Enable - CLEAR */
    PSC0_POEN0B_SET_gc   = (0x04), /* PSCOUT01 Output Enable - SET */
} PSC0_POEN0B_t;

/* PSCOUT00 Output Enable */
typedef enum PSC0_POEN0A_enum
{
    PSC0_POEN0A_CLEAR_gc = (0x00), /* PSCOUT00 Output Enable - CLEAR */
    PSC0_POEN0A_SET_gc   = (0x01), /* PSCOUT00 Output Enable - SET */
} PSC0_POEN0A_t;

/* External Event B Interrupt Enable */
typedef enum PSC0_PEVE0B_enum
{
    PSC0_PEVE0B_CLEAR_gc = (0x00), /* External Event B Interrupt Enable - CLEAR */
    PSC0_PEVE0B_SET_gc   = (0x10), /* External Event B Interrupt Enable - SET */
} PSC0_PEVE0B_t;

/* External Event A Interrupt Enable */
typedef enum PSC0_PEVE0A_enum
{
    PSC0_PEVE0A_CLEAR_gc = (0x00), /* External Event A Interrupt Enable - CLEAR */
    PSC0_PEVE0A_SET_gc   = (0x08), /* External Event A Interrupt Enable - SET */
} PSC0_PEVE0A_t;

/* End of Enhanced Cycle Enable */
typedef enum PSC0_PEOEPE0_enum
{
    PSC0_PEOEPE0_CLEAR_gc = (0x00), /* End of Enhanced Cycle Enable - CLEAR */
    PSC0_PEOEPE0_SET_gc   = (0x02), /* End of Enhanced Cycle Enable - SET */
} PSC0_PEOEPE0_t;

/* End of Cycle Interrupt Enable */
typedef enum PSC0_PEOPE0_enum
{
    PSC0_PEOPE0_CLEAR_gc = (0x00), /* End of Cycle Interrupt Enable - CLEAR */
    PSC0_PEOPE0_SET_gc   = (0x01), /* End of Cycle Interrupt Enable - SET */
} PSC0_PEOPE0_t;

/* PSC 0 Output A Activity */
typedef enum PSC0_POAC0B_enum
{
    PSC0_POAC0B_CLEAR_gc = (0x00), /* PSC 0 Output A Activity - CLEAR */
    PSC0_POAC0B_SET_gc   = (0x80), /* PSC 0 Output A Activity - SET */
} PSC0_POAC0B_t;

/* PSC 0 Output A Activity */
typedef enum PSC0_POAC0A_enum
{
    PSC0_POAC0A_CLEAR_gc = (0x00), /* PSC 0 Output A Activity - CLEAR */
    PSC0_POAC0A_SET_gc   = (0x40), /* PSC 0 Output A Activity - SET */
} PSC0_POAC0A_t;

/* External Event B Interrupt */
typedef enum PSC0_PEV0B_enum
{
    PSC0_PEV0B_CLEAR_gc = (0x00), /* External Event B Interrupt - CLEAR */
    PSC0_PEV0B_SET_gc   = (0x10), /* External Event B Interrupt - SET */
} PSC0_PEV0B_t;

/* External Event A Interrupt */
typedef enum PSC0_PEV0A_enum
{
    PSC0_PEV0A_CLEAR_gc = (0x00), /* External Event A Interrupt - CLEAR */
    PSC0_PEV0A_SET_gc   = (0x08), /* External Event A Interrupt - SET */
} PSC0_PEV0A_t;

/* Ramp Number */
#define PSC0_PIFR0_PRN0_gc(x) ((x<<1) & 0x06)

/* End of PSC0 Interrupt */
typedef enum PSC0_PEOP0_enum
{
    PSC0_PEOP0_CLEAR_gc = (0x00), /* End of PSC0 Interrupt - CLEAR */
    PSC0_PEOP0_SET_gc   = (0x01), /* End of PSC0 Interrupt - SET */
} PSC0_PEOP0_t;

/* PSC 2 Capture Software Trigger Bit */
typedef enum PSC2_PCST2_enum
{
    PSC2_PCST2_CLEAR_gc = (0x00)  , /* PSC 2 Capture Software Trigger Bit - CLEAR */
    PSC2_PCST2_SET_gc   = (0x8000), /* PSC 2 Capture Software Trigger Bit - SET */
} PSC2_PCST2_t;

/* PSC 2 Input Capture Bytes */
#define PSC2_PICR2_PICR2_gc(x) (x & 0xFFF)

/* PSC 2 Capture Enable Input Part B */
typedef enum PSC2_PCAE2B_enum
{
    PSC2_PCAE2B_CLEAR_gc = (0x00), /* PSC 2 Capture Enable Input Part B - CLEAR */
    PSC2_PCAE2B_SET_gc   = (0x80), /* PSC 2 Capture Enable Input Part B - SET */
} PSC2_PCAE2B_t;

/* PSC 2 Input Select for Part B */
typedef enum PSC2_PISEL2B_enum
{
    PSC2_PISEL2B_CLEAR_gc = (0x00), /* PSC 2 Input Select for Part B - CLEAR */
    PSC2_PISEL2B_SET_gc   = (0x40), /* PSC 2 Input Select for Part B - SET */
} PSC2_PISEL2B_t;

/* PSC 2 Edge Level Selector on Input Part B */
typedef enum PSC2_PELEV2B_enum
{
    PSC2_PELEV2B_CLEAR_gc = (0x00), /* PSC 2 Edge Level Selector on Input Part B - CLEAR */
    PSC2_PELEV2B_SET_gc   = (0x20), /* PSC 2 Edge Level Selector on Input Part B - SET */
} PSC2_PELEV2B_t;

/* PSC 2 Filter Enable on Input Part B */
typedef enum PSC2_PFLTE2B_enum
{
    PSC2_PFLTE2B_CLEAR_gc = (0x00), /* PSC 2 Filter Enable on Input Part B - CLEAR */
    PSC2_PFLTE2B_SET_gc   = (0x10), /* PSC 2 Filter Enable on Input Part B - SET */
} PSC2_PFLTE2B_t;

/* PSC 2 Retrigger and Fault Mode for Part B */
#define PSC2_PFRC2B_PRFM2B_gc(x) (x & 0x0F)

/* PSC 2 Capture Enable Input Part A */
typedef enum PSC2_PCAE2A_enum
{
    PSC2_PCAE2A_CLEAR_gc = (0x00), /* PSC 2 Capture Enable Input Part A - CLEAR */
    PSC2_PCAE2A_SET_gc   = (0x80), /* PSC 2 Capture Enable Input Part A - SET */
} PSC2_PCAE2A_t;

/* PSC 2 Input Select for Part A */
typedef enum PSC2_PISEL2A_enum
{
    PSC2_PISEL2A_CLEAR_gc = (0x00), /* PSC 2 Input Select for Part A - CLEAR */
    PSC2_PISEL2A_SET_gc   = (0x40), /* PSC 2 Input Select for Part A - SET */
} PSC2_PISEL2A_t;

/* PSC 2 Edge Level Selector on Input Part A */
typedef enum PSC2_PELEV2A_enum
{
    PSC2_PELEV2A_CLEAR_gc = (0x00), /* PSC 2 Edge Level Selector on Input Part A - CLEAR */
    PSC2_PELEV2A_SET_gc   = (0x20), /* PSC 2 Edge Level Selector on Input Part A - SET */
} PSC2_PELEV2A_t;

/* PSC 2 Filter Enable on Input Part A */
typedef enum PSC2_PFLTE2A_enum
{
    PSC2_PFLTE2A_CLEAR_gc = (0x00), /* PSC 2 Filter Enable on Input Part A - CLEAR */
    PSC2_PFLTE2A_SET_gc   = (0x10), /* PSC 2 Filter Enable on Input Part A - SET */
} PSC2_PFLTE2A_t;

/* PSC 2 Retrigger and Fault Mode for Part A */
#define PSC2_PFRC2A_PRFM2A_gc(x) (x & 0x0F)

/* PSC 2 Prescaler Selects */
#define PSC2_PCTL2_PPRE2_gc(x) ((x<<6) & 0xC0)

/* Balance Flank Width Modulation */
typedef enum PSC2_PBFM2_enum
{
    PSC2_PBFM2_CLEAR_gc = (0x00), /* Balance Flank Width Modulation - CLEAR */
    PSC2_PBFM2_SET_gc   = (0x20), /* Balance Flank Width Modulation - SET */
} PSC2_PBFM2_t;

/* PSC 2 Asynchronous Output Control B */
typedef enum PSC2_PAOC2B_enum
{
    PSC2_PAOC2B_CLEAR_gc = (0x00), /* PSC 2 Asynchronous Output Control B - CLEAR */
    PSC2_PAOC2B_SET_gc   = (0x10), /* PSC 2 Asynchronous Output Control B - SET */
} PSC2_PAOC2B_t;

/* PSC 2 Asynchronous Output Control A */
typedef enum PSC2_PAOC2A_enum
{
    PSC2_PAOC2A_CLEAR_gc = (0x00), /* PSC 2 Asynchronous Output Control A - CLEAR */
    PSC2_PAOC2A_SET_gc   = (0x08), /* PSC 2 Asynchronous Output Control A - SET */
} PSC2_PAOC2A_t;

/* PSC2 Auto Run */
typedef enum PSC2_PARUN2_enum
{
    PSC2_PARUN2_CLEAR_gc = (0x00), /* PSC2 Auto Run - CLEAR */
    PSC2_PARUN2_SET_gc   = (0x04), /* PSC2 Auto Run - SET */
} PSC2_PARUN2_t;

/* PSC2 Complete Cycle */
typedef enum PSC2_PCCYC2_enum
{
    PSC2_PCCYC2_CLEAR_gc = (0x00), /* PSC2 Complete Cycle - CLEAR */
    PSC2_PCCYC2_SET_gc   = (0x02), /* PSC2 Complete Cycle - SET */
} PSC2_PCCYC2_t;

/* PSC 2 Run */
typedef enum PSC2_PRUN2_enum
{
    PSC2_PRUN2_CLEAR_gc = (0x00), /* PSC 2 Run - CLEAR */
    PSC2_PRUN2_SET_gc   = (0x01), /* PSC 2 Run - SET */
} PSC2_PRUN2_t;

/* PSC 2 Fifty */
typedef enum PSC2_PFIFTY2_enum
{
    PSC2_PFIFTY2_CLEAR_gc = (0x00), /* PSC 2 Fifty - CLEAR */
    PSC2_PFIFTY2_SET_gc   = (0x80), /* PSC 2 Fifty - SET */
} PSC2_PFIFTY2_t;

/* PSC 2 Autolock */
typedef enum PSC2_PALOCK2_enum
{
    PSC2_PALOCK2_CLEAR_gc = (0x00), /* PSC 2 Autolock - CLEAR */
    PSC2_PALOCK2_SET_gc   = (0x40), /* PSC 2 Autolock - SET */
} PSC2_PALOCK2_t;

/* PSC 2 Lock */
typedef enum PSC2_PLOCK2_enum
{
    PSC2_PLOCK2_CLEAR_gc = (0x00), /* PSC 2 Lock - CLEAR */
    PSC2_PLOCK2_SET_gc   = (0x20), /* PSC 2 Lock - SET */
} PSC2_PLOCK2_t;

/* PSC 2 Mode */
#define PSC2_PCNF2_PMODE2_gc(x) ((x<<3) & 0x18)

/* PSC 2 Output Polarity */
typedef enum PSC2_POP2_enum
{
    PSC2_POP2_CLEAR_gc = (0x00), /* PSC 2 Output Polarity - CLEAR */
    PSC2_POP2_SET_gc   = (0x04), /* PSC 2 Output Polarity - SET */
} PSC2_POP2_t;

/* PSC 2 Input Clock Select */
typedef enum PSC2_PCLKSEL2_enum
{
    PSC2_PCLKSEL2_CLEAR_gc = (0x00), /* PSC 2 Input Clock Select - CLEAR */
    PSC2_PCLKSEL2_SET_gc   = (0x02), /* PSC 2 Input Clock Select - SET */
} PSC2_PCLKSEL2_t;

/* PSC 2 Output Matrix Enable */
typedef enum PSC2_POME2_enum
{
    PSC2_POME2_CLEAR_gc = (0x00), /* PSC 2 Output Matrix Enable - CLEAR */
    PSC2_POME2_SET_gc   = (0x01), /* PSC 2 Output Matrix Enable - SET */
} PSC2_POME2_t;

/* PSC 2 Enhanced Configuration Register-PASDLK2 */
#define PSC2_PCNFE2_PASDLK2_gc(x) ((x<<5) & 0xE0)

/* PSC 2 Enhanced Configuration Register-PBFM21 */
typedef enum PSC2_PBFM21_enum
{
    PSC2_PBFM21_CLEAR_gc = (0x00), /* PSC 2 Enhanced Configuration Register-PBFM21 - CLEAR */
    PSC2_PBFM21_SET_gc   = (0x10), /* PSC 2 Enhanced Configuration Register-PBFM21 - SET */
} PSC2_PBFM21_t;

/* PSC 2 Enhanced Configuration Register-PELEV2A1 */
typedef enum PSC2_PELEV2A1_enum
{
    PSC2_PELEV2A1_CLEAR_gc = (0x00), /* PSC 2 Enhanced Configuration Register-PELEV2A1 - CLEAR */
    PSC2_PELEV2A1_SET_gc   = (0x08), /* PSC 2 Enhanced Configuration Register-PELEV2A1 - SET */
} PSC2_PELEV2A1_t;

/* PSC 2 Enhanced Configuration Register-PELEV2B1 */
typedef enum PSC2_PELEV2B1_enum
{
    PSC2_PELEV2B1_CLEAR_gc = (0x00), /* PSC 2 Enhanced Configuration Register-PELEV2B1 - CLEAR */
    PSC2_PELEV2B1_SET_gc   = (0x04), /* PSC 2 Enhanced Configuration Register-PELEV2B1 - SET */
} PSC2_PELEV2B1_t;

/* PSC 2 Enhanced Configuration Register-PISEL2A1 */
typedef enum PSC2_PISEL2A1_enum
{
    PSC2_PISEL2A1_CLEAR_gc = (0x00), /* PSC 2 Enhanced Configuration Register-PISEL2A1 - CLEAR */
    PSC2_PISEL2A1_SET_gc   = (0x02), /* PSC 2 Enhanced Configuration Register-PISEL2A1 - SET */
} PSC2_PISEL2A1_t;

/* PSC 2 Enhanced Configuration Register-PISEL2B1 */
typedef enum PSC2_PISEL2B1_enum
{
    PSC2_PISEL2B1_CLEAR_gc = (0x00), /* PSC 2 Enhanced Configuration Register-PISEL2B1 - CLEAR */
    PSC2_PISEL2B1_SET_gc   = (0x01), /* PSC 2 Enhanced Configuration Register-PISEL2B1 - SET */
} PSC2_PISEL2B1_t;

/* Output Matrix Output B Ramps */
#define PSC2_POM2_POMV2B_gc(x) ((x<<4) & 0xF0)

/* Output Matrix Output A Ramps */
#define PSC2_POM2_POMV2A_gc(x) (x & 0x0F)

/* PSC 2 Output 23 Select */
#define PSC2_PSOC2_POS2_gc(x) ((x<<6) & 0xC0)

/* Synchronization Out for ADC Selection */
#define PSC2_PSOC2_PSYNC2_gc(x) ((x<<4) & 0x30)

/* PSCOUT23 Output Enable */
typedef enum PSC2_POEN2D_enum
{
    PSC2_POEN2D_CLEAR_gc = (0x00), /* PSCOUT23 Output Enable - CLEAR */
    PSC2_POEN2D_SET_gc   = (0x08), /* PSCOUT23 Output Enable - SET */
} PSC2_POEN2D_t;

/* PSCOUT21 Output Enable */
typedef enum PSC2_POEN2B_enum
{
    PSC2_POEN2B_CLEAR_gc = (0x00), /* PSCOUT21 Output Enable - CLEAR */
    PSC2_POEN2B_SET_gc   = (0x04), /* PSCOUT21 Output Enable - SET */
} PSC2_POEN2B_t;

/* PSCOUT22 Output Enable */
typedef enum PSC2_POEN2C_enum
{
    PSC2_POEN2C_CLEAR_gc = (0x00), /* PSCOUT22 Output Enable - CLEAR */
    PSC2_POEN2C_SET_gc   = (0x02), /* PSCOUT22 Output Enable - SET */
} PSC2_POEN2C_t;

/* PSCOUT20 Output Enable */
typedef enum PSC2_POEN2A_enum
{
    PSC2_POEN2A_CLEAR_gc = (0x00), /* PSCOUT20 Output Enable - CLEAR */
    PSC2_POEN2A_SET_gc   = (0x01), /* PSCOUT20 Output Enable - SET */
} PSC2_POEN2A_t;

/* PSC 2 Synchro Error Interrupt Enable */
typedef enum PSC2_PSEIE2_enum
{
    PSC2_PSEIE2_CLEAR_gc = (0x00), /* PSC 2 Synchro Error Interrupt Enable - CLEAR */
    PSC2_PSEIE2_SET_gc   = (0x20), /* PSC 2 Synchro Error Interrupt Enable - SET */
} PSC2_PSEIE2_t;

/* External Event B Interrupt Enable */
typedef enum PSC2_PEVE2B_enum
{
    PSC2_PEVE2B_CLEAR_gc = (0x00), /* External Event B Interrupt Enable - CLEAR */
    PSC2_PEVE2B_SET_gc   = (0x10), /* External Event B Interrupt Enable - SET */
} PSC2_PEVE2B_t;

/* External Event A Interrupt Enable */
typedef enum PSC2_PEVE2A_enum
{
    PSC2_PEVE2A_CLEAR_gc = (0x00), /* External Event A Interrupt Enable - CLEAR */
    PSC2_PEVE2A_SET_gc   = (0x08), /* External Event A Interrupt Enable - SET */
} PSC2_PEVE2A_t;

/* End of Enhanced Cycle Interrupt Enable */
typedef enum PSC2_PEOEPE2_enum
{
    PSC2_PEOEPE2_CLEAR_gc = (0x00), /* End of Enhanced Cycle Interrupt Enable - CLEAR */
    PSC2_PEOEPE2_SET_gc   = (0x02), /* End of Enhanced Cycle Interrupt Enable - SET */
} PSC2_PEOEPE2_t;

/* End of Cycle Interrupt Enable */
typedef enum PSC2_PEOPE2_enum
{
    PSC2_PEOPE2_CLEAR_gc = (0x00), /* End of Cycle Interrupt Enable - CLEAR */
    PSC2_PEOPE2_SET_gc   = (0x01), /* End of Cycle Interrupt Enable - SET */
} PSC2_PEOPE2_t;

/* PSC 2 Output A Activity */
typedef enum PSC2_POAC2B_enum
{
    PSC2_POAC2B_CLEAR_gc = (0x00), /* PSC 2 Output A Activity - CLEAR */
    PSC2_POAC2B_SET_gc   = (0x80), /* PSC 2 Output A Activity - SET */
} PSC2_POAC2B_t;

/* PSC 2 Output A Activity */
typedef enum PSC2_POAC2A_enum
{
    PSC2_POAC2A_CLEAR_gc = (0x00), /* PSC 2 Output A Activity - CLEAR */
    PSC2_POAC2A_SET_gc   = (0x40), /* PSC 2 Output A Activity - SET */
} PSC2_POAC2A_t;

/* PSC 2 Synchro Error Interrupt */
typedef enum PSC2_PSEI2_enum
{
    PSC2_PSEI2_CLEAR_gc = (0x00), /* PSC 2 Synchro Error Interrupt - CLEAR */
    PSC2_PSEI2_SET_gc   = (0x20), /* PSC 2 Synchro Error Interrupt - SET */
} PSC2_PSEI2_t;

/* External Event B Interrupt */
typedef enum PSC2_PEV2B_enum
{
    PSC2_PEV2B_CLEAR_gc = (0x00), /* External Event B Interrupt - CLEAR */
    PSC2_PEV2B_SET_gc   = (0x10), /* External Event B Interrupt - SET */
} PSC2_PEV2B_t;

/* External Event A Interrupt */
typedef enum PSC2_PEV2A_enum
{
    PSC2_PEV2A_CLEAR_gc = (0x00), /* External Event A Interrupt - CLEAR */
    PSC2_PEV2A_SET_gc   = (0x08), /* External Event A Interrupt - SET */
} PSC2_PEV2A_t;

/* Ramp Number */
#define PSC2_PIFR2_PRN2_gc(x) ((x<<1) & 0x06)

/* End of PSC2 Interrupt */
typedef enum PSC2_PEOP2_enum
{
    PSC2_PEOP2_CLEAR_gc = (0x00), /* End of PSC2 Interrupt - CLEAR */
    PSC2_PEOP2_SET_gc   = (0x01), /* End of PSC2 Interrupt - SET */
} PSC2_PEOP2_t;

/*
--------------------------------------------------------------------------------
TC16 - Timer/Counter, 16-bit
--------------------------------------------------------------------------------
*/

typedef struct TC1_struct
{
    register8_t rsv_0x00[33]; /* RESERVED REGISTER BLOCK */
    register8_t TIMSK1;       /* Timer/Counter Interrupt Mask Register */
    register8_t TIFR1;        /* Timer/Counter Interrupt Flag register */
    register8_t rsv_0x23[55]; /* RESERVED REGISTER BLOCK */
    _REGISTER16 (TCNT1);      /* Timer/Counter1 Bytes */
    register8_t rsv_0x5B[47]; /* RESERVED REGISTER BLOCK */
    register8_t TCCR1B;       /* Timer/Counter1 Control Register B */
    register8_t rsv_0x8B;     /* RESERVED REGISTER */
    _REGISTER16 (ICR1);       /* Timer/Counter1 Input Capture Register Bytes */
} TC1_t;


/* Timer/Counter1 Input Capture Interrupt Enable */
typedef enum TC1_ICIE1_enum
{
    TC1_ICIE1_CLEAR_gc = (0x00), /* Timer/Counter1 Input Capture Interrupt Enable - CLEAR */
    TC1_ICIE1_SET_gc   = (0x20), /* Timer/Counter1 Input Capture Interrupt Enable - SET */
} TC1_ICIE1_t;

/* Timer/Counter1 Overflow Interrupt Enable */
typedef enum TC1_TOIE1_enum
{
    TC1_TOIE1_CLEAR_gc = (0x00), /* Timer/Counter1 Overflow Interrupt Enable - CLEAR */
    TC1_TOIE1_SET_gc   = (0x01), /* Timer/Counter1 Overflow Interrupt Enable - SET */
} TC1_TOIE1_t;

/* Input Capture Flag 1 */
typedef enum TC1_ICF1_enum
{
    TC1_ICF1_CLEAR_gc = (0x00), /* Input Capture Flag 1 - CLEAR */
    TC1_ICF1_SET_gc   = (0x20), /* Input Capture Flag 1 - SET */
} TC1_ICF1_t;

/* Timer/Counter1 Overflow Flag */
typedef enum TC1_TOV1_enum
{
    TC1_TOV1_CLEAR_gc = (0x00), /* Timer/Counter1 Overflow Flag - CLEAR */
    TC1_TOV1_SET_gc   = (0x01), /* Timer/Counter1 Overflow Flag - SET */
} TC1_TOV1_t;

/* Input Capture 1 Noise Canceler */
typedef enum TC1_ICNC1_enum
{
    TC1_ICNC1_CLEAR_gc = (0x00), /* Input Capture 1 Noise Canceler - CLEAR */
    TC1_ICNC1_SET_gc   = (0x80), /* Input Capture 1 Noise Canceler - SET */
} TC1_ICNC1_t;

/* Input Capture 1 Edge Select */
typedef enum TC1_ICES1_enum
{
    TC1_ICES1_CLEAR_gc = (0x00), /* Input Capture 1 Edge Select - CLEAR */
    TC1_ICES1_SET_gc   = (0x40), /* Input Capture 1 Edge Select - SET */
} TC1_ICES1_t;

/* Waveform Generation Mode */
typedef enum TC1_WGM13_enum
{
    TC1_WGM13_CLEAR_gc = (0x00), /* Waveform Generation Mode - CLEAR */
    TC1_WGM13_SET_gc   = (0x10), /* Waveform Generation Mode - SET */
} TC1_WGM13_t;

/* Prescaler source of Timer/Counter 1 */
typedef enum TC1_CS1_enum
{
    TC1_CS1_VAL_0x00_gc = (0x00), /* No Clock Source (Stopped) */
    TC1_CS1_VAL_0x01_gc = (0x01), /* Running, No Prescaling */
    TC1_CS1_VAL_0x02_gc = (0x02), /* Running, CLK/8 */
    TC1_CS1_VAL_0x03_gc = (0x03), /* Running, CLK/64 */
    TC1_CS1_VAL_0x04_gc = (0x04), /* Running, CLK/256 */
    TC1_CS1_VAL_0x05_gc = (0x05), /* Running, CLK/1024 */
    TC1_CS1_VAL_0x06_gc = (0x06), /* Running, ExtClk Tx Falling Edge */
    TC1_CS1_VAL_0x07_gc = (0x07), /* Running, ExtClk Tx Rising Edge */
} TC1_CS1_t;

/*
--------------------------------------------------------------------------------
BOOT_LOAD - Bootloader
--------------------------------------------------------------------------------
*/

typedef struct BOOT_LOAD_struct
{
    register8_t rsv_0x00[87]; /* RESERVED REGISTER BLOCK */
    register8_t SPMCSR;       /* Store Program Memory Control Register */
} BOOT_LOAD_t;


/* SPM Interrupt Enable */
typedef enum BOOT_LOAD_SPMIE_enum
{
    BOOT_LOAD_SPMIE_CLEAR_gc = (0x00), /* SPM Interrupt Enable - CLEAR */
    BOOT_LOAD_SPMIE_SET_gc   = (0x80), /* SPM Interrupt Enable - SET */
} BOOT_LOAD_SPMIE_t;

/* Read While Write Section Busy */
typedef enum BOOT_LOAD_RWWSB_enum
{
    BOOT_LOAD_RWWSB_CLEAR_gc = (0x00), /* Read While Write Section Busy - CLEAR */
    BOOT_LOAD_RWWSB_SET_gc   = (0x40), /* Read While Write Section Busy - SET */
} BOOT_LOAD_RWWSB_t;

/* Signature Row Read */
typedef enum BOOT_LOAD_SIGRD_enum
{
    BOOT_LOAD_SIGRD_CLEAR_gc = (0x00), /* Signature Row Read - CLEAR */
    BOOT_LOAD_SIGRD_SET_gc   = (0x20), /* Signature Row Read - SET */
} BOOT_LOAD_SIGRD_t;

/* Read While Write section read enable */
typedef enum BOOT_LOAD_RWWSRE_enum
{
    BOOT_LOAD_RWWSRE_CLEAR_gc = (0x00), /* Read While Write section read enable - CLEAR */
    BOOT_LOAD_RWWSRE_SET_gc   = (0x10), /* Read While Write section read enable - SET */
} BOOT_LOAD_RWWSRE_t;

/* Boot Lock Bit Set */
typedef enum BOOT_LOAD_BLBSET_enum
{
    BOOT_LOAD_BLBSET_CLEAR_gc = (0x00), /* Boot Lock Bit Set - CLEAR */
    BOOT_LOAD_BLBSET_SET_gc   = (0x08), /* Boot Lock Bit Set - SET */
} BOOT_LOAD_BLBSET_t;

/* Page Write */
typedef enum BOOT_LOAD_PGWRT_enum
{
    BOOT_LOAD_PGWRT_CLEAR_gc = (0x00), /* Page Write - CLEAR */
    BOOT_LOAD_PGWRT_SET_gc   = (0x04), /* Page Write - SET */
} BOOT_LOAD_PGWRT_t;

/* Page Erase */
typedef enum BOOT_LOAD_PGERS_enum
{
    BOOT_LOAD_PGERS_CLEAR_gc = (0x00), /* Page Erase - CLEAR */
    BOOT_LOAD_PGERS_SET_gc   = (0x02), /* Page Erase - SET */
} BOOT_LOAD_PGERS_t;

/* Store Program Memory Enable */
typedef enum BOOT_LOAD_SPMEN_enum
{
    BOOT_LOAD_SPMEN_CLEAR_gc = (0x00), /* Store Program Memory Enable - CLEAR */
    BOOT_LOAD_SPMEN_SET_gc   = (0x01), /* Store Program Memory Enable - SET */
} BOOT_LOAD_SPMEN_t;
/*
================================================================================
IO Module Instances. Mapped to memory.
================================================================================
*/

#define PORTB     (*(PORTB_t *) 0x0000)     /* I/O Port */
#define PORTD     (*(PORTD_t *) 0x0000)     /* I/O Port */
#define PORTE     (*(PORTE_t *) 0x0000)     /* I/O Port */
#define DAC       (*(DAC_t *) 0x0000)       /* Digital-to-Analog Converter */
#define SPI       (*(SPI_t *) 0x0000)       /* Serial Peripheral Interface */
#define WDT       (*(WDT_t *) 0x0000)       /* Watchdog Timer */
#define EXINT     (*(EXINT_t *) 0x0000)     /* External Interrupts */
#define ADC       (*(ADC_t *) 0x0000)       /* Analog-to-Digital Converter */
#define AC        (*(AC_t *) 0x0000)        /* Analog Comparator */
#define CPU       (*(CPU_t *) 0x0000)       /* CPU Registers */
#define EEPROM    (*(EEPROM_t *) 0x0000)    /* EEPROM */
#define PSC0      (*(PSC0_t *) 0x0000)      /* Power Stage Controller */
#define PSC2      (*(PSC2_t *) 0x0000)      /* Power Stage Controller */
#define TC1       (*(TC1_t *) 0x0000)       /* Timer/Counter, 16-bit */
#define BOOT_LOAD (*(BOOT_LOAD_t *) 0x0000) /* Bootloader */
#define FUSE      (*(FUSE_t *) 0x0000)      /* Fuses */
#define LOCKBIT   (*(LOCKBIT_t *) 0x0000)   /* Lockbits */
#else
/*
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
ASM LANGUAGE - ONLY
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/


/*
--------------------------------------------------------------------------------
FUSE - Fuses
--------------------------------------------------------------------------------
*/


/* PSC2 Reset Behavior */
#define FUSE_PSC2RB_CLEAR_gc (0x00) /* PSC2 Reset Behavior - CLEAR */
#define FUSE_PSC2RB_SET_gc   (0x80) /* PSC2 Reset Behavior - SET */


/* PSC2 Reset Behavior for 22 and 23 */
#define FUSE_PSC2RBA_CLEAR_gc (0x00) /* PSC2 Reset Behavior for 22 and 23 - CLEAR */
#define FUSE_PSC2RBA_SET_gc   (0x40) /* PSC2 Reset Behavior for 22 and 23 - SET */


/* PSC0 Reset Behavior */
#define FUSE_PSC0RB_CLEAR_gc (0x00) /* PSC0 Reset Behavior - CLEAR */
#define FUSE_PSC0RB_SET_gc   (0x20) /* PSC0 Reset Behavior - SET */


/* PSC Reset Value */
#define FUSE_PSCRV_CLEAR_gc (0x00) /* PSC Reset Value - CLEAR */
#define FUSE_PSCRV_SET_gc   (0x10) /* PSC Reset Value - SET */


/* PSC2 and PSC0 input Reset Behavior */
#define FUSE_PSCINRB_CLEAR_gc (0x00) /* PSC2 and PSC0 input Reset Behavior - CLEAR */
#define FUSE_PSCINRB_SET_gc   (0x08) /* PSC2 and PSC0 input Reset Behavior - SET */


/* Brown-out Detector Trigger Level */
#define FUSE_BODLEVEL_DISABLED_gc (0x07) /* Brown-out detection disabled */
#define FUSE_BODLEVEL_1V8_gc      (0x06) /* Brown-out detection at VCC=1.8 V */
#define FUSE_BODLEVEL_2V7_gc      (0x05) /* Brown-out detection at VCC=2.7 V */
#define FUSE_BODLEVEL_4V3_gc      (0x04) /* Brown-out detection at VCC=4.3 V */
#define FUSE_BODLEVEL_2V3_gc      (0x03) /* Brown-out detection at VCC=2.3 V */
#define FUSE_BODLEVEL_2V2_gc      (0x02) /* Brown-out detection at VCC=2.2 V */
#define FUSE_BODLEVEL_1V9_gc      (0x01) /* Brown-out detection at VCC=1.9 V */
#define FUSE_BODLEVEL_2V0_gc      (0x00) /* Brown-out detection at VCC=2.0 V */


/* Reset Disabled (Enable PE0 as I/O pin) */
#define FUSE_RSTDISBL_CLEAR_gc (0x00) /* Reset Disabled (Enable PE0 as I/O pin) - CLEAR */
#define FUSE_RSTDISBL_SET_gc   (0x80) /* Reset Disabled (Enable PE0 as I/O pin) - SET */


/* Debug Wire enable */
#define FUSE_DWEN_CLEAR_gc (0x00) /* Debug Wire enable - CLEAR */
#define FUSE_DWEN_SET_gc   (0x40) /* Debug Wire enable - SET */


/* Serial program downloading (SPI) enabled */
#define FUSE_SPIEN_CLEAR_gc (0x00) /* Serial program downloading (SPI) enabled - CLEAR */
#define FUSE_SPIEN_SET_gc   (0x20) /* Serial program downloading (SPI) enabled - SET */


/* Watch-dog Timer always on */
#define FUSE_WDTON_CLEAR_gc (0x00) /* Watch-dog Timer always on - CLEAR */
#define FUSE_WDTON_SET_gc   (0x10) /* Watch-dog Timer always on - SET */


/* Preserve EEPROM through the Chip Erase cycle */
#define FUSE_EESAVE_CLEAR_gc (0x00) /* Preserve EEPROM through the Chip Erase cycle - CLEAR */
#define FUSE_EESAVE_SET_gc   (0x08) /* Preserve EEPROM through the Chip Erase cycle - SET */


/* Select Boot Size */
#define FUSE_BOOTSZ_128W_0F80_gc  (0x03<<1) /* Boot Flash size=128 words Boot address=$0F80 */
#define FUSE_BOOTSZ_256W_0F00_gc  (0x02<<1) /* Boot Flash size=256 words Boot address=$0F00 */
#define FUSE_BOOTSZ_512W_0E00_gc  (0x01<<1) /* Boot Flash size=512 words Boot address=$0E00 */
#define FUSE_BOOTSZ_1024W_0C00_gc (0x00<<1) /* Boot Flash size=1024 words Boot address=$0C00 */


/* Select Reset Vector */
#define FUSE_BOOTRST_CLEAR_gc (0x00) /* Select Reset Vector - CLEAR */
#define FUSE_BOOTRST_SET_gc   (0x01) /* Select Reset Vector - SET */


/* Divide clock by 8 internally */
#define FUSE_CKDIV8_CLEAR_gc (0x00) /* Divide clock by 8 internally - CLEAR */
#define FUSE_CKDIV8_SET_gc   (0x80) /* Divide clock by 8 internally - SET */


/* Clock output on PORTD1 */
#define FUSE_CKOUT_CLEAR_gc (0x00) /* Clock output on PORTD1 - CLEAR */
#define FUSE_CKOUT_SET_gc   (0x40) /* Clock output on PORTD1 - SET */


/* Select Clock Source */
#define FUSE_SUT_CKSEL_EXTCLK_PLLIN_RC_8MHZ_6CK_14CK_0MS_gc             (0x00) /* Ext. CK; PLLin: RC8; SUT: 6CK/14CK+0ms; [CKSEL=0000 SUT=00] */
#define FUSE_SUT_CKSEL_EXTCLK_PLLIN_RC_8MHZ_6CK_14CK_4MS1_gc            (0x10) /* Ext. CK; PLLin: RC8 MHz; SUT:6 CK/14CK+4.1 ms; [CKSEL=0000 SUT=01] */
#define FUSE_SUT_CKSEL_EXTCLK_PLLIN_RC_8MHZ_6CK_14CK_65MS_gc            (0x20) /* Ext. CK; PLLin: RC8 MHz; SUT:6 CK/14CK+65 ms; [CKSEL=0000 SUT=10] */
#define FUSE_SUT_CKSEL_RC_8MHZ_PLLIN_RC_8MHZ_6CK_14CK_0MS_gc            (0x02) /* RC8 MHz; PLLin: RC8; SUT: 6CK/14CK+0ms; [CKSEL=0010 SUT=00] */
#define FUSE_SUT_CKSEL_RC_8MHZ_PLLIN_RC_8MHZ_6CK_14CK_4MS1_gc           (0x12) /* RC8 MHz; PLLin: RC8; SUT: 6CK/14CK+4.1 ms; [CKSEL=0010 SUT=01] */
#define FUSE_SUT_CKSEL_RC_8MHZ_PLLIN_RC_8MHZ_6CK_14CK_65MS_gc           (0x22) /* RC8 MHz; PLLin: RC8; SUT: 6CK/14CK+65 ms;  [CKSEL=0010 SUT=10] */
#define FUSE_SUT_CKSEL_XOSC_PLLIN_RC_8MHZ_258CK_14CK_4MS1_gc            (0x08) /* XOSC.9-3MHz; PLLin: RC8; SUT: 258CK/14CK+4.1 ms; [CKSEL=1000 SUT=00] */
#define FUSE_SUT_CKSEL_XOSC_PLLIN_RC_8MHZ_258CK_14CK_65MS_gc            (0x18) /* XOSC.9-3MHz; PLLin: RC8; SUT: 258CK/14CK+65 ms; [CKSEL=1000 SUT=01] */
#define FUSE_SUT_CKSEL_XOSC_PLLIN_RC_8MHZ_1KCK_14CK_0MS_gc              (0x28) /* XOSC.9-3MHz; PLLin: RC8; SUT: 1KCK/14CK+0 ms; [CKSEL=1000 SUT=10] */
#define FUSE_SUT_CKSEL_XOSC_PLLIN_RC_8MHZ_1KCK_14CK_4MS1_gc             (0x38) /* XOSC.9-3MHz; PLLin: RC8; SUT: 1KCK/14CK+4.1 ms; [CKSEL=1000 SUT=11] */
#define FUSE_SUT_CKSEL_XOSC_PLLIN_RC_8MHZ_1KCK_14CK_65MS_gc             (0x09) /* XOSC.9-3MHz; PLLin: RC8; SUT: 1KCK/14CK+65 ms; [CKSEL=1001 SUT=00] */
#define FUSE_SUT_CKSEL_XOSC_PLLIN_RC_8MHZ_16KCK_14CK_0MS_gc             (0x19) /* XOSC.9-3MHz; PLLin: RC8; SUT: 16KCK/14CK+0 ms; [CKSEL=1001 SUT=01] */
#define FUSE_SUT_CKSEL_XOSC_PLLIN_RC_8MHZ_16KCK_14CK_4MS1_gc            (0x29) /* XOSC.9-3MHz; PLLin: RC8; SUT: 16KCK/14CK+4.1 ms; [CKSEL=1001 SUT=10] */
#define FUSE_SUT_CKSEL_XOSC_PLLIN_RC_8MHZ_16KCK_14CK_65MS_gc            (0x39) /* XOSC.9-3MHz; PLLin: RC8; SUT: 16KCK/14CK+65 ms;  [CKSEL=1001 SUT=11] */
#define FUSE_SUT_CKSEL_XOSC_3MHZ_8MHZ_PLLIN_RC_8MHZ_258CK_14CK_4MS1_gc  (0x0A) /* XOSC3-8MHz; PLLin: RC8; SUT: 258CK/14CK+4.1 ms; [CKSEL=1010 SUT=00] */
#define FUSE_SUT_CKSEL_XOSC_3MHZ_8MHZ_PLLIN_RC_8MHZ_258CK_14CK_65MS_gc  (0x1A) /* XOSC3-8MHz; PLLin: RC8; SUT: 258CK/14CK+65 ms; [CKSEL=1010 SUT=01] */
#define FUSE_SUT_CKSEL_XOSC_3MHZ_8MHZ_PLLIN_RC_8MHZ_1KCK_14CK_0MS_gc    (0x2A) /* XOSC3-8MHz; PLLin: RC8; SUT: 1KCK/14CK+0 ms; [CKSEL=1010 SUT=10] */
#define FUSE_SUT_CKSEL_XOSC_3MHZ_8MHZ_PLLIN_RC_8MHZ_1KCK_14CK_4MS1_gc   (0x3A) /* XOSC3-8MHz; PLLin: RC8; SUT: 1KCK/14CK+4.1 ms; [CKSEL=1010 SUT=11] */
#define FUSE_SUT_CKSEL_XOSC_3MHZ_8MHZ_PLLIN_RC_8MHZ_1KCK_14CK_65MS_gc   (0x0B) /* XOSC3-8MHz; PLLin: RC8; SUT: 1KCK/14CK+65 ms;  [CKSEL=1011 SUT=00] */
#define FUSE_SUT_CKSEL_XOSC_3MHZ_8MHZ_PLLIN_RC_8MHZ_16KCK_14CK_0MS_gc   (0x1B) /* XOSC3-8MHz; PLLin: RC8; SUT: 16KCK/14CK+0 ms; [CKSEL=1011 SUT=01] */
#define FUSE_SUT_CKSEL_XOSC_3MHZ_8MHZ_PLLIN_RC_8MHZ_16KCK_14CK_4MS1_gc  (0x2B) /* XOSC3-8MHz; PLLin: RC8; SUT: 16KCK/14CK+4.1 ms; [CKSEL=1011 SUT=10] */
#define FUSE_SUT_CKSEL_XOSC_3MHZ_8MHZ_PLLIN_RC_8MHZ_16KCK_14CK_65MS_gc  (0x3B) /* XOSC3-8MHz; PLLin: RC8; SUT: 16KCK/14CK+65 ms;  [CKSEL=1011 SUT=11] */
#define FUSE_SUT_CKSEL_XOSC_3MHZ_8MHZ_PLLIN_XOSC_258CK_14CK_4MS1_gc     (0x0C) /* XOSC3-8MHz; PLLin: XOSC; SUT: 258CK/14CK+4.1 ms; [CKSEL=1100 SUT=00] */
#define FUSE_SUT_CKSEL_XOSC_3MHZ_8MHZ_PLLIN_XOSC_258CK_14CK_65MS_gc     (0x1C) /* XOSC3-8MHz; PLLin: XOSC; SUT: 258CK/14CK+65 ms;  [CKSEL=1100 SUT=01] */
#define FUSE_SUT_CKSEL_XOSC_3MHZ_8MHZ_PLLIN_XOSC_1KCK_14CK_0MS_gc       (0x2C) /* XOSC3-8MHz; PLLin: XOSC; SUT: 1KCK/14CK+0 ms; [CKSEL=1100 SUT=10] */
#define FUSE_SUT_CKSEL_XOSC_3MHZ_8MHZ_PLLIN_XOSC_1KCK_14CK_4MS1_gc      (0x3C) /* XOSC3-8MHz; PLLin: XOSC; SUT: 1KCK/14CK+4.1 ms; [CKSEL=1100 SUT=11] */
#define FUSE_SUT_CKSEL_XOSC_3MHZ_8MHZ_PLLIN_XOSC_1KCK_14CK_65MS_gc      (0x0D) /* XOSC3-8MHz; PLLin: XOSC; SUT: 1KCK/14CK+65 ms;  [CKSEL=1101 SUT=00 */
#define FUSE_SUT_CKSEL_XOSC_3MHZ_8MHZ_PLLIN_XOSC_16KCK_14CK_0MS_gc      (0x1D) /* XOSC3-8MHz; PLLin: XOSC; SUT: 16KCK/14CK+0 ms; [CKSEL=1101 SUT=01] */
#define FUSE_SUT_CKSEL_XOSC_3MHZ_8MHZ_PLLIN_XOSC_16KCK_14CK_4MS1_gc     (0x2D) /* XOSC3-8MHz; PLLin: XOSC; SUT: 16KCK/14CK+4.1 ms; [CKSEL=1101 SUT=10] */
#define FUSE_SUT_CKSEL_XOSC_3MHZ_8MHZ_PLLIN_XOSC_16KCK_14CK_65MS_gc     (0x3D) /* XOSC3-8MHz; PLLin: XOSC; SUT: 16KCK/14CK+65 ms;  [CKSEL=1101 SUT=11] */
#define FUSE_SUT_CKSEL_XOSC_8MHZ_16MHZ_PLLIN_RC_8MHZ_258CK_14CK_4MS1_gc (0x0E) /* XOSC8-16MHz; PLLin: RC8; SUT: 258CK/14CK+4.1 ms; [CKSEL=1110 SUT=00] */
#define FUSE_SUT_CKSEL_XOSC_8MHZ_16MHZ_PLLIN_RC_8MHZ_258CK_14CK_65MS_gc (0x1E) /* XOSC8-16MHz; PLLin: RC8; SUT: 258CK/14CK+65 ms;  [CKSEL=1110 SUT=01] */
#define FUSE_SUT_CKSEL_XOSC_8MHZ_16MHZ_PLLIN_RC_8MHZ_1KCK_14CK_0MS_gc   (0x2E) /* XOSC8-16MHz; PLLin: RC8; SUT: 1KCK/14CK+0 ms; [CKSEL=1110 SUT=10] */
#define FUSE_SUT_CKSEL_XOSC_8MHZ_16MHZ_PLLIN_RC_8MHZ_1KCK_14CK_4MS1_gc  (0x3E) /* XOSC8-16MHz; PLLin: RC8; SUT: 1KCK/14CK+4.1 ms; [CKSEL=1110 SUT=11] */
#define FUSE_SUT_CKSEL_XOSC_8MHZ_16MHZ_PLLIN_RC_8MHZ_1KCK_14CK_65MS_gc  (0x0F) /* XOSC8-16MHz; PLLin: RC8; SUT: 1KCK/14CK+65 ms; [CKSEL=1111 SUT=00] */
#define FUSE_SUT_CKSEL_XOSC_8MHZ_16MHZ_PLLIN_RC_8MHZ_16KCK_14CK_0MS_gc  (0x1F) /* XOSC8-16MHz; PLLin: RC8; SUT: 16KCK/14CK+0 ms; [CKSEL=1111 SUT=01] */
#define FUSE_SUT_CKSEL_XOSC_8MHZ_16MHZ_PLLIN_RC_8MHZ_16KCK_14CK_4MS1_gc (0x2F) /* XOSC8-16MHz; PLLin: RC8; SUT: 16KCK/14CK+4.1 ms; [CKSEL=1111 SUT=10] */
#define FUSE_SUT_CKSEL_XOSC_8MHZ_16MHZ_PLLIN_RC_8MHZ_16KCK_14CK_65MS_gc (0x3F) /* XOSC8-16MHz; PLLin: RC8; SUT: 16KCK/14CK+65 ms;  [CKSEL=1111 SUT=11] */
#define FUSE_SUT_CKSEL_WDOSC_128KHZ_1KCK_14CK_0MS_gc                    (0x03) /* WD128 KHz; SUT: 1KCK/14CK+0 ms; [CKSEL=0011 SUT=00] */
#define FUSE_SUT_CKSEL_WDOSC_128KHZ_1KCK_14CK_4MS1_gc                   (0x13) /* WD128 KHz; SUT: 1KCK/14CK+4.1 ms; [CKSEL=0011 SUT=01] */
#define FUSE_SUT_CKSEL_WDOSC_128KHZ_1KCK_14CK_65MS_gc                   (0x23) /* WD128 KHz; SUT: 1KCK/14CK+65 ms; [CKSEL=0011 SUT=10] */
#define FUSE_SUT_CKSEL_WDOSC_128KHZ_16KCK_14CK_0MS_gc                   (0x33) /* WD128 KHz; SUT: 16KCK/14CK+0 ms; [CKSEL=0011 SUT=11] */
#define FUSE_SUT_CKSEL_PLLCLK_DIV4_PLLIN_RC_8MHZ_1KCK_14CK_0MS_gc       (0x01) /* PLL/4; PLLin: RC8; SUT: 1KCK/14CK+0 ms; [CKSEL=0001 SUT=00] */
#define FUSE_SUT_CKSEL_PLLCLK_DIV4_PLLIN_RC_8MHZ_1KCK_14CK_4MS_gc       (0x11) /* PLL/4; PLLin: RC8; SUT: 1KCK/14CK+4 ms;   [CKSEL=0001 SUT=01] */
#define FUSE_SUT_CKSEL_PLLCLK_DIV4_PLLIN_RC_8MHZ_1KCK_14CK_64MS_gc      (0x21) /* PLL/4; PLLin: RC8; SUT: 1KCK/14CK+64 ms;   [CKSEL=0001 SUT=10] */
#define FUSE_SUT_CKSEL_PLLCLK_DIV4_PLLIN_EXTCLK_16KCK_14CK_0MS_gc       (0x05) /* PLL/4; PLLin: Ext. CK; SUT: 16KCK/14CK+0 ms; [CKSEL=0101 SUT=00] */
#define FUSE_SUT_CKSEL_PLLCLK_DIV4_PLLIN_EXTCLK_16KCK_14CK_4MS_gc       (0x15) /* PLL/4; PLLin: Ext. CK; SUT: 16KCK/14CK+4 ms; [CKSEL=0101 SUT=01] */
/* WARNING: FUSE_SUT_CKSEL_PLLCLK_DIV4_PLLIN_EXTCLK_16KCK_14CK_4MS_gc ALREADY DEFINED as '(0x15)' NOT '(0x25)' */
#define FUSE_SUT_CKSEL_PLLCLK_DIV4_PLLIN_EXTCLK_16KCK_14CK_64MS_gc      (0x35) /* PLL/4; PLLin: Ext. CK; SUT: 16KCK/14CK+64 ms; [CKSEL=0101 SUT=11] */
#define FUSE_SUT_CKSEL_PLLCLK_DIV4_PLLIN_XOSC_1KCK_14CK_0MS_gc          (0x04) /* PLL/4; PLLin: XOSC; SUT: 1KCK/14CK+0 ms; [CKSEL=0100 SUT=00] */
#define FUSE_SUT_CKSEL_PLLCLK_DIV4_PLLIN_XOSC_1KCK_14CK_4MS_gc          (0x14) /* PLL/4; PLLin: XOSC; SUT: 1KCK/14CK+4 ms; [CKSEL=0100 SUT=01] */
#define FUSE_SUT_CKSEL_PLLCLK_DIV4_PLLIN_XOSC_1KCK_14CK_64MS_gc         (0x24) /* PLL/4; PLLin: XOSC; SUT: 1KCK/14CK+64 ms; [CKSEL=0100 SUT=10] */
#define FUSE_SUT_CKSEL_PLLCLK_DIV4_PLLIN_XOSC_16KCK_14CK_0MS_gc         (0x34) /* PLL/4; PLLin: XOSC; SUT: 16KCK/14CK+0 ms; [CKSEL=0100 SUT=11] */
#define FUSE_SUT_CKSEL_RC_1MHZ_1KCK_14CK_0MS_gc                         (0x06) /* RC 1 MHz; SUT: 1KCK/14CK+0 ms; [CKSEL=0110 SUT=00] */
#define FUSE_SUT_CKSEL_RC_1MHZ_1KCK_14CK_4MS1_gc                        (0x16) /* RC 1 MHz; SUT: 1KCK/14CK+4.1 ms; [CKSEL=0110 SUT=01] */
#define FUSE_SUT_CKSEL_RC_1MHZ_1KCK_14CK_65MS_gc                        (0x26) /* RC 1 MHz; SUT: 1KCK/14CK+65 ms;  [CKSEL=0110 SUT=10] */


/*
--------------------------------------------------------------------------------
LOCKBIT - Lockbits
--------------------------------------------------------------------------------
*/


/* Memory Lock */
#define LOCKBIT_LB_PROG_VER_DISABLED_gc (0x00) /* Further programming and verification disabled */
#define LOCKBIT_LB_PROG_DISABLED_gc     (0x02) /* Further programming disabled */
#define LOCKBIT_LB_NO_LOCK_gc           (0x03) /* No memory lock features enabled */


/* Boot Loader Protection Mode */
#define LOCKBIT_BLB0_LPM_SPM_DISABLE_gc (0x00<<2) /* LPM and SPM prohibited in Application Section */
#define LOCKBIT_BLB0_LPM_DISABLE_gc     (0x01<<2) /* LPM prohibited in Application Section */
#define LOCKBIT_BLB0_SPM_DISABLE_gc     (0x02<<2) /* SPM prohibited in Application Section */
#define LOCKBIT_BLB0_NO_LOCK_gc         (0x03<<2) /* No lock on SPM and LPM in Application Section */


/* Boot Loader Protection Mode */
#define LOCKBIT_BLB1_LPM_SPM_DISABLE_gc (0x00<<4) /* LPM and SPM prohibited in Boot Section */
#define LOCKBIT_BLB1_LPM_DISABLE_gc     (0x01<<4) /* LPM prohibited in Boot Section */
#define LOCKBIT_BLB1_SPM_DISABLE_gc     (0x02<<4) /* SPM prohibited in Boot Section */
#define LOCKBIT_BLB1_NO_LOCK_gc         (0x03<<4) /* No lock on SPM and LPM in Boot Section */


/*
--------------------------------------------------------------------------------
PORT - I/O Port
--------------------------------------------------------------------------------
*/


/*
--------------------------------------------------------------------------------
PORT - I/O Port
--------------------------------------------------------------------------------
*/


/*
--------------------------------------------------------------------------------
PORT - I/O Port
--------------------------------------------------------------------------------
*/


/*
--------------------------------------------------------------------------------
DAC - Digital-to-Analog Converter
--------------------------------------------------------------------------------
*/


/* DAC Auto Trigger Enable Bit */
#define DAC_DAATE_CLEAR_gc (0x00) /* DAC Auto Trigger Enable Bit - CLEAR */
#define DAC_DAATE_SET_gc   (0x80) /* DAC Auto Trigger Enable Bit - SET */


/* DAC Trigger Selection Bits */
#define DAC_DATS_VAL_0x00_gc (0x00<<4) /* Analog Comparator 0 */
#define DAC_DATS_VAL_0x01_gc (0x01<<4) /* Analog Comparator 1 */
#define DAC_DATS_VAL_0x02_gc (0x02<<4) /* External Interrupt Request 0 */
#define DAC_DATS_VAL_0x03_gc (0x03<<4) /* Timer/Counter0 Compare Match A */
#define DAC_DATS_VAL_0x04_gc (0x04<<4) /* Timer/Counter0 Overflow */
#define DAC_DATS_VAL_0x05_gc (0x05<<4) /* Timer/Counter1 Compare Match B */
#define DAC_DATS_VAL_0x06_gc (0x06<<4) /* Timer/Counter1 Overflow */
#define DAC_DATS_VAL_0x07_gc (0x07<<4) /* Timer/Counter1 Capture Event */


/* DAC Left Adjust */
#define DAC_DALA_CLEAR_gc (0x00) /* DAC Left Adjust - CLEAR */
#define DAC_DALA_SET_gc   (0x04) /* DAC Left Adjust - SET */


/* DAC Enable Bit */
#define DAC_DAEN_CLEAR_gc (0x00) /* DAC Enable Bit - CLEAR */
#define DAC_DAEN_SET_gc   (0x01) /* DAC Enable Bit - SET */


/*
--------------------------------------------------------------------------------
SPI - Serial Peripheral Interface
--------------------------------------------------------------------------------
*/


/* SPI Interrupt Enable */
#define SPI_SPIE_CLEAR_gc (0x00) /* SPI Interrupt Enable - CLEAR */
#define SPI_SPIE_SET_gc   (0x80) /* SPI Interrupt Enable - SET */


/* SPI Enable */
#define SPI_SPE_CLEAR_gc (0x00) /* SPI Enable - CLEAR */
#define SPI_SPE_SET_gc   (0x40) /* SPI Enable - SET */


/* Data Order */
#define SPI_DORD_CLEAR_gc (0x00) /* Data Order - CLEAR */
#define SPI_DORD_SET_gc   (0x20) /* Data Order - SET */


/* Master/Slave Select */
#define SPI_MSTR_CLEAR_gc (0x00) /* Master/Slave Select - CLEAR */
#define SPI_MSTR_SET_gc   (0x10) /* Master/Slave Select - SET */


/* Clock polarity */
#define SPI_CPOL_CLEAR_gc (0x00) /* Clock polarity - CLEAR */
#define SPI_CPOL_SET_gc   (0x08) /* Clock polarity - SET */


/* Clock Phase */
#define SPI_CPHA_CLEAR_gc (0x00) /* Clock Phase - CLEAR */
#define SPI_CPHA_SET_gc   (0x04) /* Clock Phase - SET */


/* SPI Clock Rate Selects */
#define SPI_SPR_VAL_0x00_gc (0x00) /* fosc/4 */
#define SPI_SPR_VAL_0x01_gc (0x01) /* fosc/16 */
#define SPI_SPR_VAL_0x02_gc (0x02) /* fosc/64 */
#define SPI_SPR_VAL_0x03_gc (0x03) /* fosc/128 */
#define SPI_SPR_VAL_0x04_gc (0x04) /* fosc/2 */
#define SPI_SPR_VAL_0x05_gc (0x05) /* fosc/8 */
#define SPI_SPR_VAL_0x06_gc (0x06) /* fosc/32 */
#define SPI_SPR_VAL_0x07_gc (0x07) /* fosc/64 */


/* SPI Interrupt Flag */
#define SPI_SPIF_CLEAR_gc (0x00) /* SPI Interrupt Flag - CLEAR */
#define SPI_SPIF_SET_gc   (0x80) /* SPI Interrupt Flag - SET */


/* Write Collision Flag */
#define SPI_WCOL_CLEAR_gc (0x00) /* Write Collision Flag - CLEAR */
#define SPI_WCOL_SET_gc   (0x40) /* Write Collision Flag - SET */


/* Double SPI Speed Bit */
#define SPI_SPI2X_CLEAR_gc (0x00) /* Double SPI Speed Bit - CLEAR */
#define SPI_SPI2X_SET_gc   (0x01) /* Double SPI Speed Bit - SET */


/*
--------------------------------------------------------------------------------
WDT - Watchdog Timer
--------------------------------------------------------------------------------
*/


/* Watchdog Timeout Interrupt Flag */
#define WDT_WDIF_CLEAR_gc (0x00) /* Watchdog Timeout Interrupt Flag - CLEAR */
#define WDT_WDIF_SET_gc   (0x80) /* Watchdog Timeout Interrupt Flag - SET */


/* Watchdog Timeout Interrupt Enable */
#define WDT_WDIE_CLEAR_gc (0x00) /* Watchdog Timeout Interrupt Enable - CLEAR */
#define WDT_WDIE_SET_gc   (0x40) /* Watchdog Timeout Interrupt Enable - SET */


/* Watchdog Timer Prescaler Bits */
#define WDT_WDP_VAL_0x00_gc (0x00) /* Oscillator Cycles 2K */
#define WDT_WDP_VAL_0x01_gc (0x01) /* Oscillator Cycles 4K */
#define WDT_WDP_VAL_0x02_gc (0x02) /* Oscillator Cycles 8K */
#define WDT_WDP_VAL_0x03_gc (0x03) /* Oscillator Cycles 16K */
#define WDT_WDP_VAL_0x04_gc (0x04) /* Oscillator Cycles 32K */
#define WDT_WDP_VAL_0x05_gc (0x05) /* Oscillator Cycles 64K */
#define WDT_WDP_VAL_0x06_gc (0x06) /* Oscillator Cycles 128K */
#define WDT_WDP_VAL_0x07_gc (0x07) /* Oscillator Cycles 256K */
#define WDT_WDP_VAL_0x08_gc (0x08) /* Oscillator Cycles 512K */
#define WDT_WDP_VAL_0x09_gc (0x09) /* Oscillator Cycles 1024K */


/* Watchdog Change Enable */
#define WDT_WDCE_CLEAR_gc (0x00) /* Watchdog Change Enable - CLEAR */
#define WDT_WDCE_SET_gc   (0x10) /* Watchdog Change Enable - SET */


/* Watch Dog Enable */
#define WDT_WDE_CLEAR_gc (0x00) /* Watch Dog Enable - CLEAR */
#define WDT_WDE_SET_gc   (0x08) /* Watch Dog Enable - SET */


/*
--------------------------------------------------------------------------------
EXINT - External Interrupts
--------------------------------------------------------------------------------
*/


/* External Interrupt Sense Control Bit */
#define EXINT_ISC2_VAL_0x00_gc (0x00<<4) /* Low Level of INTX */
#define EXINT_ISC2_VAL_0x01_gc (0x01<<4) /* Any Logical Change of INTX */
#define EXINT_ISC2_VAL_0x02_gc (0x02<<4) /* Falling Edge of INTX */
#define EXINT_ISC2_VAL_0x03_gc (0x03<<4) /* Rising Edge of INTX */


/* External Interrupt Sense Control Bit */
#define EXINT_ISC1_VAL_0x00_gc (0x00<<2) /* Low Level of INTX */
#define EXINT_ISC1_VAL_0x01_gc (0x01<<2) /* Any Logical Change of INTX */
#define EXINT_ISC1_VAL_0x02_gc (0x02<<2) /* Falling Edge of INTX */
#define EXINT_ISC1_VAL_0x03_gc (0x03<<2) /* Rising Edge of INTX */


/* External Interrupt Sense Control Bit */
#define EXINT_ISC0_VAL_0x00_gc (0x00) /* Low Level of INTX */
#define EXINT_ISC0_VAL_0x01_gc (0x01) /* Any Logical Change of INTX */
#define EXINT_ISC0_VAL_0x02_gc (0x02) /* Falling Edge of INTX */
#define EXINT_ISC0_VAL_0x03_gc (0x03) /* Rising Edge of INTX */


/*
--------------------------------------------------------------------------------
ADC - Analog-to-Digital Converter
--------------------------------------------------------------------------------
*/


/* Reference Selection Bits */
#define ADC_REFS_VAL_0x00_gc (0x00<<6) /* AREF, Internal Vref turned off */
#define ADC_REFS_VAL_0x01_gc (0x01<<6) /* AVCC with external capacitor at AREF pin */
#define ADC_REFS_VAL_0x02_gc (0x02<<6) /* Reserved */
#define ADC_REFS_VAL_0x03_gc (0x03<<6) /* Internal 2.56V Voltage Reference with external capacitor at AREF pin */


/* Left Adjust Result */
#define ADC_ADLAR_CLEAR_gc (0x00) /* Left Adjust Result - CLEAR */
#define ADC_ADLAR_SET_gc   (0x20) /* Left Adjust Result - SET */


/* Analog Channel and Gain Selection Bits */
#define ADC_ADMUX_MUX_gc(x) (x & 0x0F)

/* ADC Enable */
#define ADC_ADEN_CLEAR_gc (0x00) /* ADC Enable - CLEAR */
#define ADC_ADEN_SET_gc   (0x80) /* ADC Enable - SET */


/* ADC Start Conversion */
#define ADC_ADSC_CLEAR_gc (0x00) /* ADC Start Conversion - CLEAR */
#define ADC_ADSC_SET_gc   (0x40) /* ADC Start Conversion - SET */


/* ADC Auto Trigger Enable */
#define ADC_ADATE_CLEAR_gc (0x00) /* ADC Auto Trigger Enable - CLEAR */
#define ADC_ADATE_SET_gc   (0x20) /* ADC Auto Trigger Enable - SET */


/* ADC Interrupt Flag */
#define ADC_ADIF_CLEAR_gc (0x00) /* ADC Interrupt Flag - CLEAR */
#define ADC_ADIF_SET_gc   (0x10) /* ADC Interrupt Flag - SET */


/* ADC Interrupt Enable */
#define ADC_ADIE_CLEAR_gc (0x00) /* ADC Interrupt Enable - CLEAR */
#define ADC_ADIE_SET_gc   (0x08) /* ADC Interrupt Enable - SET */


/* ADC Prescaler Select Bits */
#define ADC_ADCSRA_ADPS_gc(x) (x & 0x07)

/* ADC High Speed Mode */
#define ADC_ADHSM_CLEAR_gc (0x00) /* ADC High Speed Mode - CLEAR */
#define ADC_ADHSM_SET_gc   (0x80) /* ADC High Speed Mode - SET */


/* ADC Noise Canceller Disable */
#define ADC_ADNCDIS_CLEAR_gc (0x00) /* ADC Noise Canceller Disable - CLEAR */
#define ADC_ADNCDIS_SET_gc   (0x40) /* ADC Noise Canceller Disable - SET */


/* ADC Single Shot Enable on PSC's Synchronisation Signals */
#define ADC_ADSSEN_CLEAR_gc (0x00) /* ADC Single Shot Enable on PSC's Synchronisation Signals - CLEAR */
#define ADC_ADSSEN_SET_gc   (0x10) /* ADC Single Shot Enable on PSC's Synchronisation Signals - SET */


/* ADC Auto Trigger Sources */
#define ADC_ADTS_VAL_0x00_gc (0x00) /* Free Running mode */
#define ADC_ADTS_VAL_0x01_gc (0x01) /* Analog Comparator */
#define ADC_ADTS_VAL_0x02_gc (0x02) /* External Interrupt Request 0 */
#define ADC_ADTS_VAL_0x03_gc (0x03) /* Timer/Counter0 Compare Match A */
#define ADC_ADTS_VAL_0x04_gc (0x04) /* Timer/Counter0 Overflow */
#define ADC_ADTS_VAL_0x05_gc (0x05) /* Timer/Counter1 Compare Match B */
#define ADC_ADTS_VAL_0x06_gc (0x06) /* Timer/Counter1 Overflow */
#define ADC_ADTS_VAL_0x07_gc (0x07) /* Timer/Counter1 Capture Event */
#define ADC_ADTS_VAL_0x08_gc (0x08) /* PSC0ASY Event */
#define ADC_ADTS_VAL_0x09_gc (0x09) /* PSC1ASY Event */
#define ADC_ADTS_VAL_0x0A_gc (0x0A) /* PSC2ASY Event */
#define ADC_ADTS_VAL_0x0B_gc (0x0B) /* Analog comparator 1 */
#define ADC_ADTS_VAL_0x0C_gc (0x0C) /* Analog comparator 2 */


/* ADC8 Digital input Disable */
#define ADC_ADC8D_CLEAR_gc (0x00) /* ADC8 Digital input Disable - CLEAR */
#define ADC_ADC8D_SET_gc   (0x80) /* ADC8 Digital input Disable - SET */


/* ADC7 Digital input Disable */
#define ADC_ADC7D_CLEAR_gc (0x00) /* ADC7 Digital input Disable - CLEAR */
#define ADC_ADC7D_SET_gc   (0x40) /* ADC7 Digital input Disable - SET */


/* ADC5 Digital input Disable */
#define ADC_ADC5D_CLEAR_gc (0x00) /* ADC5 Digital input Disable - CLEAR */
#define ADC_ADC5D_SET_gc   (0x20) /* ADC5 Digital input Disable - SET */


/* ADC4 Digital input Disable */
#define ADC_ADC4D_CLEAR_gc (0x00) /* ADC4 Digital input Disable - CLEAR */
#define ADC_ADC4D_SET_gc   (0x10) /* ADC4 Digital input Disable - SET */


/* ADC3 Digital input Disable */
#define ADC_ADC3D_CLEAR_gc (0x00) /* ADC3 Digital input Disable - CLEAR */
#define ADC_ADC3D_SET_gc   (0x08) /* ADC3 Digital input Disable - SET */


/* ADC2 Digital input Disable */
#define ADC_ADC2D_CLEAR_gc (0x00) /* ADC2 Digital input Disable - CLEAR */
#define ADC_ADC2D_SET_gc   (0x04) /* ADC2 Digital input Disable - SET */


/* ADC1 Digital input Disable */
#define ADC_ADC1D_CLEAR_gc (0x00) /* ADC1 Digital input Disable - CLEAR */
#define ADC_ADC1D_SET_gc   (0x02) /* ADC1 Digital input Disable - SET */


/* ADC0 Digital input Disable */
#define ADC_ADC0D_CLEAR_gc (0x00) /* ADC0 Digital input Disable - CLEAR */
#define ADC_ADC0D_SET_gc   (0x01) /* ADC0 Digital input Disable - SET */


/* Digital Input Disable Register 1-ACMP1MD */
#define ADC_ACMP1MD_CLEAR_gc (0x00) /* Digital Input Disable Register 1-ACMP1MD - CLEAR */
#define ADC_ACMP1MD_SET_gc   (0x08) /* Digital Input Disable Register 1-ACMP1MD - SET */


/* Digital Input Disable Register 1-AMP0PD */
#define ADC_AMP0PD_CLEAR_gc (0x00) /* Digital Input Disable Register 1-AMP0PD - CLEAR */
#define ADC_AMP0PD_SET_gc   (0x04) /* Digital Input Disable Register 1-AMP0PD - SET */


/* ADC10 Digital input Disable */
#define ADC_ADC10D_CLEAR_gc (0x00) /* ADC10 Digital input Disable - CLEAR */
#define ADC_ADC10D_SET_gc   (0x02) /* ADC10 Digital input Disable - SET */


/* ADC9 Digital input Disable */
#define ADC_ADC9D_CLEAR_gc (0x00) /* ADC9 Digital input Disable - CLEAR */
#define ADC_ADC9D_SET_gc   (0x01) /* ADC9 Digital input Disable - SET */


/* -AMP0EN */
#define ADC_AMP0EN_CLEAR_gc (0x00) /* -AMP0EN - CLEAR */
#define ADC_AMP0EN_SET_gc   (0x80) /* -AMP0EN - SET */


/* -AMP0IS */
#define ADC_AMP0IS_CLEAR_gc (0x00) /* -AMP0IS - CLEAR */
#define ADC_AMP0IS_SET_gc   (0x40) /* -AMP0IS - SET */


/* -AMP0G */
#define ADC_AMP0CSR_AMP0G_gc(x) ((x<<4) & 0x30)

/* -AMP0GS */
#define ADC_AMP0GS_CLEAR_gc (0x00) /* -AMP0GS - CLEAR */
#define ADC_AMP0GS_SET_gc   (0x08) /* -AMP0GS - SET */


/* -AMP0TS */
#define ADC_AMP0CSR_AMP0TS_gc(x) (x & 0x03)

/*
--------------------------------------------------------------------------------
AC - Analog Comparator
--------------------------------------------------------------------------------
*/


/* Analog Comparator3 Enable Bit */
#define AC_AC3EN_CLEAR_gc (0x00) /* Analog Comparator3 Enable Bit - CLEAR */
#define AC_AC3EN_SET_gc   (0x80) /* Analog Comparator3 Enable Bit - SET */


/* Analog Comparator 3 Interrupt Enable Bit */
#define AC_AC3IE_CLEAR_gc (0x00) /* Analog Comparator 3 Interrupt Enable Bit - CLEAR */
#define AC_AC3IE_SET_gc   (0x40) /* Analog Comparator 3 Interrupt Enable Bit - SET */


/* Analog Comparator 3  Interrupt Select Bit */
#define AC_AC3CON_AC3IS_gc(x) ((x<<4) & 0x30)

/* Analog Comparator 3 Alternate Output Enable */
#define AC_AC3OEA_CLEAR_gc (0x00) /* Analog Comparator 3 Alternate Output Enable - CLEAR */
#define AC_AC3OEA_SET_gc   (0x08) /* Analog Comparator 3 Alternate Output Enable - SET */


/* Analog Comparator 3 Multiplexer Register */
#define AC_AC3CON_AC3M_gc(x) (x & 0x07)

/* Analog Comparator 1 Enable Bit */
#define AC_AC1EN_CLEAR_gc (0x00) /* Analog Comparator 1 Enable Bit - CLEAR */
#define AC_AC1EN_SET_gc   (0x80) /* Analog Comparator 1 Enable Bit - SET */


/* Analog Comparator 1 Interrupt Enable Bit */
#define AC_AC1IE_CLEAR_gc (0x00) /* Analog Comparator 1 Interrupt Enable Bit - CLEAR */
#define AC_AC1IE_SET_gc   (0x40) /* Analog Comparator 1 Interrupt Enable Bit - SET */


/* Analog Comparator 1  Interrupt Select Bit */
#define AC_AC1IS_VAL_0x00_gc (0x00<<4) /* Interrupt on Toggle */
#define AC_AC1IS_VAL_0x01_gc (0x01<<4) /* Reserved */
#define AC_AC1IS_VAL_0x02_gc (0x02<<4) /* Interrupt on Falling Edge */
#define AC_AC1IS_VAL_0x03_gc (0x03<<4) /* Interrupt on Rising Edge */


/* Analog Comparator 1 Multiplexer Register */
#define AC_AC1CON_AC1M_gc(x) (x & 0x07)

/* Analog Comparator 2 Enable Bit */
#define AC_AC2EN_CLEAR_gc (0x00) /* Analog Comparator 2 Enable Bit - CLEAR */
#define AC_AC2EN_SET_gc   (0x80) /* Analog Comparator 2 Enable Bit - SET */


/* Analog Comparator 2 Interrupt Enable Bit */
#define AC_AC2IE_CLEAR_gc (0x00) /* Analog Comparator 2 Interrupt Enable Bit - CLEAR */
#define AC_AC2IE_SET_gc   (0x40) /* Analog Comparator 2 Interrupt Enable Bit - SET */


/* Analog Comparator 2  Interrupt Select Bit */
#define AC_AC2IS_VAL_0x00_gc (0x00<<4) /* Interrupt on Toggle */
#define AC_AC2IS_VAL_0x01_gc (0x01<<4) /* Reserved */
#define AC_AC2IS_VAL_0x02_gc (0x02<<4) /* Interrupt on Falling Edge */
#define AC_AC2IS_VAL_0x03_gc (0x03<<4) /* Interrupt on Rising Edge */


/* Analog Comparator 2 Multiplexer Register */
#define AC_AC2CON_AC2M_gc(x) (x & 0x07)

/* Analog Comparator 3 Interrupt Flag Bit */
#define AC_AC3IF_CLEAR_gc (0x00) /* Analog Comparator 3 Interrupt Flag Bit - CLEAR */
#define AC_AC3IF_SET_gc   (0x80) /* Analog Comparator 3 Interrupt Flag Bit - SET */


/* Analog Comparator 2 Interrupt Flag Bit */
#define AC_AC2IF_CLEAR_gc (0x00) /* Analog Comparator 2 Interrupt Flag Bit - CLEAR */
#define AC_AC2IF_SET_gc   (0x40) /* Analog Comparator 2 Interrupt Flag Bit - SET */


/* Analog Comparator 1  Interrupt Flag Bit */
#define AC_AC1IF_CLEAR_gc (0x00) /* Analog Comparator 1  Interrupt Flag Bit - CLEAR */
#define AC_AC1IF_SET_gc   (0x20) /* Analog Comparator 1  Interrupt Flag Bit - SET */


/* Analog Comparator 3 Output Bit */
#define AC_AC3O_CLEAR_gc (0x00) /* Analog Comparator 3 Output Bit - CLEAR */
#define AC_AC3O_SET_gc   (0x08) /* Analog Comparator 3 Output Bit - SET */


/* Analog Comparator 2 Output Bit */
#define AC_AC2O_CLEAR_gc (0x00) /* Analog Comparator 2 Output Bit - CLEAR */
#define AC_AC2O_SET_gc   (0x04) /* Analog Comparator 2 Output Bit - SET */


/* Analog Comparator 1 Output Bit */
#define AC_AC1O_CLEAR_gc (0x00) /* Analog Comparator 1 Output Bit - CLEAR */
#define AC_AC1O_SET_gc   (0x02) /* Analog Comparator 1 Output Bit - SET */


/* Analog Comparator Ouput Invert */
#define AC_AC3OI_CLEAR_gc (0x00) /* Analog Comparator Ouput Invert - CLEAR */
#define AC_AC3OI_SET_gc   (0x20) /* Analog Comparator Ouput Invert - SET */


/* Analog Comparator Ouput Enable */
#define AC_AC3OE_CLEAR_gc (0x00) /* Analog Comparator Ouput Enable - CLEAR */
#define AC_AC3OE_SET_gc   (0x10) /* Analog Comparator Ouput Enable - SET */


/* Analog Comparator Hysteresis Select */
#define AC_AC3ECON_AC3H_gc(x) (x & 0x07)

/* Analog Comparator Ouput Invert */
#define AC_AC2OI_CLEAR_gc (0x00) /* Analog Comparator Ouput Invert - CLEAR */
#define AC_AC2OI_SET_gc   (0x20) /* Analog Comparator Ouput Invert - SET */


/* Analog Comparator Ouput Enable */
#define AC_AC2OE_CLEAR_gc (0x00) /* Analog Comparator Ouput Enable - CLEAR */
#define AC_AC2OE_SET_gc   (0x10) /* Analog Comparator Ouput Enable - SET */


/* Analog Comparator Hysteresis Select */
#define AC_AC2ECON_AC2H_gc(x) (x & 0x07)

/* Analog Comparator Ouput Invert */
#define AC_AC1OI_CLEAR_gc (0x00) /* Analog Comparator Ouput Invert - CLEAR */
#define AC_AC1OI_SET_gc   (0x20) /* Analog Comparator Ouput Invert - SET */


/* Analog Comparator Ouput Enable */
#define AC_AC1OE_CLEAR_gc (0x00) /* Analog Comparator Ouput Enable - CLEAR */
#define AC_AC1OE_SET_gc   (0x10) /* Analog Comparator Ouput Enable - SET */


/* Analog Comparator Interrupt Capture Enable */
#define AC_AC1ICE_CLEAR_gc (0x00) /* Analog Comparator Interrupt Capture Enable - CLEAR */
#define AC_AC1ICE_SET_gc   (0x08) /* Analog Comparator Interrupt Capture Enable - SET */


/* Analog Comparator Hysteresis Select */
#define AC_AC1ECON_AC1H_gc(x) (x & 0x07)

/*
--------------------------------------------------------------------------------
CPU - CPU Registers
--------------------------------------------------------------------------------
*/


/* Global Interrupt Enable */
#define CPU_I_CLEAR_gc (0x00) /* Global Interrupt Enable - CLEAR */
#define CPU_I_SET_gc   (0x80) /* Global Interrupt Enable - SET */


/* Bit Copy Storage */
#define CPU_T_CLEAR_gc (0x00) /* Bit Copy Storage - CLEAR */
#define CPU_T_SET_gc   (0x40) /* Bit Copy Storage - SET */


/* Half Carry Flag */
#define CPU_H_CLEAR_gc (0x00) /* Half Carry Flag - CLEAR */
#define CPU_H_SET_gc   (0x20) /* Half Carry Flag - SET */


/* Sign Bit */
#define CPU_S_CLEAR_gc (0x00) /* Sign Bit - CLEAR */
#define CPU_S_SET_gc   (0x10) /* Sign Bit - SET */


/* Two's Complement Overflow Flag */
#define CPU_V_CLEAR_gc (0x00) /* Two's Complement Overflow Flag - CLEAR */
#define CPU_V_SET_gc   (0x08) /* Two's Complement Overflow Flag - SET */


/* Negative Flag */
#define CPU_N_CLEAR_gc (0x00) /* Negative Flag - CLEAR */
#define CPU_N_SET_gc   (0x04) /* Negative Flag - SET */


/* Zero Flag */
#define CPU_Z_CLEAR_gc (0x00) /* Zero Flag - CLEAR */
#define CPU_Z_SET_gc   (0x02) /* Zero Flag - SET */


/* Carry Flag */
#define CPU_C_CLEAR_gc (0x00) /* Carry Flag - CLEAR */
#define CPU_C_SET_gc   (0x01) /* Carry Flag - SET */


/* Pull-up disable */
#define CPU_PUD_CLEAR_gc (0x00) /* Pull-up disable - CLEAR */
#define CPU_PUD_SET_gc   (0x10) /* Pull-up disable - SET */


/* Reset Pin Disable */
#define CPU_RSTDIS_CLEAR_gc (0x00) /* Reset Pin Disable - CLEAR */
#define CPU_RSTDIS_SET_gc   (0x08) /* Reset Pin Disable - SET */


/* Frequency Selection of the Calibrated RC Oscillator */
#define CPU_CKRC81_CLEAR_gc (0x00) /* Frequency Selection of the Calibrated RC Oscillator - CLEAR */
#define CPU_CKRC81_SET_gc   (0x04) /* Frequency Selection of the Calibrated RC Oscillator - SET */


/* Interrupt Vector Select */
#define CPU_IVSEL_CLEAR_gc (0x00) /* Interrupt Vector Select - CLEAR */
#define CPU_IVSEL_SET_gc   (0x02) /* Interrupt Vector Select - SET */


/* Interrupt Vector Change Enable */
#define CPU_IVCE_CLEAR_gc (0x00) /* Interrupt Vector Change Enable - CLEAR */
#define CPU_IVCE_SET_gc   (0x01) /* Interrupt Vector Change Enable - SET */


/* Watchdog Reset Flag */
#define CPU_WDRF_CLEAR_gc (0x00) /* Watchdog Reset Flag - CLEAR */
#define CPU_WDRF_SET_gc   (0x08) /* Watchdog Reset Flag - SET */


/* Brown-out Reset Flag */
#define CPU_BORF_CLEAR_gc (0x00) /* Brown-out Reset Flag - CLEAR */
#define CPU_BORF_SET_gc   (0x04) /* Brown-out Reset Flag - SET */


/* External Reset Flag */
#define CPU_EXTRF_CLEAR_gc (0x00) /* External Reset Flag - CLEAR */
#define CPU_EXTRF_SET_gc   (0x02) /* External Reset Flag - SET */


/* Power-on reset flag */
#define CPU_PORF_CLEAR_gc (0x00) /* Power-on reset flag - CLEAR */
#define CPU_PORF_SET_gc   (0x01) /* Power-on reset flag - SET */


/* -CLKPCE */
#define CPU_CLKPCE_CLEAR_gc (0x00) /* -CLKPCE - CLEAR */
#define CPU_CLKPCE_SET_gc   (0x80) /* -CLKPCE - SET */


/* -CLKPS */
#define CPU_CLKPS_VAL_0x00_gc (0x00) /* 1 */
#define CPU_CLKPS_VAL_0x01_gc (0x01) /* 2 */
#define CPU_CLKPS_VAL_0x02_gc (0x02) /* 4 */
#define CPU_CLKPS_VAL_0x03_gc (0x03) /* 8 */
#define CPU_CLKPS_VAL_0x04_gc (0x04) /* 16 */
#define CPU_CLKPS_VAL_0x05_gc (0x05) /* 32 */
#define CPU_CLKPS_VAL_0x06_gc (0x06) /* 64 */
#define CPU_CLKPS_VAL_0x07_gc (0x07) /* 128 */
#define CPU_CLKPS_VAL_0x08_gc (0x08) /* 256 */


/* Sleep Mode Select bits */
#define CPU_SM_IDLE_gc     (0x00<<1) /* Idle */
#define CPU_SM_ADC_gc      (0x01<<1) /* ADC Noise Reduction (If Available) */
#define CPU_SM_PDOWN_gc    (0x02<<1) /* Power Down */
#define CPU_SM_VAL_0x03_gc (0x03<<1) /* Reserved */
#define CPU_SM_VAL_0x04_gc (0x04<<1) /* Reserved */
#define CPU_SM_VAL_0x05_gc (0x05<<1) /* Reserved */
#define CPU_SM_STDBY_gc    (0x06<<1) /* Standby */
#define CPU_SM_VAL_0x07_gc (0x07<<1) /* Reserved */


/* Sleep Enable */
#define CPU_SE_CLEAR_gc (0x00) /* Sleep Enable - CLEAR */
#define CPU_SE_SET_gc   (0x01) /* Sleep Enable - SET */


/* General Purpose IO Register 0 bit 7 */
#define CPU_GPIOR07_CLEAR_gc (0x00) /* General Purpose IO Register 0 bit 7 - CLEAR */
#define CPU_GPIOR07_SET_gc   (0x80) /* General Purpose IO Register 0 bit 7 - SET */


/* General Purpose IO Register 0 bit 6 */
#define CPU_GPIOR06_CLEAR_gc (0x00) /* General Purpose IO Register 0 bit 6 - CLEAR */
#define CPU_GPIOR06_SET_gc   (0x40) /* General Purpose IO Register 0 bit 6 - SET */


/* General Purpose IO Register 0 bit 5 */
#define CPU_GPIOR05_CLEAR_gc (0x00) /* General Purpose IO Register 0 bit 5 - CLEAR */
#define CPU_GPIOR05_SET_gc   (0x20) /* General Purpose IO Register 0 bit 5 - SET */


/* General Purpose IO Register 0 bit 4 */
#define CPU_GPIOR04_CLEAR_gc (0x00) /* General Purpose IO Register 0 bit 4 - CLEAR */
#define CPU_GPIOR04_SET_gc   (0x10) /* General Purpose IO Register 0 bit 4 - SET */


/* General Purpose IO Register 0 bit 3 */
#define CPU_GPIOR03_CLEAR_gc (0x00) /* General Purpose IO Register 0 bit 3 - CLEAR */
#define CPU_GPIOR03_SET_gc   (0x08) /* General Purpose IO Register 0 bit 3 - SET */


/* General Purpose IO Register 0 bit 2 */
#define CPU_GPIOR02_CLEAR_gc (0x00) /* General Purpose IO Register 0 bit 2 - CLEAR */
#define CPU_GPIOR02_SET_gc   (0x04) /* General Purpose IO Register 0 bit 2 - SET */


/* General Purpose IO Register 0 bit 1 */
#define CPU_GPIOR01_CLEAR_gc (0x00) /* General Purpose IO Register 0 bit 1 - CLEAR */
#define CPU_GPIOR01_SET_gc   (0x02) /* General Purpose IO Register 0 bit 1 - SET */


/* General Purpose IO Register 0 bit 0 */
#define CPU_GPIOR00_CLEAR_gc (0x00) /* General Purpose IO Register 0 bit 0 - CLEAR */
#define CPU_GPIOR00_SET_gc   (0x01) /* General Purpose IO Register 0 bit 0 - SET */


/* PLL Control And Status Register-PLLF */
#define CPU_PLLCSR_PLLF_gc(x) ((x<<2) & 0x3C)

/* PLL Enable */
#define CPU_PLLE_CLEAR_gc (0x00) /* PLL Enable - CLEAR */
#define CPU_PLLE_SET_gc   (0x02) /* PLL Enable - SET */


/* PLL Lock Detector */
#define CPU_PLOCK_CLEAR_gc (0x00) /* PLL Lock Detector - CLEAR */
#define CPU_PLOCK_SET_gc   (0x01) /* PLL Lock Detector - SET */


/* Power Reduction PSC2 */
#define CPU_PRPSC2_CLEAR_gc (0x00) /* Power Reduction PSC2 - CLEAR */
#define CPU_PRPSC2_SET_gc   (0x80) /* Power Reduction PSC2 - SET */


/* Power Reduction PSC0 */
#define CPU_PRPSCR_CLEAR_gc (0x00) /* Power Reduction PSC0 - CLEAR */
#define CPU_PRPSCR_SET_gc   (0x20) /* Power Reduction PSC0 - SET */


/* Power Reduction Timer/Counter1 */
#define CPU_PRTIM1_CLEAR_gc (0x00) /* Power Reduction Timer/Counter1 - CLEAR */
#define CPU_PRTIM1_SET_gc   (0x10) /* Power Reduction Timer/Counter1 - SET */


/* Power Reduction Serial Peripheral Interface */
#define CPU_PRSPI_CLEAR_gc (0x00) /* Power Reduction Serial Peripheral Interface - CLEAR */
#define CPU_PRSPI_SET_gc   (0x04) /* Power Reduction Serial Peripheral Interface - SET */


/* Power Reduction ADC */
#define CPU_PRADC_CLEAR_gc (0x00) /* Power Reduction ADC - CLEAR */
#define CPU_PRADC_SET_gc   (0x01) /* Power Reduction ADC - SET */


/* Clock Control Change Enable */
#define CPU_CLKCCE_CLEAR_gc (0x00) /* Clock Control Change Enable - CLEAR */
#define CPU_CLKCCE_SET_gc   (0x80) /* Clock Control Change Enable - SET */


/* Clock Ready Flag */
#define CPU_CLKRDY_CLEAR_gc (0x00) /* Clock Ready Flag - CLEAR */
#define CPU_CLKRDY_SET_gc   (0x10) /* Clock Ready Flag - SET */


/* Clock Control */
#define CPU_CLKCSR_CLKC_gc(x) (x & 0x0F)

/* Clock OUT */
#define CPU_COUT_CLEAR_gc (0x00) /* Clock OUT - CLEAR */
#define CPU_COUT_SET_gc   (0x40) /* Clock OUT - SET */


/* Clock Start up Time */
#define CPU_CLKSELR_CSUT_gc(x) ((x<<4) & 0x30)

/* Clock Source Select */
#define CPU_CLKSELR_CKSEL_gc(x) (x & 0x0F)

/*
--------------------------------------------------------------------------------
EEPROM - EEPROM
--------------------------------------------------------------------------------
*/


/* None Volatile Busy Memory Busy */
#define EEPROM_NVMBSY_CLEAR_gc (0x00) /* None Volatile Busy Memory Busy - CLEAR */
#define EEPROM_NVMBSY_SET_gc   (0x80) /* None Volatile Busy Memory Busy - SET */


/* EEPROM Page Access */
#define EEPROM_EEPAGE_CLEAR_gc (0x00) /* EEPROM Page Access - CLEAR */
#define EEPROM_EEPAGE_SET_gc   (0x40) /* EEPROM Page Access - SET */


/* EEPROM Programming Mode */
#define EEPROM_EECR_EEPM_gc(x) ((x<<4) & 0x30)

/* EEPROM Ready Interrupt Enable */
#define EEPROM_EERIE_CLEAR_gc (0x00) /* EEPROM Ready Interrupt Enable - CLEAR */
#define EEPROM_EERIE_SET_gc   (0x08) /* EEPROM Ready Interrupt Enable - SET */


/* EEPROM Master Write Enable */
#define EEPROM_EEMWE_CLEAR_gc (0x00) /* EEPROM Master Write Enable - CLEAR */
#define EEPROM_EEMWE_SET_gc   (0x04) /* EEPROM Master Write Enable - SET */


/* EEPROM Write Enable */
#define EEPROM_EEWE_CLEAR_gc (0x00) /* EEPROM Write Enable - CLEAR */
#define EEPROM_EEWE_SET_gc   (0x02) /* EEPROM Write Enable - SET */


/* EEPROM Read Enable */
#define EEPROM_EERE_CLEAR_gc (0x00) /* EEPROM Read Enable - CLEAR */
#define EEPROM_EERE_SET_gc   (0x01) /* EEPROM Read Enable - SET */


/*
--------------------------------------------------------------------------------
PSC - Power Stage Controller
--------------------------------------------------------------------------------
*/


/*
--------------------------------------------------------------------------------
PSC - Power Stage Controller
--------------------------------------------------------------------------------
*/


/* PSC 0 Capture Software Trigger Bit */
#define PSC0_PCST0_CLEAR_gc (0x00)   /* PSC 0 Capture Software Trigger Bit - CLEAR */
#define PSC0_PCST0_SET_gc   (0x8000) /* PSC 0 Capture Software Trigger Bit - SET */


/* PSC 0 Input Capture Bytes */
#define PSC0_PICR0_PICR0_gc(x) (x & 0xFFF)

/* PSC 0 Capture Enable Input Part B */
#define PSC0_PCAE0B_CLEAR_gc (0x00) /* PSC 0 Capture Enable Input Part B - CLEAR */
#define PSC0_PCAE0B_SET_gc   (0x80) /* PSC 0 Capture Enable Input Part B - SET */


/* PSC 0 Input Select for Part B */
#define PSC0_PISEL0B_CLEAR_gc (0x00) /* PSC 0 Input Select for Part B - CLEAR */
#define PSC0_PISEL0B_SET_gc   (0x40) /* PSC 0 Input Select for Part B - SET */


/* PSC 0 Edge Level Selector on Input Part B */
#define PSC0_PELEV0B_CLEAR_gc (0x00) /* PSC 0 Edge Level Selector on Input Part B - CLEAR */
#define PSC0_PELEV0B_SET_gc   (0x20) /* PSC 0 Edge Level Selector on Input Part B - SET */


/* PSC 0 Filter Enable on Input Part B */
#define PSC0_PFLTE0B_CLEAR_gc (0x00) /* PSC 0 Filter Enable on Input Part B - CLEAR */
#define PSC0_PFLTE0B_SET_gc   (0x10) /* PSC 0 Filter Enable on Input Part B - SET */


/* PSC 0 Retrigger and Fault Mode for Part B */
#define PSC0_PFRC0B_PRFM0B_gc(x) (x & 0x0F)

/* PSC 0 Capture Enable Input Part A */
#define PSC0_PCAE0A_CLEAR_gc (0x00) /* PSC 0 Capture Enable Input Part A - CLEAR */
#define PSC0_PCAE0A_SET_gc   (0x80) /* PSC 0 Capture Enable Input Part A - SET */


/* PSC 0 Input Select for Part A */
#define PSC0_PISEL0A_CLEAR_gc (0x00) /* PSC 0 Input Select for Part A - CLEAR */
#define PSC0_PISEL0A_SET_gc   (0x40) /* PSC 0 Input Select for Part A - SET */


/* PSC 0 Edge Level Selector on Input Part A */
#define PSC0_PELEV0A_CLEAR_gc (0x00) /* PSC 0 Edge Level Selector on Input Part A - CLEAR */
#define PSC0_PELEV0A_SET_gc   (0x20) /* PSC 0 Edge Level Selector on Input Part A - SET */


/* PSC 0 Filter Enable on Input Part A */
#define PSC0_PFLTE0A_CLEAR_gc (0x00) /* PSC 0 Filter Enable on Input Part A - CLEAR */
#define PSC0_PFLTE0A_SET_gc   (0x10) /* PSC 0 Filter Enable on Input Part A - SET */


/* PSC 0 Retrigger and Fault Mode for Part A */
#define PSC0_PFRC0A_PRFM0A_gc(x) (x & 0x0F)

/* PSC 0 Prescaler Selects */
#define PSC0_PCTL0_PPRE0_gc(x) ((x<<6) & 0xC0)

/* PSC 0 Balance Flank Width Modulation */
#define PSC0_PCTL0_PBFM0_gc(x) ((x<<2) & 0x24)

/* PSC 0 Asynchronous Output Control B */
#define PSC0_PAOC0B_CLEAR_gc (0x00) /* PSC 0 Asynchronous Output Control B - CLEAR */
#define PSC0_PAOC0B_SET_gc   (0x10) /* PSC 0 Asynchronous Output Control B - SET */


/* PSC 0 Asynchronous Output Control A */
#define PSC0_PAOC0A_CLEAR_gc (0x00) /* PSC 0 Asynchronous Output Control A - CLEAR */
#define PSC0_PAOC0A_SET_gc   (0x08) /* PSC 0 Asynchronous Output Control A - SET */


/* PSC0 Complete Cycle */
#define PSC0_PCCYC0_CLEAR_gc (0x00) /* PSC0 Complete Cycle - CLEAR */
#define PSC0_PCCYC0_SET_gc   (0x02) /* PSC0 Complete Cycle - SET */


/* PSC 0 Run */
#define PSC0_PRUN0_CLEAR_gc (0x00) /* PSC 0 Run - CLEAR */
#define PSC0_PRUN0_SET_gc   (0x01) /* PSC 0 Run - SET */


/* PSC 0 Fifty */
#define PSC0_PFIFTY0_CLEAR_gc (0x00) /* PSC 0 Fifty - CLEAR */
#define PSC0_PFIFTY0_SET_gc   (0x80) /* PSC 0 Fifty - SET */


/* PSC 0 Autolock */
#define PSC0_PALOCK0_CLEAR_gc (0x00) /* PSC 0 Autolock - CLEAR */
#define PSC0_PALOCK0_SET_gc   (0x40) /* PSC 0 Autolock - SET */


/* PSC 0 Lock */
#define PSC0_PLOCK0_CLEAR_gc (0x00) /* PSC 0 Lock - CLEAR */
#define PSC0_PLOCK0_SET_gc   (0x20) /* PSC 0 Lock - SET */


/* PSC 0 Mode */
#define PSC0_PCNF0_PMODE0_gc(x) ((x<<3) & 0x18)

/* PSC 0 Output Polarity */
#define PSC0_POP0_CLEAR_gc (0x00) /* PSC 0 Output Polarity - CLEAR */
#define PSC0_POP0_SET_gc   (0x04) /* PSC 0 Output Polarity - SET */


/* PSC 0 Input Clock Select */
#define PSC0_PCLKSEL0_CLEAR_gc (0x00) /* PSC 0 Input Clock Select - CLEAR */
#define PSC0_PCLKSEL0_SET_gc   (0x02) /* PSC 0 Input Clock Select - SET */


/* PSC Input Select */
#define PSC0_PISEL0A1_CLEAR_gc (0x00) /* PSC Input Select - CLEAR */
#define PSC0_PISEL0A1_SET_gc   (0x80) /* PSC Input Select - SET */


/* PSC Input Select */
#define PSC0_PISEL0B1_CLEAR_gc (0x00) /* PSC Input Select - CLEAR */
#define PSC0_PISEL0B1_SET_gc   (0x40) /* PSC Input Select - SET */


/* Synchronisation out for ADC selection */
#define PSC0_PSOC0_PSYNC0_gc(x) ((x<<4) & 0x30)

/* PSCOUT01 Output Enable */
#define PSC0_POEN0B_CLEAR_gc (0x00) /* PSCOUT01 Output Enable - CLEAR */
#define PSC0_POEN0B_SET_gc   (0x04) /* PSCOUT01 Output Enable - SET */


/* PSCOUT00 Output Enable */
#define PSC0_POEN0A_CLEAR_gc (0x00) /* PSCOUT00 Output Enable - CLEAR */
#define PSC0_POEN0A_SET_gc   (0x01) /* PSCOUT00 Output Enable - SET */


/* External Event B Interrupt Enable */
#define PSC0_PEVE0B_CLEAR_gc (0x00) /* External Event B Interrupt Enable - CLEAR */
#define PSC0_PEVE0B_SET_gc   (0x10) /* External Event B Interrupt Enable - SET */


/* External Event A Interrupt Enable */
#define PSC0_PEVE0A_CLEAR_gc (0x00) /* External Event A Interrupt Enable - CLEAR */
#define PSC0_PEVE0A_SET_gc   (0x08) /* External Event A Interrupt Enable - SET */


/* End of Enhanced Cycle Enable */
#define PSC0_PEOEPE0_CLEAR_gc (0x00) /* End of Enhanced Cycle Enable - CLEAR */
#define PSC0_PEOEPE0_SET_gc   (0x02) /* End of Enhanced Cycle Enable - SET */


/* End of Cycle Interrupt Enable */
#define PSC0_PEOPE0_CLEAR_gc (0x00) /* End of Cycle Interrupt Enable - CLEAR */
#define PSC0_PEOPE0_SET_gc   (0x01) /* End of Cycle Interrupt Enable - SET */


/* PSC 0 Output A Activity */
#define PSC0_POAC0B_CLEAR_gc (0x00) /* PSC 0 Output A Activity - CLEAR */
#define PSC0_POAC0B_SET_gc   (0x80) /* PSC 0 Output A Activity - SET */


/* PSC 0 Output A Activity */
#define PSC0_POAC0A_CLEAR_gc (0x00) /* PSC 0 Output A Activity - CLEAR */
#define PSC0_POAC0A_SET_gc   (0x40) /* PSC 0 Output A Activity - SET */


/* External Event B Interrupt */
#define PSC0_PEV0B_CLEAR_gc (0x00) /* External Event B Interrupt - CLEAR */
#define PSC0_PEV0B_SET_gc   (0x10) /* External Event B Interrupt - SET */


/* External Event A Interrupt */
#define PSC0_PEV0A_CLEAR_gc (0x00) /* External Event A Interrupt - CLEAR */
#define PSC0_PEV0A_SET_gc   (0x08) /* External Event A Interrupt - SET */


/* Ramp Number */
#define PSC0_PIFR0_PRN0_gc(x) ((x<<1) & 0x06)

/* End of PSC0 Interrupt */
#define PSC0_PEOP0_CLEAR_gc (0x00) /* End of PSC0 Interrupt - CLEAR */
#define PSC0_PEOP0_SET_gc   (0x01) /* End of PSC0 Interrupt - SET */


/* PSC 2 Capture Software Trigger Bit */
#define PSC2_PCST2_CLEAR_gc (0x00)   /* PSC 2 Capture Software Trigger Bit - CLEAR */
#define PSC2_PCST2_SET_gc   (0x8000) /* PSC 2 Capture Software Trigger Bit - SET */


/* PSC 2 Input Capture Bytes */
#define PSC2_PICR2_PICR2_gc(x) (x & 0xFFF)

/* PSC 2 Capture Enable Input Part B */
#define PSC2_PCAE2B_CLEAR_gc (0x00) /* PSC 2 Capture Enable Input Part B - CLEAR */
#define PSC2_PCAE2B_SET_gc   (0x80) /* PSC 2 Capture Enable Input Part B - SET */


/* PSC 2 Input Select for Part B */
#define PSC2_PISEL2B_CLEAR_gc (0x00) /* PSC 2 Input Select for Part B - CLEAR */
#define PSC2_PISEL2B_SET_gc   (0x40) /* PSC 2 Input Select for Part B - SET */


/* PSC 2 Edge Level Selector on Input Part B */
#define PSC2_PELEV2B_CLEAR_gc (0x00) /* PSC 2 Edge Level Selector on Input Part B - CLEAR */
#define PSC2_PELEV2B_SET_gc   (0x20) /* PSC 2 Edge Level Selector on Input Part B - SET */


/* PSC 2 Filter Enable on Input Part B */
#define PSC2_PFLTE2B_CLEAR_gc (0x00) /* PSC 2 Filter Enable on Input Part B - CLEAR */
#define PSC2_PFLTE2B_SET_gc   (0x10) /* PSC 2 Filter Enable on Input Part B - SET */


/* PSC 2 Retrigger and Fault Mode for Part B */
#define PSC2_PFRC2B_PRFM2B_gc(x) (x & 0x0F)

/* PSC 2 Capture Enable Input Part A */
#define PSC2_PCAE2A_CLEAR_gc (0x00) /* PSC 2 Capture Enable Input Part A - CLEAR */
#define PSC2_PCAE2A_SET_gc   (0x80) /* PSC 2 Capture Enable Input Part A - SET */


/* PSC 2 Input Select for Part A */
#define PSC2_PISEL2A_CLEAR_gc (0x00) /* PSC 2 Input Select for Part A - CLEAR */
#define PSC2_PISEL2A_SET_gc   (0x40) /* PSC 2 Input Select for Part A - SET */


/* PSC 2 Edge Level Selector on Input Part A */
#define PSC2_PELEV2A_CLEAR_gc (0x00) /* PSC 2 Edge Level Selector on Input Part A - CLEAR */
#define PSC2_PELEV2A_SET_gc   (0x20) /* PSC 2 Edge Level Selector on Input Part A - SET */


/* PSC 2 Filter Enable on Input Part A */
#define PSC2_PFLTE2A_CLEAR_gc (0x00) /* PSC 2 Filter Enable on Input Part A - CLEAR */
#define PSC2_PFLTE2A_SET_gc   (0x10) /* PSC 2 Filter Enable on Input Part A - SET */


/* PSC 2 Retrigger and Fault Mode for Part A */
#define PSC2_PFRC2A_PRFM2A_gc(x) (x & 0x0F)

/* PSC 2 Prescaler Selects */
#define PSC2_PCTL2_PPRE2_gc(x) ((x<<6) & 0xC0)

/* Balance Flank Width Modulation */
#define PSC2_PBFM2_CLEAR_gc (0x00) /* Balance Flank Width Modulation - CLEAR */
#define PSC2_PBFM2_SET_gc   (0x20) /* Balance Flank Width Modulation - SET */


/* PSC 2 Asynchronous Output Control B */
#define PSC2_PAOC2B_CLEAR_gc (0x00) /* PSC 2 Asynchronous Output Control B - CLEAR */
#define PSC2_PAOC2B_SET_gc   (0x10) /* PSC 2 Asynchronous Output Control B - SET */


/* PSC 2 Asynchronous Output Control A */
#define PSC2_PAOC2A_CLEAR_gc (0x00) /* PSC 2 Asynchronous Output Control A - CLEAR */
#define PSC2_PAOC2A_SET_gc   (0x08) /* PSC 2 Asynchronous Output Control A - SET */


/* PSC2 Auto Run */
#define PSC2_PARUN2_CLEAR_gc (0x00) /* PSC2 Auto Run - CLEAR */
#define PSC2_PARUN2_SET_gc   (0x04) /* PSC2 Auto Run - SET */


/* PSC2 Complete Cycle */
#define PSC2_PCCYC2_CLEAR_gc (0x00) /* PSC2 Complete Cycle - CLEAR */
#define PSC2_PCCYC2_SET_gc   (0x02) /* PSC2 Complete Cycle - SET */


/* PSC 2 Run */
#define PSC2_PRUN2_CLEAR_gc (0x00) /* PSC 2 Run - CLEAR */
#define PSC2_PRUN2_SET_gc   (0x01) /* PSC 2 Run - SET */


/* PSC 2 Fifty */
#define PSC2_PFIFTY2_CLEAR_gc (0x00) /* PSC 2 Fifty - CLEAR */
#define PSC2_PFIFTY2_SET_gc   (0x80) /* PSC 2 Fifty - SET */


/* PSC 2 Autolock */
#define PSC2_PALOCK2_CLEAR_gc (0x00) /* PSC 2 Autolock - CLEAR */
#define PSC2_PALOCK2_SET_gc   (0x40) /* PSC 2 Autolock - SET */


/* PSC 2 Lock */
#define PSC2_PLOCK2_CLEAR_gc (0x00) /* PSC 2 Lock - CLEAR */
#define PSC2_PLOCK2_SET_gc   (0x20) /* PSC 2 Lock - SET */


/* PSC 2 Mode */
#define PSC2_PCNF2_PMODE2_gc(x) ((x<<3) & 0x18)

/* PSC 2 Output Polarity */
#define PSC2_POP2_CLEAR_gc (0x00) /* PSC 2 Output Polarity - CLEAR */
#define PSC2_POP2_SET_gc   (0x04) /* PSC 2 Output Polarity - SET */


/* PSC 2 Input Clock Select */
#define PSC2_PCLKSEL2_CLEAR_gc (0x00) /* PSC 2 Input Clock Select - CLEAR */
#define PSC2_PCLKSEL2_SET_gc   (0x02) /* PSC 2 Input Clock Select - SET */


/* PSC 2 Output Matrix Enable */
#define PSC2_POME2_CLEAR_gc (0x00) /* PSC 2 Output Matrix Enable - CLEAR */
#define PSC2_POME2_SET_gc   (0x01) /* PSC 2 Output Matrix Enable - SET */


/* PSC 2 Enhanced Configuration Register-PASDLK2 */
#define PSC2_PCNFE2_PASDLK2_gc(x) ((x<<5) & 0xE0)

/* PSC 2 Enhanced Configuration Register-PBFM21 */
#define PSC2_PBFM21_CLEAR_gc (0x00) /* PSC 2 Enhanced Configuration Register-PBFM21 - CLEAR */
#define PSC2_PBFM21_SET_gc   (0x10) /* PSC 2 Enhanced Configuration Register-PBFM21 - SET */


/* PSC 2 Enhanced Configuration Register-PELEV2A1 */
#define PSC2_PELEV2A1_CLEAR_gc (0x00) /* PSC 2 Enhanced Configuration Register-PELEV2A1 - CLEAR */
#define PSC2_PELEV2A1_SET_gc   (0x08) /* PSC 2 Enhanced Configuration Register-PELEV2A1 - SET */


/* PSC 2 Enhanced Configuration Register-PELEV2B1 */
#define PSC2_PELEV2B1_CLEAR_gc (0x00) /* PSC 2 Enhanced Configuration Register-PELEV2B1 - CLEAR */
#define PSC2_PELEV2B1_SET_gc   (0x04) /* PSC 2 Enhanced Configuration Register-PELEV2B1 - SET */


/* PSC 2 Enhanced Configuration Register-PISEL2A1 */
#define PSC2_PISEL2A1_CLEAR_gc (0x00) /* PSC 2 Enhanced Configuration Register-PISEL2A1 - CLEAR */
#define PSC2_PISEL2A1_SET_gc   (0x02) /* PSC 2 Enhanced Configuration Register-PISEL2A1 - SET */


/* PSC 2 Enhanced Configuration Register-PISEL2B1 */
#define PSC2_PISEL2B1_CLEAR_gc (0x00) /* PSC 2 Enhanced Configuration Register-PISEL2B1 - CLEAR */
#define PSC2_PISEL2B1_SET_gc   (0x01) /* PSC 2 Enhanced Configuration Register-PISEL2B1 - SET */


/* Output Matrix Output B Ramps */
#define PSC2_POM2_POMV2B_gc(x) ((x<<4) & 0xF0)

/* Output Matrix Output A Ramps */
#define PSC2_POM2_POMV2A_gc(x) (x & 0x0F)

/* PSC 2 Output 23 Select */
#define PSC2_PSOC2_POS2_gc(x) ((x<<6) & 0xC0)

/* Synchronization Out for ADC Selection */
#define PSC2_PSOC2_PSYNC2_gc(x) ((x<<4) & 0x30)

/* PSCOUT23 Output Enable */
#define PSC2_POEN2D_CLEAR_gc (0x00) /* PSCOUT23 Output Enable - CLEAR */
#define PSC2_POEN2D_SET_gc   (0x08) /* PSCOUT23 Output Enable - SET */


/* PSCOUT21 Output Enable */
#define PSC2_POEN2B_CLEAR_gc (0x00) /* PSCOUT21 Output Enable - CLEAR */
#define PSC2_POEN2B_SET_gc   (0x04) /* PSCOUT21 Output Enable - SET */


/* PSCOUT22 Output Enable */
#define PSC2_POEN2C_CLEAR_gc (0x00) /* PSCOUT22 Output Enable - CLEAR */
#define PSC2_POEN2C_SET_gc   (0x02) /* PSCOUT22 Output Enable - SET */


/* PSCOUT20 Output Enable */
#define PSC2_POEN2A_CLEAR_gc (0x00) /* PSCOUT20 Output Enable - CLEAR */
#define PSC2_POEN2A_SET_gc   (0x01) /* PSCOUT20 Output Enable - SET */


/* PSC 2 Synchro Error Interrupt Enable */
#define PSC2_PSEIE2_CLEAR_gc (0x00) /* PSC 2 Synchro Error Interrupt Enable - CLEAR */
#define PSC2_PSEIE2_SET_gc   (0x20) /* PSC 2 Synchro Error Interrupt Enable - SET */


/* External Event B Interrupt Enable */
#define PSC2_PEVE2B_CLEAR_gc (0x00) /* External Event B Interrupt Enable - CLEAR */
#define PSC2_PEVE2B_SET_gc   (0x10) /* External Event B Interrupt Enable - SET */


/* External Event A Interrupt Enable */
#define PSC2_PEVE2A_CLEAR_gc (0x00) /* External Event A Interrupt Enable - CLEAR */
#define PSC2_PEVE2A_SET_gc   (0x08) /* External Event A Interrupt Enable - SET */


/* End of Enhanced Cycle Interrupt Enable */
#define PSC2_PEOEPE2_CLEAR_gc (0x00) /* End of Enhanced Cycle Interrupt Enable - CLEAR */
#define PSC2_PEOEPE2_SET_gc   (0x02) /* End of Enhanced Cycle Interrupt Enable - SET */


/* End of Cycle Interrupt Enable */
#define PSC2_PEOPE2_CLEAR_gc (0x00) /* End of Cycle Interrupt Enable - CLEAR */
#define PSC2_PEOPE2_SET_gc   (0x01) /* End of Cycle Interrupt Enable - SET */


/* PSC 2 Output A Activity */
#define PSC2_POAC2B_CLEAR_gc (0x00) /* PSC 2 Output A Activity - CLEAR */
#define PSC2_POAC2B_SET_gc   (0x80) /* PSC 2 Output A Activity - SET */


/* PSC 2 Output A Activity */
#define PSC2_POAC2A_CLEAR_gc (0x00) /* PSC 2 Output A Activity - CLEAR */
#define PSC2_POAC2A_SET_gc   (0x40) /* PSC 2 Output A Activity - SET */


/* PSC 2 Synchro Error Interrupt */
#define PSC2_PSEI2_CLEAR_gc (0x00) /* PSC 2 Synchro Error Interrupt - CLEAR */
#define PSC2_PSEI2_SET_gc   (0x20) /* PSC 2 Synchro Error Interrupt - SET */


/* External Event B Interrupt */
#define PSC2_PEV2B_CLEAR_gc (0x00) /* External Event B Interrupt - CLEAR */
#define PSC2_PEV2B_SET_gc   (0x10) /* External Event B Interrupt - SET */


/* External Event A Interrupt */
#define PSC2_PEV2A_CLEAR_gc (0x00) /* External Event A Interrupt - CLEAR */
#define PSC2_PEV2A_SET_gc   (0x08) /* External Event A Interrupt - SET */


/* Ramp Number */
#define PSC2_PIFR2_PRN2_gc(x) ((x<<1) & 0x06)

/* End of PSC2 Interrupt */
#define PSC2_PEOP2_CLEAR_gc (0x00) /* End of PSC2 Interrupt - CLEAR */
#define PSC2_PEOP2_SET_gc   (0x01) /* End of PSC2 Interrupt - SET */


/*
--------------------------------------------------------------------------------
TC16 - Timer/Counter, 16-bit
--------------------------------------------------------------------------------
*/


/* Timer/Counter1 Input Capture Interrupt Enable */
#define TC1_ICIE1_CLEAR_gc (0x00) /* Timer/Counter1 Input Capture Interrupt Enable - CLEAR */
#define TC1_ICIE1_SET_gc   (0x20) /* Timer/Counter1 Input Capture Interrupt Enable - SET */


/* Timer/Counter1 Overflow Interrupt Enable */
#define TC1_TOIE1_CLEAR_gc (0x00) /* Timer/Counter1 Overflow Interrupt Enable - CLEAR */
#define TC1_TOIE1_SET_gc   (0x01) /* Timer/Counter1 Overflow Interrupt Enable - SET */


/* Input Capture Flag 1 */
#define TC1_ICF1_CLEAR_gc (0x00) /* Input Capture Flag 1 - CLEAR */
#define TC1_ICF1_SET_gc   (0x20) /* Input Capture Flag 1 - SET */


/* Timer/Counter1 Overflow Flag */
#define TC1_TOV1_CLEAR_gc (0x00) /* Timer/Counter1 Overflow Flag - CLEAR */
#define TC1_TOV1_SET_gc   (0x01) /* Timer/Counter1 Overflow Flag - SET */


/* Input Capture 1 Noise Canceler */
#define TC1_ICNC1_CLEAR_gc (0x00) /* Input Capture 1 Noise Canceler - CLEAR */
#define TC1_ICNC1_SET_gc   (0x80) /* Input Capture 1 Noise Canceler - SET */


/* Input Capture 1 Edge Select */
#define TC1_ICES1_CLEAR_gc (0x00) /* Input Capture 1 Edge Select - CLEAR */
#define TC1_ICES1_SET_gc   (0x40) /* Input Capture 1 Edge Select - SET */


/* Waveform Generation Mode */
#define TC1_WGM13_CLEAR_gc (0x00) /* Waveform Generation Mode - CLEAR */
#define TC1_WGM13_SET_gc   (0x10) /* Waveform Generation Mode - SET */


/* Prescaler source of Timer/Counter 1 */
#define TC1_CS1_VAL_0x00_gc (0x00) /* No Clock Source (Stopped) */
#define TC1_CS1_VAL_0x01_gc (0x01) /* Running, No Prescaling */
#define TC1_CS1_VAL_0x02_gc (0x02) /* Running, CLK/8 */
#define TC1_CS1_VAL_0x03_gc (0x03) /* Running, CLK/64 */
#define TC1_CS1_VAL_0x04_gc (0x04) /* Running, CLK/256 */
#define TC1_CS1_VAL_0x05_gc (0x05) /* Running, CLK/1024 */
#define TC1_CS1_VAL_0x06_gc (0x06) /* Running, ExtClk Tx Falling Edge */
#define TC1_CS1_VAL_0x07_gc (0x07) /* Running, ExtClk Tx Rising Edge */


/*
--------------------------------------------------------------------------------
BOOT_LOAD - Bootloader
--------------------------------------------------------------------------------
*/


/* SPM Interrupt Enable */
#define BOOT_LOAD_SPMIE_CLEAR_gc (0x00) /* SPM Interrupt Enable - CLEAR */
#define BOOT_LOAD_SPMIE_SET_gc   (0x80) /* SPM Interrupt Enable - SET */


/* Read While Write Section Busy */
#define BOOT_LOAD_RWWSB_CLEAR_gc (0x00) /* Read While Write Section Busy - CLEAR */
#define BOOT_LOAD_RWWSB_SET_gc   (0x40) /* Read While Write Section Busy - SET */


/* Signature Row Read */
#define BOOT_LOAD_SIGRD_CLEAR_gc (0x00) /* Signature Row Read - CLEAR */
#define BOOT_LOAD_SIGRD_SET_gc   (0x20) /* Signature Row Read - SET */


/* Read While Write section read enable */
#define BOOT_LOAD_RWWSRE_CLEAR_gc (0x00) /* Read While Write section read enable - CLEAR */
#define BOOT_LOAD_RWWSRE_SET_gc   (0x10) /* Read While Write section read enable - SET */


/* Boot Lock Bit Set */
#define BOOT_LOAD_BLBSET_CLEAR_gc (0x00) /* Boot Lock Bit Set - CLEAR */
#define BOOT_LOAD_BLBSET_SET_gc   (0x08) /* Boot Lock Bit Set - SET */


/* Page Write */
#define BOOT_LOAD_PGWRT_CLEAR_gc (0x00) /* Page Write - CLEAR */
#define BOOT_LOAD_PGWRT_SET_gc   (0x04) /* Page Write - SET */


/* Page Erase */
#define BOOT_LOAD_PGERS_CLEAR_gc (0x00) /* Page Erase - CLEAR */
#define BOOT_LOAD_PGERS_SET_gc   (0x02) /* Page Erase - SET */


/* Store Program Memory Enable */
#define BOOT_LOAD_SPMEN_CLEAR_gc (0x00) /* Store Program Memory Enable - CLEAR */
#define BOOT_LOAD_SPMEN_SET_gc   (0x01) /* Store Program Memory Enable - SET */

#endif

/*
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
C/ASM COMMON DEFINITIONS
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/

/*
================================================================================
Flattened fully qualified IO register names
================================================================================
*/


/* PORTB - I/O Port (0x0000) */
#define PORTBB_BASE      _SFR_MEM8 (0x0000) /* PORTBB Base Address */
#define PORTBB_PINB      _SFR_MEM8 (0x0023) /* Port B Input Pins */
#define PORTBB_DDRB      _SFR_MEM8 (0x0024) /* Port B Data Direction Register */
#define PORTBB_PORTB     _SFR_MEM8 (0x0025) /* Port B Data Register */

/* PORTD - I/O Port (0x0000) */
#define PORTDD_BASE      _SFR_MEM8 (0x0000) /* PORTDD Base Address */
#define PORTDD_PIND      _SFR_MEM8 (0x0029) /* Port D Input Pins */
#define PORTDD_DDRD      _SFR_MEM8 (0x002A) /* Port D Data Direction Register */
#define PORTDD_PORTD     _SFR_MEM8 (0x002B) /* Port D Data Register */

/* PORTE - I/O Port (0x0000) */
#define PORTEE_BASE      _SFR_MEM8 (0x0000) /* PORTEE Base Address */
#define PORTEE_PINE      _SFR_MEM8 (0x002C) /* Port E Input Pins */
#define PORTEE_DDRE      _SFR_MEM8 (0x002D) /* Port E Data Direction Register */
#define PORTEE_PORTE     _SFR_MEM8 (0x002E) /* Port E Data Register */

/* DAC - Digital-to-Analog Converter (0x0000) */
#define DAC_BASE         _SFR_MEM16(0x0000) /* DAC Base Address */
#define DAC_DAC          _SFR_MEM16(0x0058) /* DAC Data Register */
#define DAC_DACL         _SFR_MEM8 (0x0058) /* DAC Data Register LOW BYTE */
#define DAC_DACH         _SFR_MEM8 (0x0059) /* DAC Data Register HIGH BYTE */
#define DAC_DACON        _SFR_MEM8 (0x0076) /* DAC Control Register */

/* SPI - Serial Peripheral Interface (0x0000) */
#define SPI_BASE         _SFR_MEM8 (0x0000) /* SPI Base Address */
#define SPI_SPCR         _SFR_MEM8 (0x0037) /* SPI Control Register */
#define SPI_SPSR         _SFR_MEM8 (0x0038) /* SPI Status Register */
#define SPI_SPDR         _SFR_MEM8 (0x0056) /* SPI Data Register */

/* WDT - Watchdog Timer (0x0000) */
#define WDT_BASE         _SFR_MEM8 (0x0000) /* WDT Base Address */
#define WDT_WDTCSR       _SFR_MEM8 (0x0082) /* Watchdog Timer Control Register */

/* EXINT - External Interrupts (0x0000) */
#define EXINT_BASE       _SFR_MEM8 (0x0000) /* EXINT Base Address */
#define EXINT_EIFR       _SFR_MEM8 (0x0040) /* External Interrupt Flag Register */
#define EXINT_EIMSK      _SFR_MEM8 (0x0041) /* External Interrupt Mask Register */
#define EXINT_EICRA      _SFR_MEM8 (0x0089) /* External Interrupt Control Register A */

/* ADC - Analog-to-Digital Converter (0x0000) */
#define ADC_BASE         _SFR_MEM8 (0x0000) /* ADC Base Address */
#define ADC_ADCSRA       _SFR_MEM8 (0x0026) /* The ADC Control and Status register */
#define ADC_ADCSRB       _SFR_MEM8 (0x0027) /* ADC Control and Status Register B */
#define ADC_ADMUX        _SFR_MEM8 (0x0028) /* The ADC multiplexer Selection Register */
#define ADC_ADC          _SFR_MEM16(0x004C) /* ADC Data Register Bytes */
#define ADC_ADCL         _SFR_MEM8 (0x004C) /* ADC Data Register Bytes LOW BYTE */
#define ADC_ADCH         _SFR_MEM8 (0x004D) /* ADC Data Register Bytes HIGH BYTE */
#define ADC_DIDR0        _SFR_MEM8 (0x0077) /* Digital Input Disable Register 0 */
#define ADC_DIDR1        _SFR_MEM8 (0x0078) /* Digital Input Disable Register 1 */
#define ADC_AMP0CSR      _SFR_MEM8 (0x0079) 

/* AC - Analog Comparator (0x0000) */
#define AC_BASE          _SFR_MEM8 (0x0000) /* AC Base Address */
#define AC_ACSR          _SFR_MEM8 (0x0020) /* Analog Comparator Status Register */
#define AC_AC1ECON       _SFR_MEM8 (0x007A) 
#define AC_AC2ECON       _SFR_MEM8 (0x007B) 
#define AC_AC3ECON       _SFR_MEM8 (0x007C) 
#define AC_AC1CON        _SFR_MEM8 (0x007D) /* Analog Comparator 1 Control Register */
#define AC_AC2CON        _SFR_MEM8 (0x007E) /* Analog Comparator 2 Control Register */
#define AC_AC3CON        _SFR_MEM8 (0x007F) /* Analog Comparator3 Control Register */

/* CPU - CPU Registers (0x0000) */
#define CPU_BASE         _SFR_MEM8 (0x0000) /* CPU Base Address */
#define CPU_GPIOR0       _SFR_MEM8 (0x0039) /* General Purpose IO Register 0 */
#define CPU_GPIOR1       _SFR_MEM8 (0x003A) /* General Purpose IO Register 1 */
#define CPU_GPIOR2       _SFR_MEM8 (0x003B) /* General Purpose IO Register 2 */
#define CPU_SMCR         _SFR_MEM8 (0x0053) /* Sleep Mode Control Register */
#define CPU_MCUSR        _SFR_MEM8 (0x0054) /* MCU Status Register */
#define CPU_MCUCR        _SFR_MEM8 (0x0055) /* MCU Control Register */
#define CPU_SP           _SFR_MEM16(0x005D) /* Stack Pointer  */
#define CPU_SPL          _SFR_MEM8 (0x005D) /* Stack Pointer  LOW BYTE */
#define CPU_SPH          _SFR_MEM8 (0x005E) /* Stack Pointer  HIGH BYTE */
#define CPU_SREG         _SFR_MEM8 (0x005F) /* Status Register */
#define CPU_BGCRR        _SFR_MEM8 (0x0080) /* BandGap Resistor Calibration Register */
#define CPU_BGCCR        _SFR_MEM8 (0x0081) /* BandGap Current Calibration Register */
#define CPU_CLKPR        _SFR_MEM8 (0x0083) 
#define CPU_CLKCSR       _SFR_MEM8 (0x0084) 
#define CPU_CLKSELR      _SFR_MEM8 (0x0085) 
#define CPU_PRR          _SFR_MEM8 (0x0086) /* Power Reduction Register */
#define CPU_PLLCSR       _SFR_MEM8 (0x0087) /* PLL Control And Status Register */
#define CPU_OSCCAL       _SFR_MEM8 (0x0088) /* Oscillator Calibration Value */

/* EEPROM - EEPROM (0x0000) */
#define EEPROM_BASE      _SFR_MEM8 (0x0000) /* EEPROM Base Address */
#define EEPROM_EECR      _SFR_MEM8 (0x003C) /* EEPROM Control Register */
#define EEPROM_EEDR      _SFR_MEM8 (0x003D) /* EEPROM Data Register */
#define EEPROM_EEAR      _SFR_MEM16(0x003E) /* EEPROM Read/Write Access Bytes */
#define EEPROM_EEARL     _SFR_MEM8 (0x003E) /* EEPROM Read/Write Access Bytes LOW BYTE */
#define EEPROM_EEARH     _SFR_MEM8 (0x003F) /* EEPROM Read/Write Access Bytes HIGH BYTE */

/* PSC0 - Power Stage Controller (0x0000) */
#define PSC00_BASE       _SFR_MEM8 (0x0000) /* PSC00 Base Address */
#define PSC00_PIM0       _SFR_MEM8 (0x002F) /* PSC0 Interrupt Mask Register */
#define PSC00_PIFR0      _SFR_MEM8 (0x0030) /* PSC0 Interrupt Flag Register */
#define PSC00_PCNF0      _SFR_MEM8 (0x0031) /* PSC 0 Configuration Register */
#define PSC00_PCTL0      _SFR_MEM8 (0x0032) /* PSC 0 Control Register */
#define PSC00_OCR0SB     _SFR_MEM16(0x0042) /* Output Compare SB Register  */
#define PSC00_OCR0SBL    _SFR_MEM8 (0x0042) /* Output Compare SB Register  LOW BYTE */
#define PSC00_OCR0SBH    _SFR_MEM8 (0x0043) /* Output Compare SB Register  HIGH BYTE */
#define PSC00_OCR0RB     _SFR_MEM16(0x0044) /* Output Compare RB Register  */
#define PSC00_OCR0RBL    _SFR_MEM8 (0x0044) /* Output Compare RB Register  LOW BYTE */
#define PSC00_OCR0RBH    _SFR_MEM8 (0x0045) /* Output Compare RB Register  HIGH BYTE */
#define PSC00_OCR0RA     _SFR_MEM16(0x004A) /* Output Compare RA Register  */
#define PSC00_OCR0RAL    _SFR_MEM8 (0x004A) /* Output Compare RA Register  LOW BYTE */
#define PSC00_OCR0RAH    _SFR_MEM8 (0x004B) /* Output Compare RA Register  HIGH BYTE */
#define PSC00_OCR0SA     _SFR_MEM16(0x0060) /* Output Compare SA Register  */
#define PSC00_OCR0SAL    _SFR_MEM8 (0x0060) /* Output Compare SA Register  LOW BYTE */
#define PSC00_OCR0SAH    _SFR_MEM8 (0x0061) /* Output Compare SA Register  HIGH BYTE */
#define PSC00_PFRC0A     _SFR_MEM8 (0x0062) /* PSC 0 Input A Control */
#define PSC00_PFRC0B     _SFR_MEM8 (0x0063) /* PSC 0 Input B Control */
#define PSC00_PICR0      _SFR_MEM16(0x0068) /* PSC 0 Input Capture Register  */
#define PSC00_PICR0L     _SFR_MEM8 (0x0068) /* PSC 0 Input Capture Register  LOW BYTE */
#define PSC00_PICR0H     _SFR_MEM8 (0x0069) /* PSC 0 Input Capture Register  HIGH BYTE */
#define PSC00_PSOC0      _SFR_MEM8 (0x006A) /* PSC0 Synchro and Output Configuration */

/* PSC2 - Power Stage Controller (0x0000) */
#define PSC22_BASE       _SFR_MEM8 (0x0000) /* PSC22 Base Address */
#define PSC22_PIM2       _SFR_MEM8 (0x0033) /* PSC2 Interrupt Mask Register */
#define PSC22_PIFR2      _SFR_MEM8 (0x0034) /* PSC2 Interrupt Flag Register */
#define PSC22_PCNF2      _SFR_MEM8 (0x0035) /* PSC 2 Configuration Register */
#define PSC22_PCTL2      _SFR_MEM8 (0x0036) /* PSC 2 Control Register */
#define PSC22_OCR2SB     _SFR_MEM16(0x0046) /* Output Compare SB Register  */
#define PSC22_OCR2SBL    _SFR_MEM8 (0x0046) /* Output Compare SB Register  LOW BYTE */
#define PSC22_OCR2SBH    _SFR_MEM8 (0x0047) /* Output Compare SB Register  HIGH BYTE */
#define PSC22_OCR2RB     _SFR_MEM16(0x0048) /* Output Compare RB Register  */
#define PSC22_OCR2RBL    _SFR_MEM8 (0x0048) /* Output Compare RB Register  LOW BYTE */
#define PSC22_OCR2RBH    _SFR_MEM8 (0x0049) /* Output Compare RB Register  HIGH BYTE */
#define PSC22_OCR2RA     _SFR_MEM16(0x004E) /* Output Compare RA Register  */
#define PSC22_OCR2RAL    _SFR_MEM8 (0x004E) /* Output Compare RA Register  LOW BYTE */
#define PSC22_OCR2RAH    _SFR_MEM8 (0x004F) /* Output Compare RA Register  HIGH BYTE */
#define PSC22_OCR2SA     _SFR_MEM16(0x0064) /* Output Compare SA Register  */
#define PSC22_OCR2SAL    _SFR_MEM8 (0x0064) /* Output Compare SA Register  LOW BYTE */
#define PSC22_OCR2SAH    _SFR_MEM8 (0x0065) /* Output Compare SA Register  HIGH BYTE */
#define PSC22_PFRC2A     _SFR_MEM8 (0x0066) /* PSC 2 Input B Control */
#define PSC22_PFRC2B     _SFR_MEM8 (0x0067) /* PSC 2 Input B Control */
#define PSC22_PICR2      _SFR_MEM16(0x006C) /* PSC 2 Input Capture Register */
#define PSC22_PICR2L     _SFR_MEM8 (0x006C) /* PSC 2 Input Capture Register LOW BYTE */
#define PSC22_PICR2H     _SFR_MEM8 (0x006D) /* PSC 2 Input Capture Register HIGH BYTE */
#define PSC22_PSOC2      _SFR_MEM8 (0x006E) /* PSC2 Synchro and Output Configuration */
#define PSC22_POM2       _SFR_MEM8 (0x006F) /* PSC 2 Output Matrix */
#define PSC22_PCNFE2     _SFR_MEM8 (0x0070) /* PSC 2 Enhanced Configuration Register */
#define PSC22_PASDLY2    _SFR_MEM8 (0x0071) /* Analog Synchronization Delay Register */

/* TC1 - Timer/Counter, 16-bit (0x0000) */
#define TC16_BASE        _SFR_MEM8 (0x0000) /* TC16 Base Address */
#define TC16_TIMSK1      _SFR_MEM8 (0x0021) /* Timer/Counter Interrupt Mask Register */
#define TC16_TIFR1       _SFR_MEM8 (0x0022) /* Timer/Counter Interrupt Flag register */
#define TC16_TCNT1       _SFR_MEM16(0x005A) /* Timer/Counter1 Bytes */
#define TC16_TCNT1L      _SFR_MEM8 (0x005A) /* Timer/Counter1 Bytes LOW BYTE */
#define TC16_TCNT1H      _SFR_MEM8 (0x005B) /* Timer/Counter1 Bytes HIGH BYTE */
#define TC16_TCCR1B      _SFR_MEM8 (0x008A) /* Timer/Counter1 Control Register B */
#define TC16_ICR1        _SFR_MEM16(0x008C) /* Timer/Counter1 Input Capture Register Bytes */
#define TC16_ICR1L       _SFR_MEM8 (0x008C) /* Timer/Counter1 Input Capture Register Bytes LOW BYTE */
#define TC16_ICR1H       _SFR_MEM8 (0x008D) /* Timer/Counter1 Input Capture Register Bytes HIGH BYTE */

/* BOOT_LOAD - Bootloader (0x0000) */
#define BOOT_LOAD_BASE   _SFR_MEM8 (0x0000) /* BOOT_LOAD Base Address */
#define BOOT_LOAD_SPMCSR _SFR_MEM8 (0x0057) /* Store Program Memory Control Register */

/* FUSE - Fuses (0x0000) */
#define FUSE_BASE        _SFR_MEM8 (0x0000) /* FUSE Base Address */
#define FUSE_LOW         _SFR_MEM8 (0x0000) 
#define FUSE_HIGH        _SFR_MEM8 (0x0001) 
#define FUSE_EXTENDED    _SFR_MEM8 (0x0002) 

/* LOCKBIT - Lockbits (0x0000) */
#define LOCKBIT_BASE     _SFR_MEM8 (0x0000) /* LOCKBIT Base Address */
#define LOCKBIT_LOCKBIT  _SFR_MEM8 (0x0000) 
/* avr-libc typedef for avr/fuse.h */
typedef FUSE_t NVM_FUSES_t;

/*
================================================================================
Interrupt Vector Definitions
================================================================================
*/

/* Vector 0 is the reset vector */
#define None_RESET_vect_num         (0)                 
#define None_RESET_vect             _VECTOR(0)          /* External Pin, Power-on Reset, Brown-out Reset, Watchdog Reset and JTAG AVR Reset */
#define None_PSC2_CAPT_vect_num     (1)                 
#define None_PSC2_CAPT_vect         _VECTOR(1)          /* PSC2 Capture Event */
#define None_PSC2_EC_vect_num       (2)                 
#define None_PSC2_EC_vect           _VECTOR(2)          /* PSC2 End Cycle */
#define None_PSC2_EEC_vect_num      (3)                 
#define None_PSC2_EEC_vect          _VECTOR(3)          /* PSC2 End Of Enhanced Cycle */
#define None_PSC0_CAPT_vect_num     (4)                 
#define None_PSC0_CAPT_vect         _VECTOR(4)          /* PSC0 Capture Event */
#define None_PSC0_EC_vect_num       (5)                 
#define None_PSC0_EC_vect           _VECTOR(5)          /* PSC0 End Cycle */
#define None_PSC0_EEC_vect_num      (6)                 
#define None_PSC0_EEC_vect          _VECTOR(6)          /* PSC0 End Of Enhanced Cycle */
#define None_ANALOG_COMP_1_vect_num (7)                 
#define None_ANALOG_COMP_1_vect     _VECTOR(7)          /* Analog Comparator 1 */
#define None_ANALOG_COMP_2_vect_num (8)                 
#define None_ANALOG_COMP_2_vect     _VECTOR(8)          /* Analog Comparator 2 */
#define None_ANALOG_COMP_3_vect_num (9)                 
#define None_ANALOG_COMP_3_vect     _VECTOR(9)          /* Analog Comparator 3 */
#define None_INT0_vect_num          (10)                
#define None_INT0_vect              _VECTOR(10)         /* External Interrupt Request 0 */
#define None_TIMER1_CAPT_vect_num   (11)                
#define None_TIMER1_CAPT_vect       _VECTOR(11)         /* Timer/Counter1 Capture Event */
#define None_TIMER1_OVF_vect_num    (12)                
#define None_TIMER1_OVF_vect        _VECTOR(12)         /* Timer/Counter1 Overflow */
#define None_ADC_vect_num           (13)                
#define None_ADC_vect               _VECTOR(13)         /* ADC Conversion Complete */
#define None_INT1_vect_num          (14)                
#define None_INT1_vect              _VECTOR(14)         /* External Interrupt Request 1 */
#define None_SPI_STC_vect_num       (15)                
#define None_SPI_STC_vect           _VECTOR(15)         /* SPI Serial Transfer Complet */
#define None_INT2_vect_num          (16)                
#define None_INT2_vect              _VECTOR(16)         /* External Interrupt Request 2 */
#define None_WDT_vect_num           (17)                
#define None_WDT_vect               _VECTOR(17)         /* Watchdog Timeout Interrupt */
#define None_EE_READY_vect_num      (18)                
#define None_EE_READY_vect          _VECTOR(18)         /* EEPROM Ready */
#define None_SPM_READY_vect_num     (19)                
#define None_SPM_READY_vect         _VECTOR(19)         /* Store Program Memory Read */

/* Vector Table Size */
#define _VECTOR_SIZE                (2)                 /* Size of individual vector. */
#define _VECTORS_SIZE               (20 * _VECTOR_SIZE) /* Size of all vectors */
/*
================================================================================
Constants
================================================================================
*/

#define PROGMEM_START            (0x0000)                                         
#define PROGMEM_SIZE             (0x2000)                                         
#define PROGMEM_END              (PROGMEM_START + PROGMEM_SIZE - 1)               

#define FLASH_START              (0x0000)                                         
#define FLASH_SIZE               (0x2000)                                         
#define FLASH_PAGE_SIZE          (0x0040)                                         
#define FLASH_END                (FLASH_START + FLASH_SIZE - 1)                   

#define BOOT_SECTION_1_START     (0x1F00)                                         
#define BOOT_SECTION_1_SIZE      (0x0100)                                         
#define BOOT_SECTION_1_PAGE_SIZE (0x0040)                                         
#define BOOT_SECTION_1_END       (BOOT_SECTION_1_START + BOOT_SECTION_1_SIZE - 1) 

#define BOOT_SECTION_2_START     (0x1E00)                                         
#define BOOT_SECTION_2_SIZE      (0x0200)                                         
#define BOOT_SECTION_2_PAGE_SIZE (0x0040)                                         
#define BOOT_SECTION_2_END       (BOOT_SECTION_2_START + BOOT_SECTION_2_SIZE - 1) 

#define BOOT_SECTION_3_START     (0x1C00)                                         
#define BOOT_SECTION_3_SIZE      (0x0400)                                         
#define BOOT_SECTION_3_PAGE_SIZE (0x0040)                                         
#define BOOT_SECTION_3_END       (BOOT_SECTION_3_START + BOOT_SECTION_3_SIZE - 1) 

#define BOOT_SECTION_4_START     (0x1800)                                         
#define BOOT_SECTION_4_SIZE      (0x0800)                                         
#define BOOT_SECTION_4_PAGE_SIZE (0x0040)                                         
#define BOOT_SECTION_4_END       (BOOT_SECTION_4_START + BOOT_SECTION_4_SIZE - 1) 

#define SIGNATURESMEM_START  (0x0000)                                       
#define SIGNATURESMEM_SIZE   (0x0003)                                       
#define SIGNATURESMEM_END    (SIGNATURESMEM_START + SIGNATURESMEM_SIZE - 1) 

#define SIGNATURES_START     (0x0000)                                       
#define SIGNATURES_SIZE      (0x0003)                                       
#define SIGNATURES_PAGE_SIZE (0x0001)                                       
#define SIGNATURES_END       (SIGNATURES_START + SIGNATURES_SIZE - 1)       

#define FUSESMEM_START  (0x0000)                             
#define FUSESMEM_SIZE   (0x0003)                             
#define FUSESMEM_END    (FUSESMEM_START + FUSESMEM_SIZE - 1) 

#define FUSES_START     (0x0000)                             
#define FUSES_SIZE      (0x0003)                             
#define FUSES_PAGE_SIZE (0x0001)                             
#define FUSES_END       (FUSES_START + FUSES_SIZE - 1)       

#define LOCKBITSMEM_START  (0x0000)                                   
#define LOCKBITSMEM_SIZE   (0x0001)                                   
#define LOCKBITSMEM_END    (LOCKBITSMEM_START + LOCKBITSMEM_SIZE - 1) 

#define LOCKBITS_START     (0x0000)                                   
#define LOCKBITS_SIZE      (0x0001)                                   
#define LOCKBITS_PAGE_SIZE (0x0001)                                   
#define LOCKBITS_END       (LOCKBITS_START + LOCKBITS_SIZE - 1)       

#define DATAMEM_START       (0x0000)                               
#define DATAMEM_SIZE        (0x0200)                               
#define DATAMEM_END         (DATAMEM_START + DATAMEM_SIZE - 1)     

#define REGISTERS_START     (0x0000)                               
#define REGISTERS_SIZE      (0x0020)                               
#define REGISTERS_PAGE_SIZE (0x0001)                               
#define REGISTERS_END       (REGISTERS_START + REGISTERS_SIZE - 1) 

#define MAPPED_IO_START     (0x0020)                               
#define MAPPED_IO_SIZE      (0x00E0)                               
#define MAPPED_IO_PAGE_SIZE (0x0001)                               
#define MAPPED_IO_END       (MAPPED_IO_START + MAPPED_IO_SIZE - 1) 

#define IRAM_START          (0x0100)                               
#define IRAM_SIZE           (0x0100)                               
#define IRAM_PAGE_SIZE      (0x0001)                               
#define IRAM_END            (IRAM_START + IRAM_SIZE - 1)           

#define EEPROMMEM_START         (0x0000)                               
#define EEPROMMEM_SIZE          (0x0200)                               
#define EEPROMMEM_END           (EEPROMMEM_START + EEPROMMEM_SIZE - 1) 

#define EEPROM_START            (0x0000)                               
#define EEPROM_SIZE             (0x0200)                               
#define EEPROM_PAGE_SIZE        (0x0004)                               
#define EEPROM_END              (EEPROM_START + EEPROM_SIZE - 1)       

/* Added MAPPED_EEPROM segment names for avr-libc */
#define MAPPED_EEPROM_START     (EEPROM_START)                         
#define MAPPED_EEPROM_SIZE      (EEPROM_SIZE)                          
#define MAPPED_EEPROM_PAGE_SIZE (EEPROM_PAGE_SIZE)                     
#define MAPPED_EEPROM_END       (EEPROM_END)                           

#define IOMEM_START (0x0000)                       
#define IOMEM_SIZE  (0x0040)                       
#define IOMEM_END   (IOMEM_START + IOMEM_SIZE - 1) 

#define OSCCALMEM_START  (0x0000)                               
#define OSCCALMEM_SIZE   (0x0001)                               
#define OSCCALMEM_END    (OSCCALMEM_START + OSCCALMEM_SIZE - 1) 

#define OSCCAL_START     (0x0000)                               
#define OSCCAL_SIZE      (0x0001)                               
#define OSCCAL_PAGE_SIZE (0x0001)                               
#define OSCCAL_END       (OSCCAL_START + OSCCAL_SIZE - 1)       

/* ============ Port Bits ============ */

#define PORTB0 (0) 
#define PORTB1 (1) 
#define PORTB2 (2) 
#define PORTB3 (3) 
#define PORTB4 (4) 
#define PORTB5 (5) 
#define PORTB6 (6) 
#define PORTB7 (7) 
#define PORTD0 (0) 
#define PORTD1 (1) 
#define PORTD2 (2) 
#define PORTD3 (3) 
#define PORTD4 (4) 
#define PORTD5 (5) 
#define PORTD6 (6) 
#define PORTD7 (7) 
#define PORTE0 (0) 
#define PORTE1 (1) 
#define PORTE2 (2) 

/*
================================================================================
Fuses/LockBits/Signatures
================================================================================
*/

/* ============ Fuses ============ */

#define FUSE_MEMORY_SIZE 2 

/* Fuse offset 0x00 */
#define SUT_CKSEL0 (unsigned char)~_BV(0) /* Select Clock Source bit 0 */
#define SUT_CKSEL1 (unsigned char)~_BV(1) /* Select Clock Source bit 1 */
#define SUT_CKSEL2 (unsigned char)~_BV(2) /* Select Clock Source bit 2 */
#define SUT_CKSEL3 (unsigned char)~_BV(3) /* Select Clock Source bit 3 */
#define SUT_CKSEL4 (unsigned char)~_BV(4) /* Select Clock Source bit 4 */
#define SUT_CKSEL5 (unsigned char)~_BV(5) /* Select Clock Source bit 5 */
#define CKOUT      (unsigned char)~_BV(6) /* Clock output on PORTD1 */
#define CKDIV8     (unsigned char)~_BV(7) /* Divide clock by 8 internally */

/* Fuse offset 0x01 */
#define BOOTRST  (unsigned char)~_BV(0) /* Select Reset Vector */
#define BOOTSZ0  (unsigned char)~_BV(1) /* Select Boot Size bit 0 */
#define BOOTSZ1  (unsigned char)~_BV(2) /* Select Boot Size bit 1 */
#define EESAVE   (unsigned char)~_BV(3) /* Preserve EEPROM through the Chip Erase cycle */
#define WDTON    (unsigned char)~_BV(4) /* Watch-dog Timer always on */
#define SPIEN    (unsigned char)~_BV(5) /* Serial program downloading (SPI) enabled */
#define DWEN     (unsigned char)~_BV(6) /* Debug Wire enable */
#define RSTDISBL (unsigned char)~_BV(7) /* Reset Disabled (Enable PE0 as I/O pin) */

/* Fuse offset 0x02 */
#define BODLEVEL0 (unsigned char)~_BV(0) /* Brown-out Detector Trigger Level bit 0 */
#define BODLEVEL1 (unsigned char)~_BV(1) /* Brown-out Detector Trigger Level bit 1 */
#define BODLEVEL2 (unsigned char)~_BV(2) /* Brown-out Detector Trigger Level bit 2 */
#define PSCINRB   (unsigned char)~_BV(3) /* PSC2 and PSC0 input Reset Behavior */
#define PSCRV     (unsigned char)~_BV(4) /* PSC Reset Value */
#define PSC0RB    (unsigned char)~_BV(5) /* PSC0 Reset Behavior */
#define PSC2RBA   (unsigned char)~_BV(6) /* PSC2 Reset Behavior for 22 and 23 */
#define PSC2RB    (unsigned char)~_BV(7) /* PSC2 Reset Behavior */


/* ========== Lock Bits ========== */
#define __LOCK_BITS_EXIST  


/* ========== Signature ========== */
#define SIGNATURE_0 (0x1E) 
#define SIGNATURE_1 (0x93) 
#define SIGNATURE_2 (0x88) 

#endif /* #ifdef _AVR_AT90PWM81_H_INCLUDED */
