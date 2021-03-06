/******************************************************************************
 *   This file is part of avr-libc3.                                          * 
 *                                                                            * 
 *   Automatically created by devtools/gen-ioheader-atdf.py (V0.91)           * 
 *                                                                            * 
 *   .atpack File: ATmega8HVA.atdf                                            * 
 *   .ATDF File:   atdf/ATmega8HVA.atdf                                       * 
 *   Version:      2.0.12                                                     * 
 *   Date:         2019-04-26                                                 * 
 *   Device:       ATmega8HVA                                                 * 
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
#  define _AVR_IOXXX_H_ "ioATmega8HVA.h"
#else
#  error "Attempt to include more than one <avr/ioXXX.h> file."
#endif

#ifndef _AVR_ATmega8HVA_H_INCLUDED
#  define _AVR_ATmega8HVA_H_INCLUDED

/*
================================================================================
Ungrouped common register
================================================================================
*/

#define OSICSR  _SFR_MEM8 (0x37) /* Oscillator Sampling Interface Control and Status Register */

#define GPIOR0  _SFR_MEM8 (0x3E) /* General Purpose IO Register 0 */

#define GPIOR1  _SFR_MEM8 (0x4A) /* General Purpose IO Register 1 */
#define GPIOR2  _SFR_MEM8 (0x4B) /* General Purpose IO Register 2 */

#define SMCR    _SFR_MEM8 (0x53) /* Sleep Mode Control Register */
#define MCUSR   _SFR_MEM8 (0x54) /* MCU Status Register */
#define MCUCR   _SFR_MEM8 (0x55) /* MCU Control Register */

#define SP      _SFR_MEM16(0x5D) /* Stack Pointer  */
#define SREG    _SFR_MEM8 (0x5F) /* Status Register */

#define CLKPR   _SFR_MEM8 (0x61) /* Clock Prescale Register */

#define PRR0    _SFR_MEM8 (0x64) /* Power Reduction Register 0 */

#define FOSCCAL _SFR_MEM8 (0x66) /* Fast Oscillator Calibration Value */

#define DIDR0   _SFR_MEM8 (0x7E) /* Digital Input Disable Register */


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
} FUSE_t;


/* Watch-dog Timer always on */
typedef enum FUSE_WDTON_enum
{
    FUSE_WDTON_CLEAR_gc = (0x00), /* Watch-dog Timer always on - CLEAR */
    FUSE_WDTON_SET_gc   = (0x80), /* Watch-dog Timer always on - SET */
} FUSE_WDTON_t;

/* Preserve EEPROM through the Chip Erase cycle */
typedef enum FUSE_EESAVE_enum
{
    FUSE_EESAVE_CLEAR_gc = (0x00), /* Preserve EEPROM through the Chip Erase cycle - CLEAR */
    FUSE_EESAVE_SET_gc   = (0x40), /* Preserve EEPROM through the Chip Erase cycle - SET */
} FUSE_EESAVE_t;

/* Serial program downloading (SPI) enabled */
typedef enum FUSE_SPIEN_enum
{
    FUSE_SPIEN_CLEAR_gc = (0x00), /* Serial program downloading (SPI) enabled - CLEAR */
    FUSE_SPIEN_SET_gc   = (0x20), /* Serial program downloading (SPI) enabled - SET */
} FUSE_SPIEN_t;

/* Debug Wire enable */
typedef enum FUSE_DWEN_enum
{
    FUSE_DWEN_CLEAR_gc = (0x00), /* Debug Wire enable - CLEAR */
    FUSE_DWEN_SET_gc   = (0x10), /* Debug Wire enable - SET */
} FUSE_DWEN_t;

/* Self Programming enable */
typedef enum FUSE_SELFPRGEN_enum
{
    FUSE_SELFPRGEN_CLEAR_gc = (0x00), /* Self Programming enable - CLEAR */
    FUSE_SELFPRGEN_SET_gc   = (0x08), /* Self Programming enable - SET */
} FUSE_SELFPRGEN_t;

/* Select start-up time */
typedef enum FUSE_SUT_enum
{
    FUSE_SUT_6CK_14CK_4MS_gc   = (0x00), /* Start-up time 6 CK/14 CK + 4 ms */
    FUSE_SUT_6CK_14CK_8MS_gc   = (0x01), /* Start-up time 6 CK/14 CK + 8 ms */
    FUSE_SUT_6CK_14CK_16MS_gc  = (0x02), /* Start-up time 6 CK/14 CK + 16 ms */
    FUSE_SUT_6CK_14CK_32MS_gc  = (0x03), /* Start-up time 6 CK/14 CK + 32 ms */
    FUSE_SUT_6CK_14CK_64MS_gc  = (0x04), /* Start-up time 6 CK/14 CK + 64 ms */
    FUSE_SUT_6CK_14CK_128MS_gc = (0x05), /* Start-up time 6 CK/14 CK + 128 ms */
    FUSE_SUT_6CK_14CK_256MS_gc = (0x06), /* Start-up time 6 CK/14 CK + 256 ms */
    FUSE_SUT_6CK_14CK_512MS_gc = (0x07), /* Start-up time 6 CK/14 CK + 512 ms */
} FUSE_SUT_t;

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

/*
--------------------------------------------------------------------------------
ADC - Analog-to-Digital Converter
--------------------------------------------------------------------------------
*/

typedef struct ADC_struct
{
    register8_t rsv_0x00[120]; /* RESERVED REGISTER BLOCK */
    _REGISTER16 (VADC);        /* VADC Data Register  Bytes */
    register8_t rsv_0x79;      /* RESERVED REGISTER */
    register8_t VADCSR;        /* The VADC Control and Status register */
    register8_t rsv_0x7B;      /* RESERVED REGISTER */
    register8_t VADMUX;        /* The VADC multiplexer Selection Register */
} ADC_t;


/* VADC Enable */
typedef enum ADC_VADEN_enum
{
    ADC_VADEN_CLEAR_gc = (0x00), /* VADC Enable - CLEAR */
    ADC_VADEN_SET_gc   = (0x08), /* VADC Enable - SET */
} ADC_VADEN_t;

/* VADC Satrt Conversion */
typedef enum ADC_VADSC_enum
{
    ADC_VADSC_CLEAR_gc = (0x00), /* VADC Satrt Conversion - CLEAR */
    ADC_VADSC_SET_gc   = (0x04), /* VADC Satrt Conversion - SET */
} ADC_VADSC_t;

/* VADC Conversion Complete Interrupt Flag */
typedef enum ADC_VADCCIF_enum
{
    ADC_VADCCIF_CLEAR_gc = (0x00), /* VADC Conversion Complete Interrupt Flag - CLEAR */
    ADC_VADCCIF_SET_gc   = (0x02), /* VADC Conversion Complete Interrupt Flag - SET */
} ADC_VADCCIF_t;

/* VADC Conversion Complete Interrupt Enable */
typedef enum ADC_VADCCIE_enum
{
    ADC_VADCCIE_CLEAR_gc = (0x00), /* VADC Conversion Complete Interrupt Enable - CLEAR */
    ADC_VADCCIE_SET_gc   = (0x01), /* VADC Conversion Complete Interrupt Enable - SET */
} ADC_VADCCIE_t;

/*
--------------------------------------------------------------------------------
WDT - Watchdog Timer
--------------------------------------------------------------------------------
*/

typedef struct WDT_struct
{
    register8_t rsv_0x00[96]; /* RESERVED REGISTER BLOCK */
    register8_t WDTCSR;       /* Watchdog Timer Control Register */
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
BANDGAP - Bandgap
--------------------------------------------------------------------------------
*/

typedef struct BANDGAP_struct
{
    register8_t rsv_0x00[208]; /* RESERVED REGISTER BLOCK */
    register8_t BGCCR;         /* Bandgap Calibration Register */
    register8_t BGCRR;         /* Bandgap Calibration of Resistor Ladder */
} BANDGAP_t;


/* Setting the BGD bit to one will disable the bandgap voltage reference. This bit must be cleared before enabling CC-ADC or V-ADC, and must remain unset while either ADC is enabled. */
typedef enum BANDGAP_BGD_enum
{
    BANDGAP_BGD_CLEAR_gc = (0x00), /* Setting the BGD bit to one will disable the bandgap voltage reference. This bit must be cleared before enabling CC-ADC or V-ADC, and must remain unset while either ADC is enabled. - CLEAR */
    BANDGAP_BGD_SET_gc   = (0x80), /* Setting the BGD bit to one will disable the bandgap voltage reference. This bit must be cleared before enabling CC-ADC or V-ADC, and must remain unset while either ADC is enabled. - SET */
} BANDGAP_BGD_t;

/* BG Calibration of PTAT Current Bits */
#define BANDGAP_BGCCR_BGCC_gc(x) (x & 0x3F)

/*
--------------------------------------------------------------------------------
EXINT - External Interrupts
--------------------------------------------------------------------------------
*/

typedef struct EXINT_struct
{
    register8_t rsv_0x00[60]; /* RESERVED REGISTER BLOCK */
    register8_t EIFR;         /* External Interrupt Flag Register */
    register8_t EIMSK;        /* External Interrupt Mask Register */
    register8_t rsv_0x3E[43]; /* RESERVED REGISTER BLOCK */
    register8_t EICRA;        /* External Interrupt Control Register */
} EXINT_t;


/* External Interrupt Sense Control 2 Bits */
typedef enum EXINT_ISC2_enum
{
    EXINT_ISC2_VAL_0x00_gc = (0x00<<4), /* Low Level of INTX */
    EXINT_ISC2_VAL_0x01_gc = (0x01<<4), /* Any Logical Change of INTX */
    EXINT_ISC2_VAL_0x02_gc = (0x02<<4), /* Falling Edge of INTX */
    EXINT_ISC2_VAL_0x03_gc = (0x03<<4), /* Rising Edge of INTX */
} EXINT_ISC2_t;

/* External Interrupt Sense Control 1 Bits */
typedef enum EXINT_ISC1_enum
{
    EXINT_ISC1_VAL_0x00_gc = (0x00<<2), /* Low Level of INTX */
    EXINT_ISC1_VAL_0x01_gc = (0x01<<2), /* Any Logical Change of INTX */
    EXINT_ISC1_VAL_0x02_gc = (0x02<<2), /* Falling Edge of INTX */
    EXINT_ISC1_VAL_0x03_gc = (0x03<<2), /* Rising Edge of INTX */
} EXINT_ISC1_t;

/* External Interrupt Sense Control 0 Bits */
typedef enum EXINT_ISC0_enum
{
    EXINT_ISC0_VAL_0x00_gc = (0x00), /* Low Level of INTX */
    EXINT_ISC0_VAL_0x01_gc = (0x01), /* Any Logical Change of INTX */
    EXINT_ISC0_VAL_0x02_gc = (0x02), /* Falling Edge of INTX */
    EXINT_ISC0_VAL_0x03_gc = (0x03), /* Rising Edge of INTX */
} EXINT_ISC0_t;

/*
--------------------------------------------------------------------------------
PORT - I/O Port
--------------------------------------------------------------------------------
*/

typedef struct PORTC_struct
{
    register8_t rsv_0x00[38]; /* RESERVED REGISTER BLOCK */
    register8_t PINC;         /* Port C Input Pins */
    register8_t rsv_0x27;     /* RESERVED REGISTER */
    register8_t PORTC;        /* Port C Data Register */
} PORTC_t;


/*
--------------------------------------------------------------------------------
PORT - I/O Port
--------------------------------------------------------------------------------
*/

typedef struct PORTA_struct
{
    register8_t rsv_0x00[32]; /* RESERVED REGISTER BLOCK */
    register8_t PINA;         /* Port A Input Pins */
    register8_t DDRA;         /* Port A Data Direction Register */
    register8_t PORTA;        /* Port A Data Register */
} PORTA_t;


/*
--------------------------------------------------------------------------------
PORT - I/O Port
--------------------------------------------------------------------------------
*/

typedef struct PORTB_struct
{
    register8_t rsv_0x00[35]; /* RESERVED REGISTER BLOCK */
    register8_t PINB;         /* Input Pins, Port B */
    register8_t DDRB;         /* Data Direction Register, Port B */
    register8_t PORTB;        /* Data Register, Port B */
} PORTB_t;


/*
--------------------------------------------------------------------------------
FET - FET Control
--------------------------------------------------------------------------------
*/

typedef struct FET_struct
{
    register8_t rsv_0x00[240]; /* RESERVED REGISTER BLOCK */
    register8_t FCSR;          /* FET Control and Status Register */
} FET_t;


/* Deep Under-Voltage Recovery Disable */
typedef enum FET_DUVRD_enum
{
    FET_DUVRD_CLEAR_gc = (0x00), /* Deep Under-Voltage Recovery Disable - CLEAR */
    FET_DUVRD_SET_gc   = (0x08), /* Deep Under-Voltage Recovery Disable - SET */
} FET_DUVRD_t;

/* Current Protection Status */
typedef enum FET_CPS_enum
{
    FET_CPS_CLEAR_gc = (0x00), /* Current Protection Status - CLEAR */
    FET_CPS_SET_gc   = (0x04), /* Current Protection Status - SET */
} FET_CPS_t;

/* Discharge FET Enable */
typedef enum FET_DFE_enum
{
    FET_DFE_CLEAR_gc = (0x00), /* Discharge FET Enable - CLEAR */
    FET_DFE_SET_gc   = (0x02), /* Discharge FET Enable - SET */
} FET_DFE_t;

/* Charge FET Enable */
typedef enum FET_CFE_enum
{
    FET_CFE_CLEAR_gc = (0x00), /* Charge FET Enable - CLEAR */
    FET_CFE_SET_gc   = (0x01), /* Charge FET Enable - SET */
} FET_CFE_t;

/*
--------------------------------------------------------------------------------
SPI - Serial Peripheral Interface
--------------------------------------------------------------------------------
*/

typedef struct SPI_struct
{
    register8_t rsv_0x00[76]; /* RESERVED REGISTER BLOCK */
    register8_t SPCR;         /* SPI Control Register */
    register8_t SPSR;         /* SPI Status Register */
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
BOOT_LOAD - Bootloader
--------------------------------------------------------------------------------
*/

typedef struct BOOT_LOAD_struct
{
    register8_t rsv_0x00[87]; /* RESERVED REGISTER BLOCK */
    register8_t SPMCSR;       /* Store Program Memory Control and Status Register */
} BOOT_LOAD_t;


/* Signature Row Read */
typedef enum BOOT_LOAD_SIGRD_enum
{
    BOOT_LOAD_SIGRD_CLEAR_gc = (0x00), /* Signature Row Read - CLEAR */
    BOOT_LOAD_SIGRD_SET_gc   = (0x20), /* Signature Row Read - SET */
} BOOT_LOAD_SIGRD_t;

/* Clear Temporary Page Buffer */
typedef enum BOOT_LOAD_CTPB_enum
{
    BOOT_LOAD_CTPB_CLEAR_gc = (0x00), /* Clear Temporary Page Buffer - CLEAR */
    BOOT_LOAD_CTPB_SET_gc   = (0x10), /* Clear Temporary Page Buffer - SET */
} BOOT_LOAD_CTPB_t;

/* Read Fuse and Lock Bits */
typedef enum BOOT_LOAD_RFLB_enum
{
    BOOT_LOAD_RFLB_CLEAR_gc = (0x00), /* Read Fuse and Lock Bits - CLEAR */
    BOOT_LOAD_RFLB_SET_gc   = (0x08), /* Read Fuse and Lock Bits - SET */
} BOOT_LOAD_RFLB_t;

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
--------------------------------------------------------------------------------
CPU - CPU Registers
--------------------------------------------------------------------------------
*/

typedef struct CPU_struct
{
    register8_t rsv_0x00[55]; /* RESERVED REGISTER BLOCK */
    register8_t OSICSR;       /* Oscillator Sampling Interface Control and Status Register */
    register8_t rsv_0x38[6];  /* RESERVED REGISTER BLOCK */
    register8_t GPIOR0;       /* General Purpose IO Register 0 */
    register8_t rsv_0x3F[11]; /* RESERVED REGISTER BLOCK */
    register8_t GPIOR1;       /* General Purpose IO Register 1 */
    register8_t GPIOR2;       /* General Purpose IO Register 2 */
    register8_t rsv_0x4C[7];  /* RESERVED REGISTER BLOCK */
    register8_t SMCR;         /* Sleep Mode Control Register */
    register8_t MCUSR;        /* MCU Status Register */
    register8_t MCUCR;        /* MCU Control Register */
    register8_t rsv_0x56[7];  /* RESERVED REGISTER BLOCK */
    _REGISTER16 (SP);         /* Stack Pointer  */
    register8_t rsv_0x5E;     /* RESERVED REGISTER */
    register8_t SREG;         /* Status Register */
    register8_t rsv_0x60;     /* RESERVED REGISTER */
    register8_t CLKPR;        /* Clock Prescale Register */
    register8_t rsv_0x62[2];  /* RESERVED REGISTER BLOCK */
    register8_t PRR0;         /* Power Reduction Register 0 */
    register8_t rsv_0x65;     /* RESERVED REGISTER */
    register8_t FOSCCAL;      /* Fast Oscillator Calibration Value */
    register8_t rsv_0x67[23]; /* RESERVED REGISTER BLOCK */
    register8_t DIDR0;        /* Digital Input Disable Register */
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

/* Clock Output Enable */
typedef enum CPU_CKOE_enum
{
    CPU_CKOE_CLEAR_gc = (0x00), /* Clock Output Enable - CLEAR */
    CPU_CKOE_SET_gc   = (0x20), /* Clock Output Enable - SET */
} CPU_CKOE_t;

/* Pull-up disable */
typedef enum CPU_PUD_enum
{
    CPU_PUD_CLEAR_gc = (0x00), /* Pull-up disable - CLEAR */
    CPU_PUD_SET_gc   = (0x10), /* Pull-up disable - SET */
} CPU_PUD_t;

/* OCD Reset Flag */
typedef enum CPU_OCDRF_enum
{
    CPU_OCDRF_CLEAR_gc = (0x00), /* OCD Reset Flag - CLEAR */
    CPU_OCDRF_SET_gc   = (0x10), /* OCD Reset Flag - SET */
} CPU_OCDRF_t;

/* Watchdog Reset Flag */
typedef enum CPU_WDRF_enum
{
    CPU_WDRF_CLEAR_gc = (0x00), /* Watchdog Reset Flag - CLEAR */
    CPU_WDRF_SET_gc   = (0x08), /* Watchdog Reset Flag - SET */
} CPU_WDRF_t;

/* Brown-out Reset Flag */
typedef enum CPU_BODRF_enum
{
    CPU_BODRF_CLEAR_gc = (0x00), /* Brown-out Reset Flag - CLEAR */
    CPU_BODRF_SET_gc   = (0x04), /* Brown-out Reset Flag - SET */
} CPU_BODRF_t;

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

/* Oscillator Sampling Interface Select 0 */
typedef enum CPU_OSISEL0_enum
{
    CPU_OSISEL0_CLEAR_gc = (0x00), /* Oscillator Sampling Interface Select 0 - CLEAR */
    CPU_OSISEL0_SET_gc   = (0x10), /* Oscillator Sampling Interface Select 0 - SET */
} CPU_OSISEL0_t;

/* Oscillator Sampling Interface Status */
typedef enum CPU_OSIST_enum
{
    CPU_OSIST_CLEAR_gc = (0x00), /* Oscillator Sampling Interface Status - CLEAR */
    CPU_OSIST_SET_gc   = (0x02), /* Oscillator Sampling Interface Status - SET */
} CPU_OSIST_t;

/* Oscillator Sampling Interface Enable */
typedef enum CPU_OSIEN_enum
{
    CPU_OSIEN_CLEAR_gc = (0x00), /* Oscillator Sampling Interface Enable - CLEAR */
    CPU_OSIEN_SET_gc   = (0x01), /* Oscillator Sampling Interface Enable - SET */
} CPU_OSIEN_t;

/* Sleep Mode Select bits */
typedef enum CPU_SM_enum
{
    CPU_SM_IDLE_gc     = (0x00<<1), /* Idle */
    CPU_SM_ADC_gc      = (0x01<<1), /* ADC Noise Reduction (If Available) */
    CPU_SM_VAL_0x02_gc = (0x02<<1), /* Reserved */
    CPU_SM_PSAVE_gc    = (0x03<<1), /* Power Save */
    CPU_SM_POFF_gc     = (0x04<<1), /* Power Off */
    CPU_SM_VAL_0x05_gc = (0x05<<1), /* Reserved */
    CPU_SM_VAL_0x06_gc = (0x06<<1), /* Reserved */
    CPU_SM_VAL_0x07_gc = (0x07<<1), /* Reserved */
} CPU_SM_t;

/* Sleep Enable */
typedef enum CPU_SE_enum
{
    CPU_SE_CLEAR_gc = (0x00), /* Sleep Enable - CLEAR */
    CPU_SE_SET_gc   = (0x01), /* Sleep Enable - SET */
} CPU_SE_t;

/* When this bit is written logic one, the digital input buffer of the corresponding V_ADC pin is disabled. */
typedef enum CPU_PA1DID_enum
{
    CPU_PA1DID_CLEAR_gc = (0x00), /* When this bit is written logic one, the digital input buffer of the corresponding V_ADC pin is disabled. - CLEAR */
    CPU_PA1DID_SET_gc   = (0x02), /* When this bit is written logic one, the digital input buffer of the corresponding V_ADC pin is disabled. - SET */
} CPU_PA1DID_t;

/* When this bit is written logic one, the digital input buffer of the corresponding V_ADC pin is disabled. */
typedef enum CPU_PA0DID_enum
{
    CPU_PA0DID_CLEAR_gc = (0x00), /* When this bit is written logic one, the digital input buffer of the corresponding V_ADC pin is disabled. - CLEAR */
    CPU_PA0DID_SET_gc   = (0x01), /* When this bit is written logic one, the digital input buffer of the corresponding V_ADC pin is disabled. - SET */
} CPU_PA0DID_t;

/* Power Reduction Voltage Regulator Monitor */
typedef enum CPU_PRVRM_enum
{
    CPU_PRVRM_CLEAR_gc = (0x00), /* Power Reduction Voltage Regulator Monitor - CLEAR */
    CPU_PRVRM_SET_gc   = (0x20), /* Power Reduction Voltage Regulator Monitor - SET */
} CPU_PRVRM_t;

/* Power reduction SPI */
typedef enum CPU_PRSPI_enum
{
    CPU_PRSPI_CLEAR_gc = (0x00), /* Power reduction SPI - CLEAR */
    CPU_PRSPI_SET_gc   = (0x08), /* Power reduction SPI - SET */
} CPU_PRSPI_t;

/* Power Reduction Timer/Counter1 */
typedef enum CPU_PRTIM1_enum
{
    CPU_PRTIM1_CLEAR_gc = (0x00), /* Power Reduction Timer/Counter1 - CLEAR */
    CPU_PRTIM1_SET_gc   = (0x04), /* Power Reduction Timer/Counter1 - SET */
} CPU_PRTIM1_t;

/* Power Reduction Timer/Counter0 */
typedef enum CPU_PRTIM0_enum
{
    CPU_PRTIM0_CLEAR_gc = (0x00), /* Power Reduction Timer/Counter0 - CLEAR */
    CPU_PRTIM0_SET_gc   = (0x02), /* Power Reduction Timer/Counter0 - SET */
} CPU_PRTIM0_t;

/* Power Reduction V-ADC */
typedef enum CPU_PRVADC_enum
{
    CPU_PRVADC_CLEAR_gc = (0x00), /* Power Reduction V-ADC - CLEAR */
    CPU_PRVADC_SET_gc   = (0x01), /* Power Reduction V-ADC - SET */
} CPU_PRVADC_t;

/* Clock Prescaler Change Enable */
typedef enum CPU_CLKPCE_enum
{
    CPU_CLKPCE_CLEAR_gc = (0x00), /* Clock Prescaler Change Enable - CLEAR */
    CPU_CLKPCE_SET_gc   = (0x80), /* Clock Prescaler Change Enable - SET */
} CPU_CLKPCE_t;

/* Clock Prescaler Select Bits */
#define CPU_CLKPR_CLKPS_gc(x) (x & 0x03)

/*
--------------------------------------------------------------------------------
BATTERY_PROTECTION - Battery Protection
--------------------------------------------------------------------------------
*/

typedef struct BATTERY_PROTECTION_struct
{
    register8_t rsv_0x00[242]; /* RESERVED REGISTER BLOCK */
    register8_t BPIMSK;        /* Battery Protection Interrupt Mask Register */
    register8_t BPIFR;         /* Battery Protection Interrupt Flag Register */
    register8_t rsv_0xF4;      /* RESERVED REGISTER */
    register8_t BPSCD;         /* Battery Protection Short-Circuit Detection Level Register */
    register8_t BPDOCD;        /* Battery Protection Discharge-Over-current Detection Level Register */
    register8_t BPCOCD;        /* Battery Protection Charge-Over-current Detection Level Register */
    register8_t BPDHCD;        /* Battery Protection Discharge-High-current Detection Level Register */
    register8_t BPCHCD;        /* Battery Protection Charge-High-current Detection Level Register */
    register8_t BPSCTR;        /* Battery Protection Short-current Timing Register */
    register8_t BPOCTR;        /* Battery Protection Over-current Timing Register */
    register8_t BPHCTR;        /* Battery Protection Short-current Timing Register */
    register8_t BPCR;          /* Battery Protection Control Register */
    register8_t BPPLR;         /* Battery Protection Parameter Lock Register */
} BATTERY_PROTECTION_t;


/* Battery Protection Parameter Lock Enable */
typedef enum BATTERY_PROTECTION_BPPLE_enum
{
    BATTERY_PROTECTION_BPPLE_CLEAR_gc = (0x00), /* Battery Protection Parameter Lock Enable - CLEAR */
    BATTERY_PROTECTION_BPPLE_SET_gc   = (0x02), /* Battery Protection Parameter Lock Enable - SET */
} BATTERY_PROTECTION_BPPLE_t;

/* Battery Protection Parameter Lock */
typedef enum BATTERY_PROTECTION_BPPL_enum
{
    BATTERY_PROTECTION_BPPL_CLEAR_gc = (0x00), /* Battery Protection Parameter Lock - CLEAR */
    BATTERY_PROTECTION_BPPL_SET_gc   = (0x01), /* Battery Protection Parameter Lock - SET */
} BATTERY_PROTECTION_BPPL_t;

/* Short Circuit Protection Disabled */
typedef enum BATTERY_PROTECTION_SCD_enum
{
    BATTERY_PROTECTION_SCD_CLEAR_gc = (0x00), /* Short Circuit Protection Disabled - CLEAR */
    BATTERY_PROTECTION_SCD_SET_gc   = (0x10), /* Short Circuit Protection Disabled - SET */
} BATTERY_PROTECTION_SCD_t;

/* Discharge Over-current Protection Disabled */
typedef enum BATTERY_PROTECTION_DOCD_enum
{
    BATTERY_PROTECTION_DOCD_CLEAR_gc = (0x00), /* Discharge Over-current Protection Disabled - CLEAR */
    BATTERY_PROTECTION_DOCD_SET_gc   = (0x08), /* Discharge Over-current Protection Disabled - SET */
} BATTERY_PROTECTION_DOCD_t;

/* Charge Over-current Protection Disabled */
typedef enum BATTERY_PROTECTION_COCD_enum
{
    BATTERY_PROTECTION_COCD_CLEAR_gc = (0x00), /* Charge Over-current Protection Disabled - CLEAR */
    BATTERY_PROTECTION_COCD_SET_gc   = (0x04), /* Charge Over-current Protection Disabled - SET */
} BATTERY_PROTECTION_COCD_t;

/* Discharge High-current Protection Disable */
typedef enum BATTERY_PROTECTION_DHCD_enum
{
    BATTERY_PROTECTION_DHCD_CLEAR_gc = (0x00), /* Discharge High-current Protection Disable - CLEAR */
    BATTERY_PROTECTION_DHCD_SET_gc   = (0x02), /* Discharge High-current Protection Disable - SET */
} BATTERY_PROTECTION_DHCD_t;

/* Charge High-current Protection Disable */
typedef enum BATTERY_PROTECTION_CHCD_enum
{
    BATTERY_PROTECTION_CHCD_CLEAR_gc = (0x00), /* Charge High-current Protection Disable - CLEAR */
    BATTERY_PROTECTION_CHCD_SET_gc   = (0x01), /* Charge High-current Protection Disable - SET */
} BATTERY_PROTECTION_CHCD_t;

/* Short-circuit Protection Activated Interrupt Flag */
typedef enum BATTERY_PROTECTION_SCIF_enum
{
    BATTERY_PROTECTION_SCIF_CLEAR_gc = (0x00), /* Short-circuit Protection Activated Interrupt Flag - CLEAR */
    BATTERY_PROTECTION_SCIF_SET_gc   = (0x10), /* Short-circuit Protection Activated Interrupt Flag - SET */
} BATTERY_PROTECTION_SCIF_t;

/* Discharge Over-current Protection Activated Interrupt Flag */
typedef enum BATTERY_PROTECTION_DOCIF_enum
{
    BATTERY_PROTECTION_DOCIF_CLEAR_gc = (0x00), /* Discharge Over-current Protection Activated Interrupt Flag - CLEAR */
    BATTERY_PROTECTION_DOCIF_SET_gc   = (0x08), /* Discharge Over-current Protection Activated Interrupt Flag - SET */
} BATTERY_PROTECTION_DOCIF_t;

/* Charge Over-current Protection Activated Interrupt Flag */
typedef enum BATTERY_PROTECTION_COCIF_enum
{
    BATTERY_PROTECTION_COCIF_CLEAR_gc = (0x00), /* Charge Over-current Protection Activated Interrupt Flag - CLEAR */
    BATTERY_PROTECTION_COCIF_SET_gc   = (0x04), /* Charge Over-current Protection Activated Interrupt Flag - SET */
} BATTERY_PROTECTION_COCIF_t;

/* Disharge High-current Protection Activated Interrupt */
typedef enum BATTERY_PROTECTION_DHCIF_enum
{
    BATTERY_PROTECTION_DHCIF_CLEAR_gc = (0x00), /* Disharge High-current Protection Activated Interrupt - CLEAR */
    BATTERY_PROTECTION_DHCIF_SET_gc   = (0x02), /* Disharge High-current Protection Activated Interrupt - SET */
} BATTERY_PROTECTION_DHCIF_t;

/* Charge High-current Protection Activated Interrupt */
typedef enum BATTERY_PROTECTION_CHCIF_enum
{
    BATTERY_PROTECTION_CHCIF_CLEAR_gc = (0x00), /* Charge High-current Protection Activated Interrupt - CLEAR */
    BATTERY_PROTECTION_CHCIF_SET_gc   = (0x01), /* Charge High-current Protection Activated Interrupt - SET */
} BATTERY_PROTECTION_CHCIF_t;

/* Short-circuit Protection Activated Interrupt Enable */
typedef enum BATTERY_PROTECTION_SCIE_enum
{
    BATTERY_PROTECTION_SCIE_CLEAR_gc = (0x00), /* Short-circuit Protection Activated Interrupt Enable - CLEAR */
    BATTERY_PROTECTION_SCIE_SET_gc   = (0x10), /* Short-circuit Protection Activated Interrupt Enable - SET */
} BATTERY_PROTECTION_SCIE_t;

/* Discharge Over-current Protection Activated Interrupt Enable */
typedef enum BATTERY_PROTECTION_DOCIE_enum
{
    BATTERY_PROTECTION_DOCIE_CLEAR_gc = (0x00), /* Discharge Over-current Protection Activated Interrupt Enable - CLEAR */
    BATTERY_PROTECTION_DOCIE_SET_gc   = (0x08), /* Discharge Over-current Protection Activated Interrupt Enable - SET */
} BATTERY_PROTECTION_DOCIE_t;

/* Charge Over-current Protection Activated Interrupt Enable */
typedef enum BATTERY_PROTECTION_COCIE_enum
{
    BATTERY_PROTECTION_COCIE_CLEAR_gc = (0x00), /* Charge Over-current Protection Activated Interrupt Enable - CLEAR */
    BATTERY_PROTECTION_COCIE_SET_gc   = (0x04), /* Charge Over-current Protection Activated Interrupt Enable - SET */
} BATTERY_PROTECTION_COCIE_t;

/* Discharger High-current Protection Activated Interrupt */
typedef enum BATTERY_PROTECTION_DHCIE_enum
{
    BATTERY_PROTECTION_DHCIE_CLEAR_gc = (0x00), /* Discharger High-current Protection Activated Interrupt - CLEAR */
    BATTERY_PROTECTION_DHCIE_SET_gc   = (0x02), /* Discharger High-current Protection Activated Interrupt - SET */
} BATTERY_PROTECTION_DHCIE_t;

/* Charger High-current Protection Activated Interrupt */
typedef enum BATTERY_PROTECTION_CHCIE_enum
{
    BATTERY_PROTECTION_CHCIE_CLEAR_gc = (0x00), /* Charger High-current Protection Activated Interrupt - CLEAR */
    BATTERY_PROTECTION_CHCIE_SET_gc   = (0x01), /* Charger High-current Protection Activated Interrupt - SET */
} BATTERY_PROTECTION_CHCIE_t;

/*
--------------------------------------------------------------------------------
EEPROM - EEPROM
--------------------------------------------------------------------------------
*/

typedef struct EEPROM_struct
{
    register8_t rsv_0x00[63]; /* RESERVED REGISTER BLOCK */
    register8_t EECR;         /* EEPROM Control Register */
    register8_t EEDR;         /* EEPROM Data Register */
    register8_t EEAR;         /* EEPROM Read/Write Access */
} EEPROM_t;


/* EEPROM Control Register-EEPM */
typedef enum EEPROM_EEPM_enum
{
    EEPROM_EEPM_VAL_0x00_gc = (0x00<<4), /* Erase and Write in one operation */
    EEPROM_EEPM_VAL_0x01_gc = (0x01<<4), /* Erase Only */
    EEPROM_EEPM_VAL_0x02_gc = (0x02<<4), /* Write Only */
} EEPROM_EEPM_t;

/* EEProm Ready Interrupt Enable */
typedef enum EEPROM_EERIE_enum
{
    EEPROM_EERIE_CLEAR_gc = (0x00), /* EEProm Ready Interrupt Enable - CLEAR */
    EEPROM_EERIE_SET_gc   = (0x08), /* EEProm Ready Interrupt Enable - SET */
} EEPROM_EERIE_t;

/* EEPROM Master Write Enable */
typedef enum EEPROM_EEMPE_enum
{
    EEPROM_EEMPE_CLEAR_gc = (0x00), /* EEPROM Master Write Enable - CLEAR */
    EEPROM_EEMPE_SET_gc   = (0x04), /* EEPROM Master Write Enable - SET */
} EEPROM_EEMPE_t;

/* EEPROM Write Enable */
typedef enum EEPROM_EEPE_enum
{
    EEPROM_EEPE_CLEAR_gc = (0x00), /* EEPROM Write Enable - CLEAR */
    EEPROM_EEPE_SET_gc   = (0x02), /* EEPROM Write Enable - SET */
} EEPROM_EEPE_t;

/* EEPROM Read Enable */
typedef enum EEPROM_EERE_enum
{
    EEPROM_EERE_CLEAR_gc = (0x00), /* EEPROM Read Enable - CLEAR */
    EEPROM_EERE_SET_gc   = (0x01), /* EEPROM Read Enable - SET */
} EEPROM_EERE_t;

/*
--------------------------------------------------------------------------------
TC16 - Timer/Counter, 16-bit
--------------------------------------------------------------------------------
*/

typedef struct TC1_struct
{
    register8_t rsv_0x00[54]; /* RESERVED REGISTER BLOCK */
    register8_t TIFR1;        /* Timer/Counter Interrupt Flag register */
    register8_t rsv_0x37[12]; /* RESERVED REGISTER BLOCK */
    register8_t GTCCR;        /* General Timer/Counter Control Register */
    register8_t rsv_0x44[43]; /* RESERVED REGISTER BLOCK */
    register8_t TIMSK1;       /* Timer/Counter Interrupt Mask Register */
    register8_t rsv_0x70[16]; /* RESERVED REGISTER BLOCK */
    register8_t TCCR1A;       /* Timer/Counter 1 Control Register A */
    register8_t TCCR1B;       /* Timer/Counter1 Control Register B */
    register8_t rsv_0x82[2];  /* RESERVED REGISTER BLOCK */
    _REGISTER16 (TCNT1);      /* Timer Counter 1  Bytes */
    register8_t rsv_0x85[3];  /* RESERVED REGISTER BLOCK */
    register8_t OCR1A;        /* Output Compare Register 1A */
    register8_t OCR1B;        /* Output Compare Register B */
} TC1_t;


/*
--------------------------------------------------------------------------------
TC16 - Timer/Counter, 16-bit
--------------------------------------------------------------------------------
*/

typedef struct TC0_struct
{
    register8_t rsv_0x00[53]; /* RESERVED REGISTER BLOCK */
    register8_t TIFR0;        /* Timer/Counter Interrupt Flag register */
    register8_t rsv_0x36[14]; /* RESERVED REGISTER BLOCK */
    register8_t TCCR0A;       /* Timer/Counter0 Control Register */
    register8_t TCCR0B;       /* Timer/Counter0 Control Register */
    _REGISTER16 (TCNT0);      /* Timer Counter 0  Bytes */
    register8_t rsv_0x47;     /* RESERVED REGISTER */
    register8_t OCR0A;        /* Output compare Register A */
    register8_t OCR0B;        /* Output compare Register B */
    register8_t rsv_0x4A[36]; /* RESERVED REGISTER BLOCK */
    register8_t TIMSK0;       /* Timer/Counter Interrupt Mask Register */
} TC0_t;


/* Timer/Counter Width */
typedef enum TC1_TCW1_enum
{
    TC1_TCW1_CLEAR_gc = (0x00), /* Timer/Counter Width - CLEAR */
    TC1_TCW1_SET_gc   = (0x80), /* Timer/Counter Width - SET */
} TC1_TCW1_t;

/* Input Capture Mode Enable */
typedef enum TC1_ICEN1_enum
{
    TC1_ICEN1_CLEAR_gc = (0x00), /* Input Capture Mode Enable - CLEAR */
    TC1_ICEN1_SET_gc   = (0x40), /* Input Capture Mode Enable - SET */
} TC1_ICEN1_t;

/* Input Capture Noise Canceler */
typedef enum TC1_ICNC1_enum
{
    TC1_ICNC1_CLEAR_gc = (0x00), /* Input Capture Noise Canceler - CLEAR */
    TC1_ICNC1_SET_gc   = (0x20), /* Input Capture Noise Canceler - SET */
} TC1_ICNC1_t;

/* Input Capture Edge Select */
typedef enum TC1_ICES1_enum
{
    TC1_ICES1_CLEAR_gc = (0x00), /* Input Capture Edge Select - CLEAR */
    TC1_ICES1_SET_gc   = (0x10), /* Input Capture Edge Select - SET */
} TC1_ICES1_t;

/* Input Capture Select */
typedef enum TC1_ICS1_enum
{
    TC1_ICS1_CLEAR_gc = (0x00), /* Input Capture Select - CLEAR */
    TC1_ICS1_SET_gc   = (0x08), /* Input Capture Select - SET */
} TC1_ICS1_t;

/* Waveform Generation Mode */
typedef enum TC1_WGM10_enum
{
    TC1_WGM10_CLEAR_gc = (0x00), /* Waveform Generation Mode - CLEAR */
    TC1_WGM10_SET_gc   = (0x01), /* Waveform Generation Mode - SET */
} TC1_WGM10_t;

/* Timer/Counter n Input Capture Interrupt Enable */
typedef enum TC1_ICIE1_enum
{
    TC1_ICIE1_CLEAR_gc = (0x00), /* Timer/Counter n Input Capture Interrupt Enable - CLEAR */
    TC1_ICIE1_SET_gc   = (0x08), /* Timer/Counter n Input Capture Interrupt Enable - SET */
} TC1_ICIE1_t;

/* Timer/Counter1 Output Compare B Interrupt Enable */
typedef enum TC1_OCIE1B_enum
{
    TC1_OCIE1B_CLEAR_gc = (0x00), /* Timer/Counter1 Output Compare B Interrupt Enable - CLEAR */
    TC1_OCIE1B_SET_gc   = (0x04), /* Timer/Counter1 Output Compare B Interrupt Enable - SET */
} TC1_OCIE1B_t;

/* Timer/Counter1 Output Compare A Interrupt Enable */
typedef enum TC1_OCIE1A_enum
{
    TC1_OCIE1A_CLEAR_gc = (0x00), /* Timer/Counter1 Output Compare A Interrupt Enable - CLEAR */
    TC1_OCIE1A_SET_gc   = (0x02), /* Timer/Counter1 Output Compare A Interrupt Enable - SET */
} TC1_OCIE1A_t;

/* Timer/Counter1 Overflow Interrupt Enable */
typedef enum TC1_TOIE1_enum
{
    TC1_TOIE1_CLEAR_gc = (0x00), /* Timer/Counter1 Overflow Interrupt Enable - CLEAR */
    TC1_TOIE1_SET_gc   = (0x01), /* Timer/Counter1 Overflow Interrupt Enable - SET */
} TC1_TOIE1_t;

/* Timer/Counter 1 Input Capture Flag */
typedef enum TC1_ICF1_enum
{
    TC1_ICF1_CLEAR_gc = (0x00), /* Timer/Counter 1 Input Capture Flag - CLEAR */
    TC1_ICF1_SET_gc   = (0x08), /* Timer/Counter 1 Input Capture Flag - SET */
} TC1_ICF1_t;

/* Timer/Counter1 Output Compare Flag B */
typedef enum TC1_OCF1B_enum
{
    TC1_OCF1B_CLEAR_gc = (0x00), /* Timer/Counter1 Output Compare Flag B - CLEAR */
    TC1_OCF1B_SET_gc   = (0x04), /* Timer/Counter1 Output Compare Flag B - SET */
} TC1_OCF1B_t;

/* Timer/Counter1 Output Compare Flag A */
typedef enum TC1_OCF1A_enum
{
    TC1_OCF1A_CLEAR_gc = (0x00), /* Timer/Counter1 Output Compare Flag A - CLEAR */
    TC1_OCF1A_SET_gc   = (0x02), /* Timer/Counter1 Output Compare Flag A - SET */
} TC1_OCF1A_t;

/* Timer/Counter1 Overflow Flag */
typedef enum TC1_TOV1_enum
{
    TC1_TOV1_CLEAR_gc = (0x00), /* Timer/Counter1 Overflow Flag - CLEAR */
    TC1_TOV1_SET_gc   = (0x01), /* Timer/Counter1 Overflow Flag - SET */
} TC1_TOV1_t;

/* Timer/Counter Synchronization Mode */
typedef enum TC1_TSM_enum
{
    TC1_TSM_CLEAR_gc = (0x00), /* Timer/Counter Synchronization Mode - CLEAR */
    TC1_TSM_SET_gc   = (0x80), /* Timer/Counter Synchronization Mode - SET */
} TC1_TSM_t;

/* Prescaler Reset */
typedef enum TC1_PSRSYNC_enum
{
    TC1_PSRSYNC_CLEAR_gc = (0x00), /* Prescaler Reset - CLEAR */
    TC1_PSRSYNC_SET_gc   = (0x01), /* Prescaler Reset - SET */
} TC1_PSRSYNC_t;

/* Timer/Counter Width */
typedef enum TC0_TCW0_enum
{
    TC0_TCW0_CLEAR_gc = (0x00), /* Timer/Counter Width - CLEAR */
    TC0_TCW0_SET_gc   = (0x80), /* Timer/Counter Width - SET */
} TC0_TCW0_t;

/* Input Capture Mode Enable */
typedef enum TC0_ICEN0_enum
{
    TC0_ICEN0_CLEAR_gc = (0x00), /* Input Capture Mode Enable - CLEAR */
    TC0_ICEN0_SET_gc   = (0x40), /* Input Capture Mode Enable - SET */
} TC0_ICEN0_t;

/* Input Capture Noise Canceler */
typedef enum TC0_ICNC0_enum
{
    TC0_ICNC0_CLEAR_gc = (0x00), /* Input Capture Noise Canceler - CLEAR */
    TC0_ICNC0_SET_gc   = (0x20), /* Input Capture Noise Canceler - SET */
} TC0_ICNC0_t;

/* Input Capture Edge Select */
typedef enum TC0_ICES0_enum
{
    TC0_ICES0_CLEAR_gc = (0x00), /* Input Capture Edge Select - CLEAR */
    TC0_ICES0_SET_gc   = (0x10), /* Input Capture Edge Select - SET */
} TC0_ICES0_t;

/* Input Capture Select */
typedef enum TC0_ICS0_enum
{
    TC0_ICS0_CLEAR_gc = (0x00), /* Input Capture Select - CLEAR */
    TC0_ICS0_SET_gc   = (0x08), /* Input Capture Select - SET */
} TC0_ICS0_t;

/* Clock Select0 bit 0 */
typedef enum TC0_WGM00_enum
{
    TC0_WGM00_CLEAR_gc = (0x00), /* Clock Select0 bit 0 - CLEAR */
    TC0_WGM00_SET_gc   = (0x01), /* Clock Select0 bit 0 - SET */
} TC0_WGM00_t;

/* Clock Select0 bit 2 */
typedef enum TC0_CS02_enum
{
    TC0_CS02_CLEAR_gc = (0x00), /* Clock Select0 bit 2 - CLEAR */
    TC0_CS02_SET_gc   = (0x04), /* Clock Select0 bit 2 - SET */
} TC0_CS02_t;

/* Clock Select0 bit 1 */
typedef enum TC0_CS01_enum
{
    TC0_CS01_CLEAR_gc = (0x00), /* Clock Select0 bit 1 - CLEAR */
    TC0_CS01_SET_gc   = (0x02), /* Clock Select0 bit 1 - SET */
} TC0_CS01_t;

/* Clock Select0 bit 0 */
typedef enum TC0_CS00_enum
{
    TC0_CS00_CLEAR_gc = (0x00), /* Clock Select0 bit 0 - CLEAR */
    TC0_CS00_SET_gc   = (0x01), /* Clock Select0 bit 0 - SET */
} TC0_CS00_t;

/* Timer/Counter n Input Capture Interrupt Enable */
typedef enum TC0_ICIE0_enum
{
    TC0_ICIE0_CLEAR_gc = (0x00), /* Timer/Counter n Input Capture Interrupt Enable - CLEAR */
    TC0_ICIE0_SET_gc   = (0x08), /* Timer/Counter n Input Capture Interrupt Enable - SET */
} TC0_ICIE0_t;

/* Output Compare Interrupt Enable */
typedef enum TC0_OCIE0B_enum
{
    TC0_OCIE0B_CLEAR_gc = (0x00), /* Output Compare Interrupt Enable - CLEAR */
    TC0_OCIE0B_SET_gc   = (0x04), /* Output Compare Interrupt Enable - SET */
} TC0_OCIE0B_t;

/* Output Compare Interrupt Enable */
typedef enum TC0_OCIE0A_enum
{
    TC0_OCIE0A_CLEAR_gc = (0x00), /* Output Compare Interrupt Enable - CLEAR */
    TC0_OCIE0A_SET_gc   = (0x02), /* Output Compare Interrupt Enable - SET */
} TC0_OCIE0A_t;

/* Overflow Interrupt Enable */
typedef enum TC0_TOIE0_enum
{
    TC0_TOIE0_CLEAR_gc = (0x00), /* Overflow Interrupt Enable - CLEAR */
    TC0_TOIE0_SET_gc   = (0x01), /* Overflow Interrupt Enable - SET */
} TC0_TOIE0_t;

/* Timer/Counter Interrupt Flag Register */
typedef enum TC0_ICF0_enum
{
    TC0_ICF0_CLEAR_gc = (0x00), /* Timer/Counter Interrupt Flag Register - CLEAR */
    TC0_ICF0_SET_gc   = (0x08), /* Timer/Counter Interrupt Flag Register - SET */
} TC0_ICF0_t;

/* Output Compare Flag */
typedef enum TC0_OCF0B_enum
{
    TC0_OCF0B_CLEAR_gc = (0x00), /* Output Compare Flag - CLEAR */
    TC0_OCF0B_SET_gc   = (0x04), /* Output Compare Flag - SET */
} TC0_OCF0B_t;

/* Output Compare Flag */
typedef enum TC0_OCF0A_enum
{
    TC0_OCF0A_CLEAR_gc = (0x00), /* Output Compare Flag - CLEAR */
    TC0_OCF0A_SET_gc   = (0x02), /* Output Compare Flag - SET */
} TC0_OCF0A_t;

/* Overflow Flag */
typedef enum TC0_TOV0_enum
{
    TC0_TOV0_CLEAR_gc = (0x00), /* Overflow Flag - CLEAR */
    TC0_TOV0_SET_gc   = (0x01), /* Overflow Flag - SET */
} TC0_TOV0_t;

/*
--------------------------------------------------------------------------------
COULOMB_COUNTER - Coulomb Counter
--------------------------------------------------------------------------------
*/

typedef struct COULOMB_COUNTER_struct
{
    register8_t rsv_0x00[224]; /* RESERVED REGISTER BLOCK */
    register8_t CADAC0;        /* ADC Accumulate Current */
    register8_t CADAC1;        /* ADC Accumulate Current */
    register8_t CADAC2;        /* ADC Accumulate Current */
    register8_t CADAC3;        /* ADC Accumulate Current */
    register8_t CADCSRA;       /* CC-ADC Control and Status Register A */
    register8_t CADCSRB;       /* CC-ADC Control and Status Register B */
    register8_t CADRC;         /* CC-ADC Regular Current */
    register8_t rsv_0xE7;      /* RESERVED REGISTER */
    _REGISTER16 (CADIC);       /* CC-ADC Instantaneous Current */
} COULOMB_COUNTER_t;


/* When the CADEN bit is cleared (zero), the CC-ADC is disabled. When the CADEN bit is set (one), the CC-ADC will continuously measure the voltage drop over the external sense resistor RSENSE. In Power-down, only the Regular Current detection is active. In Power-off, the CC-ADC is always disabled. */
typedef enum COULOMB_COUNTER_CADEN_enum
{
    COULOMB_COUNTER_CADEN_CLEAR_gc = (0x00), /* When the CADEN bit is cleared (zero), the CC-ADC is disabled. When the CADEN bit is set (one), the CC-ADC will continuously measure the voltage drop over the external sense resistor RSENSE. In Power-down, only the Regular Current detection is active. In Power-off, the CC-ADC is always disabled. - CLEAR */
    COULOMB_COUNTER_CADEN_SET_gc   = (0x80), /* When the CADEN bit is cleared (zero), the CC-ADC is disabled. When the CADEN bit is set (one), the CC-ADC will continuously measure the voltage drop over the external sense resistor RSENSE. In Power-down, only the Regular Current detection is active. In Power-off, the CC-ADC is always disabled. - SET */
} COULOMB_COUNTER_CADEN_t;

/* CC-ADC Control and Status Register A-CADPOL */
typedef enum COULOMB_COUNTER_CADPOL_enum
{
    COULOMB_COUNTER_CADPOL_CLEAR_gc = (0x00), /* CC-ADC Control and Status Register A-CADPOL - CLEAR */
    COULOMB_COUNTER_CADPOL_SET_gc   = (0x40), /* CC-ADC Control and Status Register A-CADPOL - SET */
} COULOMB_COUNTER_CADPOL_t;

/* CC_ADC Update Busy */
typedef enum COULOMB_COUNTER_CADUB_enum
{
    COULOMB_COUNTER_CADUB_CLEAR_gc = (0x00), /* CC_ADC Update Busy - CLEAR */
    COULOMB_COUNTER_CADUB_SET_gc   = (0x20), /* CC_ADC Update Busy - SET */
} COULOMB_COUNTER_CADUB_t;

/* CC_ADC Accumulate Current Select Bits */
#define COULOMB_COUNTER_CADCSRA_CADAS_gc(x) ((x<<3) & 0x18)

/* The CADSI bits determine the current sampling interval for the Regular Current detection in Power-down mode. The actual settings remain to be determined. */
#define COULOMB_COUNTER_CADCSRA_CADSI_gc(x) ((x<<1) & 0x06)

/* When the CADSE bit is written to one, the ongoing CC-ADC conversion is aborted, and the CC-ADC enters Regular Current detection mode. */
typedef enum COULOMB_COUNTER_CADSE_enum
{
    COULOMB_COUNTER_CADSE_CLEAR_gc = (0x00), /* When the CADSE bit is written to one, the ongoing CC-ADC conversion is aborted, and the CC-ADC enters Regular Current detection mode. - CLEAR */
    COULOMB_COUNTER_CADSE_SET_gc   = (0x01), /* When the CADSE bit is written to one, the ongoing CC-ADC conversion is aborted, and the CC-ADC enters Regular Current detection mode. - SET */
} COULOMB_COUNTER_CADSE_t;

/* CC-ADC Control and Status Register B-CADACIE */
typedef enum COULOMB_COUNTER_CADACIE_enum
{
    COULOMB_COUNTER_CADACIE_CLEAR_gc = (0x00), /* CC-ADC Control and Status Register B-CADACIE - CLEAR */
    COULOMB_COUNTER_CADACIE_SET_gc   = (0x40), /* CC-ADC Control and Status Register B-CADACIE - SET */
} COULOMB_COUNTER_CADACIE_t;

/* Regular Current Interrupt Enable */
typedef enum COULOMB_COUNTER_CADRCIE_enum
{
    COULOMB_COUNTER_CADRCIE_CLEAR_gc = (0x00), /* Regular Current Interrupt Enable - CLEAR */
    COULOMB_COUNTER_CADRCIE_SET_gc   = (0x20), /* Regular Current Interrupt Enable - SET */
} COULOMB_COUNTER_CADRCIE_t;

/* CAD Instantenous Current Interrupt Enable */
typedef enum COULOMB_COUNTER_CADICIE_enum
{
    COULOMB_COUNTER_CADICIE_CLEAR_gc = (0x00), /* CAD Instantenous Current Interrupt Enable - CLEAR */
    COULOMB_COUNTER_CADICIE_SET_gc   = (0x10), /* CAD Instantenous Current Interrupt Enable - SET */
} COULOMB_COUNTER_CADICIE_t;

/* CC-ADC Accumulate Current Interrupt Flag */
typedef enum COULOMB_COUNTER_CADACIF_enum
{
    COULOMB_COUNTER_CADACIF_CLEAR_gc = (0x00), /* CC-ADC Accumulate Current Interrupt Flag - CLEAR */
    COULOMB_COUNTER_CADACIF_SET_gc   = (0x04), /* CC-ADC Accumulate Current Interrupt Flag - SET */
} COULOMB_COUNTER_CADACIF_t;

/* CC-ADC Accumulate Current Interrupt Flag */
typedef enum COULOMB_COUNTER_CADRCIF_enum
{
    COULOMB_COUNTER_CADRCIF_CLEAR_gc = (0x00), /* CC-ADC Accumulate Current Interrupt Flag - CLEAR */
    COULOMB_COUNTER_CADRCIF_SET_gc   = (0x02), /* CC-ADC Accumulate Current Interrupt Flag - SET */
} COULOMB_COUNTER_CADRCIF_t;

/* CC-ADC Instantaneous Current Interrupt Flag */
typedef enum COULOMB_COUNTER_CADICIF_enum
{
    COULOMB_COUNTER_CADICIF_CLEAR_gc = (0x00), /* CC-ADC Instantaneous Current Interrupt Flag - CLEAR */
    COULOMB_COUNTER_CADICIF_SET_gc   = (0x01), /* CC-ADC Instantaneous Current Interrupt Flag - SET */
} COULOMB_COUNTER_CADICIF_t;

/*
--------------------------------------------------------------------------------
VOLTAGE_REGULATOR - Voltage Regulator
--------------------------------------------------------------------------------
*/

typedef struct VOLTAGE_REGULATOR_struct
{
    register8_t rsv_0x00[200]; /* RESERVED REGISTER BLOCK */
    register8_t ROCR;          /* Regulator Operating Condition Register */
} VOLTAGE_REGULATOR_t;


/* ROC Status */
typedef enum VOLTAGE_REGULATOR_ROCS_enum
{
    VOLTAGE_REGULATOR_ROCS_CLEAR_gc = (0x00), /* ROC Status - CLEAR */
    VOLTAGE_REGULATOR_ROCS_SET_gc   = (0x80), /* ROC Status - SET */
} VOLTAGE_REGULATOR_ROCS_t;

/* ROC Warning Interrupt Flag */
typedef enum VOLTAGE_REGULATOR_ROCWIF_enum
{
    VOLTAGE_REGULATOR_ROCWIF_CLEAR_gc = (0x00), /* ROC Warning Interrupt Flag - CLEAR */
    VOLTAGE_REGULATOR_ROCWIF_SET_gc   = (0x02), /* ROC Warning Interrupt Flag - SET */
} VOLTAGE_REGULATOR_ROCWIF_t;

/* ROC Warning Interrupt Enable */
typedef enum VOLTAGE_REGULATOR_ROCWIE_enum
{
    VOLTAGE_REGULATOR_ROCWIE_CLEAR_gc = (0x00), /* ROC Warning Interrupt Enable - CLEAR */
    VOLTAGE_REGULATOR_ROCWIE_SET_gc   = (0x01), /* ROC Warning Interrupt Enable - SET */
} VOLTAGE_REGULATOR_ROCWIE_t;
/*
================================================================================
IO Module Instances. Mapped to memory.
================================================================================
*/

#define ADC                (*(ADC_t *) 0x0000)                /* Analog-to-Digital Converter */
#define WDT                (*(WDT_t *) 0x0000)                /* Watchdog Timer */
#define BANDGAP            (*(BANDGAP_t *) 0x0000)            /* Bandgap */
#define EXINT              (*(EXINT_t *) 0x0000)              /* External Interrupts */
#define PORTC              (*(PORTC_t *) 0x0000)              /* I/O Port */
#define PORTA              (*(PORTA_t *) 0x0000)              /* I/O Port */
#define PORTB              (*(PORTB_t *) 0x0000)              /* I/O Port */
#define FET                (*(FET_t *) 0x0000)                /* FET Control */
#define SPI                (*(SPI_t *) 0x0000)                /* Serial Peripheral Interface */
#define BOOT_LOAD          (*(BOOT_LOAD_t *) 0x0000)          /* Bootloader */
#define CPU                (*(CPU_t *) 0x0000)                /* CPU Registers */
#define BATTERY_PROTECTION (*(BATTERY_PROTECTION_t *) 0x0000) /* Battery Protection */
#define EEPROM             (*(EEPROM_t *) 0x0000)             /* EEPROM */
#define TC1                (*(TC1_t *) 0x0000)                /* Timer/Counter, 16-bit */
#define TC0                (*(TC0_t *) 0x0000)                /* Timer/Counter, 16-bit */
#define COULOMB_COUNTER    (*(COULOMB_COUNTER_t *) 0x0000)    /* Coulomb Counter */
#define VOLTAGE_REGULATOR  (*(VOLTAGE_REGULATOR_t *) 0x0000)  /* Voltage Regulator */
#define FUSE               (*(FUSE_t *) 0x0000)               /* Fuses */
#define LOCKBIT            (*(LOCKBIT_t *) 0x0000)            /* Lockbits */
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


/* Watch-dog Timer always on */
#define FUSE_WDTON_CLEAR_gc (0x00) /* Watch-dog Timer always on - CLEAR */
#define FUSE_WDTON_SET_gc   (0x80) /* Watch-dog Timer always on - SET */


/* Preserve EEPROM through the Chip Erase cycle */
#define FUSE_EESAVE_CLEAR_gc (0x00) /* Preserve EEPROM through the Chip Erase cycle - CLEAR */
#define FUSE_EESAVE_SET_gc   (0x40) /* Preserve EEPROM through the Chip Erase cycle - SET */


/* Serial program downloading (SPI) enabled */
#define FUSE_SPIEN_CLEAR_gc (0x00) /* Serial program downloading (SPI) enabled - CLEAR */
#define FUSE_SPIEN_SET_gc   (0x20) /* Serial program downloading (SPI) enabled - SET */


/* Debug Wire enable */
#define FUSE_DWEN_CLEAR_gc (0x00) /* Debug Wire enable - CLEAR */
#define FUSE_DWEN_SET_gc   (0x10) /* Debug Wire enable - SET */


/* Self Programming enable */
#define FUSE_SELFPRGEN_CLEAR_gc (0x00) /* Self Programming enable - CLEAR */
#define FUSE_SELFPRGEN_SET_gc   (0x08) /* Self Programming enable - SET */


/* Select start-up time */
#define FUSE_SUT_6CK_14CK_4MS_gc   (0x00) /* Start-up time 6 CK/14 CK + 4 ms */
#define FUSE_SUT_6CK_14CK_8MS_gc   (0x01) /* Start-up time 6 CK/14 CK + 8 ms */
#define FUSE_SUT_6CK_14CK_16MS_gc  (0x02) /* Start-up time 6 CK/14 CK + 16 ms */
#define FUSE_SUT_6CK_14CK_32MS_gc  (0x03) /* Start-up time 6 CK/14 CK + 32 ms */
#define FUSE_SUT_6CK_14CK_64MS_gc  (0x04) /* Start-up time 6 CK/14 CK + 64 ms */
#define FUSE_SUT_6CK_14CK_128MS_gc (0x05) /* Start-up time 6 CK/14 CK + 128 ms */
#define FUSE_SUT_6CK_14CK_256MS_gc (0x06) /* Start-up time 6 CK/14 CK + 256 ms */
#define FUSE_SUT_6CK_14CK_512MS_gc (0x07) /* Start-up time 6 CK/14 CK + 512 ms */


/*
--------------------------------------------------------------------------------
LOCKBIT - Lockbits
--------------------------------------------------------------------------------
*/


/* Memory Lock */
#define LOCKBIT_LB_PROG_VER_DISABLED_gc (0x00) /* Further programming and verification disabled */
#define LOCKBIT_LB_PROG_DISABLED_gc     (0x02) /* Further programming disabled */
#define LOCKBIT_LB_NO_LOCK_gc           (0x03) /* No memory lock features enabled */


/*
--------------------------------------------------------------------------------
ADC - Analog-to-Digital Converter
--------------------------------------------------------------------------------
*/


/* VADC Enable */
#define ADC_VADEN_CLEAR_gc (0x00) /* VADC Enable - CLEAR */
#define ADC_VADEN_SET_gc   (0x08) /* VADC Enable - SET */


/* VADC Satrt Conversion */
#define ADC_VADSC_CLEAR_gc (0x00) /* VADC Satrt Conversion - CLEAR */
#define ADC_VADSC_SET_gc   (0x04) /* VADC Satrt Conversion - SET */


/* VADC Conversion Complete Interrupt Flag */
#define ADC_VADCCIF_CLEAR_gc (0x00) /* VADC Conversion Complete Interrupt Flag - CLEAR */
#define ADC_VADCCIF_SET_gc   (0x02) /* VADC Conversion Complete Interrupt Flag - SET */


/* VADC Conversion Complete Interrupt Enable */
#define ADC_VADCCIE_CLEAR_gc (0x00) /* VADC Conversion Complete Interrupt Enable - CLEAR */
#define ADC_VADCCIE_SET_gc   (0x01) /* VADC Conversion Complete Interrupt Enable - SET */


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
BANDGAP - Bandgap
--------------------------------------------------------------------------------
*/


/* Setting the BGD bit to one will disable the bandgap voltage reference. This bit must be cleared before enabling CC-ADC or V-ADC, and must remain unset while either ADC is enabled. */
#define BANDGAP_BGD_CLEAR_gc (0x00) /* Setting the BGD bit to one will disable the bandgap voltage reference. This bit must be cleared before enabling CC-ADC or V-ADC, and must remain unset while either ADC is enabled. - CLEAR */
#define BANDGAP_BGD_SET_gc   (0x80) /* Setting the BGD bit to one will disable the bandgap voltage reference. This bit must be cleared before enabling CC-ADC or V-ADC, and must remain unset while either ADC is enabled. - SET */


/* BG Calibration of PTAT Current Bits */
#define BANDGAP_BGCCR_BGCC_gc(x) (x & 0x3F)

/*
--------------------------------------------------------------------------------
EXINT - External Interrupts
--------------------------------------------------------------------------------
*/


/* External Interrupt Sense Control 2 Bits */
#define EXINT_ISC2_VAL_0x00_gc (0x00<<4) /* Low Level of INTX */
#define EXINT_ISC2_VAL_0x01_gc (0x01<<4) /* Any Logical Change of INTX */
#define EXINT_ISC2_VAL_0x02_gc (0x02<<4) /* Falling Edge of INTX */
#define EXINT_ISC2_VAL_0x03_gc (0x03<<4) /* Rising Edge of INTX */


/* External Interrupt Sense Control 1 Bits */
#define EXINT_ISC1_VAL_0x00_gc (0x00<<2) /* Low Level of INTX */
#define EXINT_ISC1_VAL_0x01_gc (0x01<<2) /* Any Logical Change of INTX */
#define EXINT_ISC1_VAL_0x02_gc (0x02<<2) /* Falling Edge of INTX */
#define EXINT_ISC1_VAL_0x03_gc (0x03<<2) /* Rising Edge of INTX */


/* External Interrupt Sense Control 0 Bits */
#define EXINT_ISC0_VAL_0x00_gc (0x00) /* Low Level of INTX */
#define EXINT_ISC0_VAL_0x01_gc (0x01) /* Any Logical Change of INTX */
#define EXINT_ISC0_VAL_0x02_gc (0x02) /* Falling Edge of INTX */
#define EXINT_ISC0_VAL_0x03_gc (0x03) /* Rising Edge of INTX */


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
FET - FET Control
--------------------------------------------------------------------------------
*/


/* Deep Under-Voltage Recovery Disable */
#define FET_DUVRD_CLEAR_gc (0x00) /* Deep Under-Voltage Recovery Disable - CLEAR */
#define FET_DUVRD_SET_gc   (0x08) /* Deep Under-Voltage Recovery Disable - SET */


/* Current Protection Status */
#define FET_CPS_CLEAR_gc (0x00) /* Current Protection Status - CLEAR */
#define FET_CPS_SET_gc   (0x04) /* Current Protection Status - SET */


/* Discharge FET Enable */
#define FET_DFE_CLEAR_gc (0x00) /* Discharge FET Enable - CLEAR */
#define FET_DFE_SET_gc   (0x02) /* Discharge FET Enable - SET */


/* Charge FET Enable */
#define FET_CFE_CLEAR_gc (0x00) /* Charge FET Enable - CLEAR */
#define FET_CFE_SET_gc   (0x01) /* Charge FET Enable - SET */


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
BOOT_LOAD - Bootloader
--------------------------------------------------------------------------------
*/


/* Signature Row Read */
#define BOOT_LOAD_SIGRD_CLEAR_gc (0x00) /* Signature Row Read - CLEAR */
#define BOOT_LOAD_SIGRD_SET_gc   (0x20) /* Signature Row Read - SET */


/* Clear Temporary Page Buffer */
#define BOOT_LOAD_CTPB_CLEAR_gc (0x00) /* Clear Temporary Page Buffer - CLEAR */
#define BOOT_LOAD_CTPB_SET_gc   (0x10) /* Clear Temporary Page Buffer - SET */


/* Read Fuse and Lock Bits */
#define BOOT_LOAD_RFLB_CLEAR_gc (0x00) /* Read Fuse and Lock Bits - CLEAR */
#define BOOT_LOAD_RFLB_SET_gc   (0x08) /* Read Fuse and Lock Bits - SET */


/* Page Write */
#define BOOT_LOAD_PGWRT_CLEAR_gc (0x00) /* Page Write - CLEAR */
#define BOOT_LOAD_PGWRT_SET_gc   (0x04) /* Page Write - SET */


/* Page Erase */
#define BOOT_LOAD_PGERS_CLEAR_gc (0x00) /* Page Erase - CLEAR */
#define BOOT_LOAD_PGERS_SET_gc   (0x02) /* Page Erase - SET */


/* Store Program Memory Enable */
#define BOOT_LOAD_SPMEN_CLEAR_gc (0x00) /* Store Program Memory Enable - CLEAR */
#define BOOT_LOAD_SPMEN_SET_gc   (0x01) /* Store Program Memory Enable - SET */


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


/* Clock Output Enable */
#define CPU_CKOE_CLEAR_gc (0x00) /* Clock Output Enable - CLEAR */
#define CPU_CKOE_SET_gc   (0x20) /* Clock Output Enable - SET */


/* Pull-up disable */
#define CPU_PUD_CLEAR_gc (0x00) /* Pull-up disable - CLEAR */
#define CPU_PUD_SET_gc   (0x10) /* Pull-up disable - SET */


/* OCD Reset Flag */
#define CPU_OCDRF_CLEAR_gc (0x00) /* OCD Reset Flag - CLEAR */
#define CPU_OCDRF_SET_gc   (0x10) /* OCD Reset Flag - SET */


/* Watchdog Reset Flag */
#define CPU_WDRF_CLEAR_gc (0x00) /* Watchdog Reset Flag - CLEAR */
#define CPU_WDRF_SET_gc   (0x08) /* Watchdog Reset Flag - SET */


/* Brown-out Reset Flag */
#define CPU_BODRF_CLEAR_gc (0x00) /* Brown-out Reset Flag - CLEAR */
#define CPU_BODRF_SET_gc   (0x04) /* Brown-out Reset Flag - SET */


/* External Reset Flag */
#define CPU_EXTRF_CLEAR_gc (0x00) /* External Reset Flag - CLEAR */
#define CPU_EXTRF_SET_gc   (0x02) /* External Reset Flag - SET */


/* Power-on reset flag */
#define CPU_PORF_CLEAR_gc (0x00) /* Power-on reset flag - CLEAR */
#define CPU_PORF_SET_gc   (0x01) /* Power-on reset flag - SET */


/* Oscillator Sampling Interface Select 0 */
#define CPU_OSISEL0_CLEAR_gc (0x00) /* Oscillator Sampling Interface Select 0 - CLEAR */
#define CPU_OSISEL0_SET_gc   (0x10) /* Oscillator Sampling Interface Select 0 - SET */


/* Oscillator Sampling Interface Status */
#define CPU_OSIST_CLEAR_gc (0x00) /* Oscillator Sampling Interface Status - CLEAR */
#define CPU_OSIST_SET_gc   (0x02) /* Oscillator Sampling Interface Status - SET */


/* Oscillator Sampling Interface Enable */
#define CPU_OSIEN_CLEAR_gc (0x00) /* Oscillator Sampling Interface Enable - CLEAR */
#define CPU_OSIEN_SET_gc   (0x01) /* Oscillator Sampling Interface Enable - SET */


/* Sleep Mode Select bits */
#define CPU_SM_IDLE_gc     (0x00<<1) /* Idle */
#define CPU_SM_ADC_gc      (0x01<<1) /* ADC Noise Reduction (If Available) */
#define CPU_SM_VAL_0x02_gc (0x02<<1) /* Reserved */
#define CPU_SM_PSAVE_gc    (0x03<<1) /* Power Save */
#define CPU_SM_POFF_gc     (0x04<<1) /* Power Off */
#define CPU_SM_VAL_0x05_gc (0x05<<1) /* Reserved */
#define CPU_SM_VAL_0x06_gc (0x06<<1) /* Reserved */
#define CPU_SM_VAL_0x07_gc (0x07<<1) /* Reserved */


/* Sleep Enable */
#define CPU_SE_CLEAR_gc (0x00) /* Sleep Enable - CLEAR */
#define CPU_SE_SET_gc   (0x01) /* Sleep Enable - SET */


/* When this bit is written logic one, the digital input buffer of the corresponding V_ADC pin is disabled. */
#define CPU_PA1DID_CLEAR_gc (0x00) /* When this bit is written logic one, the digital input buffer of the corresponding V_ADC pin is disabled. - CLEAR */
#define CPU_PA1DID_SET_gc   (0x02) /* When this bit is written logic one, the digital input buffer of the corresponding V_ADC pin is disabled. - SET */


/* When this bit is written logic one, the digital input buffer of the corresponding V_ADC pin is disabled. */
#define CPU_PA0DID_CLEAR_gc (0x00) /* When this bit is written logic one, the digital input buffer of the corresponding V_ADC pin is disabled. - CLEAR */
#define CPU_PA0DID_SET_gc   (0x01) /* When this bit is written logic one, the digital input buffer of the corresponding V_ADC pin is disabled. - SET */


/* Power Reduction Voltage Regulator Monitor */
#define CPU_PRVRM_CLEAR_gc (0x00) /* Power Reduction Voltage Regulator Monitor - CLEAR */
#define CPU_PRVRM_SET_gc   (0x20) /* Power Reduction Voltage Regulator Monitor - SET */


/* Power reduction SPI */
#define CPU_PRSPI_CLEAR_gc (0x00) /* Power reduction SPI - CLEAR */
#define CPU_PRSPI_SET_gc   (0x08) /* Power reduction SPI - SET */


/* Power Reduction Timer/Counter1 */
#define CPU_PRTIM1_CLEAR_gc (0x00) /* Power Reduction Timer/Counter1 - CLEAR */
#define CPU_PRTIM1_SET_gc   (0x04) /* Power Reduction Timer/Counter1 - SET */


/* Power Reduction Timer/Counter0 */
#define CPU_PRTIM0_CLEAR_gc (0x00) /* Power Reduction Timer/Counter0 - CLEAR */
#define CPU_PRTIM0_SET_gc   (0x02) /* Power Reduction Timer/Counter0 - SET */


/* Power Reduction V-ADC */
#define CPU_PRVADC_CLEAR_gc (0x00) /* Power Reduction V-ADC - CLEAR */
#define CPU_PRVADC_SET_gc   (0x01) /* Power Reduction V-ADC - SET */


/* Clock Prescaler Change Enable */
#define CPU_CLKPCE_CLEAR_gc (0x00) /* Clock Prescaler Change Enable - CLEAR */
#define CPU_CLKPCE_SET_gc   (0x80) /* Clock Prescaler Change Enable - SET */


/* Clock Prescaler Select Bits */
#define CPU_CLKPR_CLKPS_gc(x) (x & 0x03)

/*
--------------------------------------------------------------------------------
BATTERY_PROTECTION - Battery Protection
--------------------------------------------------------------------------------
*/


/* Battery Protection Parameter Lock Enable */
#define BATTERY_PROTECTION_BPPLE_CLEAR_gc (0x00) /* Battery Protection Parameter Lock Enable - CLEAR */
#define BATTERY_PROTECTION_BPPLE_SET_gc   (0x02) /* Battery Protection Parameter Lock Enable - SET */


/* Battery Protection Parameter Lock */
#define BATTERY_PROTECTION_BPPL_CLEAR_gc (0x00) /* Battery Protection Parameter Lock - CLEAR */
#define BATTERY_PROTECTION_BPPL_SET_gc   (0x01) /* Battery Protection Parameter Lock - SET */


/* Short Circuit Protection Disabled */
#define BATTERY_PROTECTION_SCD_CLEAR_gc (0x00) /* Short Circuit Protection Disabled - CLEAR */
#define BATTERY_PROTECTION_SCD_SET_gc   (0x10) /* Short Circuit Protection Disabled - SET */


/* Discharge Over-current Protection Disabled */
#define BATTERY_PROTECTION_DOCD_CLEAR_gc (0x00) /* Discharge Over-current Protection Disabled - CLEAR */
#define BATTERY_PROTECTION_DOCD_SET_gc   (0x08) /* Discharge Over-current Protection Disabled - SET */


/* Charge Over-current Protection Disabled */
#define BATTERY_PROTECTION_COCD_CLEAR_gc (0x00) /* Charge Over-current Protection Disabled - CLEAR */
#define BATTERY_PROTECTION_COCD_SET_gc   (0x04) /* Charge Over-current Protection Disabled - SET */


/* Discharge High-current Protection Disable */
#define BATTERY_PROTECTION_DHCD_CLEAR_gc (0x00) /* Discharge High-current Protection Disable - CLEAR */
#define BATTERY_PROTECTION_DHCD_SET_gc   (0x02) /* Discharge High-current Protection Disable - SET */


/* Charge High-current Protection Disable */
#define BATTERY_PROTECTION_CHCD_CLEAR_gc (0x00) /* Charge High-current Protection Disable - CLEAR */
#define BATTERY_PROTECTION_CHCD_SET_gc   (0x01) /* Charge High-current Protection Disable - SET */


/* Short-circuit Protection Activated Interrupt Flag */
#define BATTERY_PROTECTION_SCIF_CLEAR_gc (0x00) /* Short-circuit Protection Activated Interrupt Flag - CLEAR */
#define BATTERY_PROTECTION_SCIF_SET_gc   (0x10) /* Short-circuit Protection Activated Interrupt Flag - SET */


/* Discharge Over-current Protection Activated Interrupt Flag */
#define BATTERY_PROTECTION_DOCIF_CLEAR_gc (0x00) /* Discharge Over-current Protection Activated Interrupt Flag - CLEAR */
#define BATTERY_PROTECTION_DOCIF_SET_gc   (0x08) /* Discharge Over-current Protection Activated Interrupt Flag - SET */


/* Charge Over-current Protection Activated Interrupt Flag */
#define BATTERY_PROTECTION_COCIF_CLEAR_gc (0x00) /* Charge Over-current Protection Activated Interrupt Flag - CLEAR */
#define BATTERY_PROTECTION_COCIF_SET_gc   (0x04) /* Charge Over-current Protection Activated Interrupt Flag - SET */


/* Disharge High-current Protection Activated Interrupt */
#define BATTERY_PROTECTION_DHCIF_CLEAR_gc (0x00) /* Disharge High-current Protection Activated Interrupt - CLEAR */
#define BATTERY_PROTECTION_DHCIF_SET_gc   (0x02) /* Disharge High-current Protection Activated Interrupt - SET */


/* Charge High-current Protection Activated Interrupt */
#define BATTERY_PROTECTION_CHCIF_CLEAR_gc (0x00) /* Charge High-current Protection Activated Interrupt - CLEAR */
#define BATTERY_PROTECTION_CHCIF_SET_gc   (0x01) /* Charge High-current Protection Activated Interrupt - SET */


/* Short-circuit Protection Activated Interrupt Enable */
#define BATTERY_PROTECTION_SCIE_CLEAR_gc (0x00) /* Short-circuit Protection Activated Interrupt Enable - CLEAR */
#define BATTERY_PROTECTION_SCIE_SET_gc   (0x10) /* Short-circuit Protection Activated Interrupt Enable - SET */


/* Discharge Over-current Protection Activated Interrupt Enable */
#define BATTERY_PROTECTION_DOCIE_CLEAR_gc (0x00) /* Discharge Over-current Protection Activated Interrupt Enable - CLEAR */
#define BATTERY_PROTECTION_DOCIE_SET_gc   (0x08) /* Discharge Over-current Protection Activated Interrupt Enable - SET */


/* Charge Over-current Protection Activated Interrupt Enable */
#define BATTERY_PROTECTION_COCIE_CLEAR_gc (0x00) /* Charge Over-current Protection Activated Interrupt Enable - CLEAR */
#define BATTERY_PROTECTION_COCIE_SET_gc   (0x04) /* Charge Over-current Protection Activated Interrupt Enable - SET */


/* Discharger High-current Protection Activated Interrupt */
#define BATTERY_PROTECTION_DHCIE_CLEAR_gc (0x00) /* Discharger High-current Protection Activated Interrupt - CLEAR */
#define BATTERY_PROTECTION_DHCIE_SET_gc   (0x02) /* Discharger High-current Protection Activated Interrupt - SET */


/* Charger High-current Protection Activated Interrupt */
#define BATTERY_PROTECTION_CHCIE_CLEAR_gc (0x00) /* Charger High-current Protection Activated Interrupt - CLEAR */
#define BATTERY_PROTECTION_CHCIE_SET_gc   (0x01) /* Charger High-current Protection Activated Interrupt - SET */


/*
--------------------------------------------------------------------------------
EEPROM - EEPROM
--------------------------------------------------------------------------------
*/


/* EEPROM Control Register-EEPM */
#define EEPROM_EEPM_VAL_0x00_gc (0x00<<4) /* Erase and Write in one operation */
#define EEPROM_EEPM_VAL_0x01_gc (0x01<<4) /* Erase Only */
#define EEPROM_EEPM_VAL_0x02_gc (0x02<<4) /* Write Only */


/* EEProm Ready Interrupt Enable */
#define EEPROM_EERIE_CLEAR_gc (0x00) /* EEProm Ready Interrupt Enable - CLEAR */
#define EEPROM_EERIE_SET_gc   (0x08) /* EEProm Ready Interrupt Enable - SET */


/* EEPROM Master Write Enable */
#define EEPROM_EEMPE_CLEAR_gc (0x00) /* EEPROM Master Write Enable - CLEAR */
#define EEPROM_EEMPE_SET_gc   (0x04) /* EEPROM Master Write Enable - SET */


/* EEPROM Write Enable */
#define EEPROM_EEPE_CLEAR_gc (0x00) /* EEPROM Write Enable - CLEAR */
#define EEPROM_EEPE_SET_gc   (0x02) /* EEPROM Write Enable - SET */


/* EEPROM Read Enable */
#define EEPROM_EERE_CLEAR_gc (0x00) /* EEPROM Read Enable - CLEAR */
#define EEPROM_EERE_SET_gc   (0x01) /* EEPROM Read Enable - SET */


/*
--------------------------------------------------------------------------------
TC16 - Timer/Counter, 16-bit
--------------------------------------------------------------------------------
*/


/*
--------------------------------------------------------------------------------
TC16 - Timer/Counter, 16-bit
--------------------------------------------------------------------------------
*/


/* Timer/Counter Width */
#define TC1_TCW1_CLEAR_gc (0x00) /* Timer/Counter Width - CLEAR */
#define TC1_TCW1_SET_gc   (0x80) /* Timer/Counter Width - SET */


/* Input Capture Mode Enable */
#define TC1_ICEN1_CLEAR_gc (0x00) /* Input Capture Mode Enable - CLEAR */
#define TC1_ICEN1_SET_gc   (0x40) /* Input Capture Mode Enable - SET */


/* Input Capture Noise Canceler */
#define TC1_ICNC1_CLEAR_gc (0x00) /* Input Capture Noise Canceler - CLEAR */
#define TC1_ICNC1_SET_gc   (0x20) /* Input Capture Noise Canceler - SET */


/* Input Capture Edge Select */
#define TC1_ICES1_CLEAR_gc (0x00) /* Input Capture Edge Select - CLEAR */
#define TC1_ICES1_SET_gc   (0x10) /* Input Capture Edge Select - SET */


/* Input Capture Select */
#define TC1_ICS1_CLEAR_gc (0x00) /* Input Capture Select - CLEAR */
#define TC1_ICS1_SET_gc   (0x08) /* Input Capture Select - SET */


/* Waveform Generation Mode */
#define TC1_WGM10_CLEAR_gc (0x00) /* Waveform Generation Mode - CLEAR */
#define TC1_WGM10_SET_gc   (0x01) /* Waveform Generation Mode - SET */


/* Timer/Counter n Input Capture Interrupt Enable */
#define TC1_ICIE1_CLEAR_gc (0x00) /* Timer/Counter n Input Capture Interrupt Enable - CLEAR */
#define TC1_ICIE1_SET_gc   (0x08) /* Timer/Counter n Input Capture Interrupt Enable - SET */


/* Timer/Counter1 Output Compare B Interrupt Enable */
#define TC1_OCIE1B_CLEAR_gc (0x00) /* Timer/Counter1 Output Compare B Interrupt Enable - CLEAR */
#define TC1_OCIE1B_SET_gc   (0x04) /* Timer/Counter1 Output Compare B Interrupt Enable - SET */


/* Timer/Counter1 Output Compare A Interrupt Enable */
#define TC1_OCIE1A_CLEAR_gc (0x00) /* Timer/Counter1 Output Compare A Interrupt Enable - CLEAR */
#define TC1_OCIE1A_SET_gc   (0x02) /* Timer/Counter1 Output Compare A Interrupt Enable - SET */


/* Timer/Counter1 Overflow Interrupt Enable */
#define TC1_TOIE1_CLEAR_gc (0x00) /* Timer/Counter1 Overflow Interrupt Enable - CLEAR */
#define TC1_TOIE1_SET_gc   (0x01) /* Timer/Counter1 Overflow Interrupt Enable - SET */


/* Timer/Counter 1 Input Capture Flag */
#define TC1_ICF1_CLEAR_gc (0x00) /* Timer/Counter 1 Input Capture Flag - CLEAR */
#define TC1_ICF1_SET_gc   (0x08) /* Timer/Counter 1 Input Capture Flag - SET */


/* Timer/Counter1 Output Compare Flag B */
#define TC1_OCF1B_CLEAR_gc (0x00) /* Timer/Counter1 Output Compare Flag B - CLEAR */
#define TC1_OCF1B_SET_gc   (0x04) /* Timer/Counter1 Output Compare Flag B - SET */


/* Timer/Counter1 Output Compare Flag A */
#define TC1_OCF1A_CLEAR_gc (0x00) /* Timer/Counter1 Output Compare Flag A - CLEAR */
#define TC1_OCF1A_SET_gc   (0x02) /* Timer/Counter1 Output Compare Flag A - SET */


/* Timer/Counter1 Overflow Flag */
#define TC1_TOV1_CLEAR_gc (0x00) /* Timer/Counter1 Overflow Flag - CLEAR */
#define TC1_TOV1_SET_gc   (0x01) /* Timer/Counter1 Overflow Flag - SET */


/* Timer/Counter Synchronization Mode */
#define TC1_TSM_CLEAR_gc (0x00) /* Timer/Counter Synchronization Mode - CLEAR */
#define TC1_TSM_SET_gc   (0x80) /* Timer/Counter Synchronization Mode - SET */


/* Prescaler Reset */
#define TC1_PSRSYNC_CLEAR_gc (0x00) /* Prescaler Reset - CLEAR */
#define TC1_PSRSYNC_SET_gc   (0x01) /* Prescaler Reset - SET */


/* Timer/Counter Width */
#define TC0_TCW0_CLEAR_gc (0x00) /* Timer/Counter Width - CLEAR */
#define TC0_TCW0_SET_gc   (0x80) /* Timer/Counter Width - SET */


/* Input Capture Mode Enable */
#define TC0_ICEN0_CLEAR_gc (0x00) /* Input Capture Mode Enable - CLEAR */
#define TC0_ICEN0_SET_gc   (0x40) /* Input Capture Mode Enable - SET */


/* Input Capture Noise Canceler */
#define TC0_ICNC0_CLEAR_gc (0x00) /* Input Capture Noise Canceler - CLEAR */
#define TC0_ICNC0_SET_gc   (0x20) /* Input Capture Noise Canceler - SET */


/* Input Capture Edge Select */
#define TC0_ICES0_CLEAR_gc (0x00) /* Input Capture Edge Select - CLEAR */
#define TC0_ICES0_SET_gc   (0x10) /* Input Capture Edge Select - SET */


/* Input Capture Select */
#define TC0_ICS0_CLEAR_gc (0x00) /* Input Capture Select - CLEAR */
#define TC0_ICS0_SET_gc   (0x08) /* Input Capture Select - SET */


/* Clock Select0 bit 0 */
#define TC0_WGM00_CLEAR_gc (0x00) /* Clock Select0 bit 0 - CLEAR */
#define TC0_WGM00_SET_gc   (0x01) /* Clock Select0 bit 0 - SET */


/* Clock Select0 bit 2 */
#define TC0_CS02_CLEAR_gc (0x00) /* Clock Select0 bit 2 - CLEAR */
#define TC0_CS02_SET_gc   (0x04) /* Clock Select0 bit 2 - SET */


/* Clock Select0 bit 1 */
#define TC0_CS01_CLEAR_gc (0x00) /* Clock Select0 bit 1 - CLEAR */
#define TC0_CS01_SET_gc   (0x02) /* Clock Select0 bit 1 - SET */


/* Clock Select0 bit 0 */
#define TC0_CS00_CLEAR_gc (0x00) /* Clock Select0 bit 0 - CLEAR */
#define TC0_CS00_SET_gc   (0x01) /* Clock Select0 bit 0 - SET */


/* Timer/Counter n Input Capture Interrupt Enable */
#define TC0_ICIE0_CLEAR_gc (0x00) /* Timer/Counter n Input Capture Interrupt Enable - CLEAR */
#define TC0_ICIE0_SET_gc   (0x08) /* Timer/Counter n Input Capture Interrupt Enable - SET */


/* Output Compare Interrupt Enable */
#define TC0_OCIE0B_CLEAR_gc (0x00) /* Output Compare Interrupt Enable - CLEAR */
#define TC0_OCIE0B_SET_gc   (0x04) /* Output Compare Interrupt Enable - SET */


/* Output Compare Interrupt Enable */
#define TC0_OCIE0A_CLEAR_gc (0x00) /* Output Compare Interrupt Enable - CLEAR */
#define TC0_OCIE0A_SET_gc   (0x02) /* Output Compare Interrupt Enable - SET */


/* Overflow Interrupt Enable */
#define TC0_TOIE0_CLEAR_gc (0x00) /* Overflow Interrupt Enable - CLEAR */
#define TC0_TOIE0_SET_gc   (0x01) /* Overflow Interrupt Enable - SET */


/* Timer/Counter Interrupt Flag Register */
#define TC0_ICF0_CLEAR_gc (0x00) /* Timer/Counter Interrupt Flag Register - CLEAR */
#define TC0_ICF0_SET_gc   (0x08) /* Timer/Counter Interrupt Flag Register - SET */


/* Output Compare Flag */
#define TC0_OCF0B_CLEAR_gc (0x00) /* Output Compare Flag - CLEAR */
#define TC0_OCF0B_SET_gc   (0x04) /* Output Compare Flag - SET */


/* Output Compare Flag */
#define TC0_OCF0A_CLEAR_gc (0x00) /* Output Compare Flag - CLEAR */
#define TC0_OCF0A_SET_gc   (0x02) /* Output Compare Flag - SET */


/* Overflow Flag */
#define TC0_TOV0_CLEAR_gc (0x00) /* Overflow Flag - CLEAR */
#define TC0_TOV0_SET_gc   (0x01) /* Overflow Flag - SET */


/*
--------------------------------------------------------------------------------
COULOMB_COUNTER - Coulomb Counter
--------------------------------------------------------------------------------
*/


/* When the CADEN bit is cleared (zero), the CC-ADC is disabled. When the CADEN bit is set (one), the CC-ADC will continuously measure the voltage drop over the external sense resistor RSENSE. In Power-down, only the Regular Current detection is active. In Power-off, the CC-ADC is always disabled. */
#define COULOMB_COUNTER_CADEN_CLEAR_gc (0x00) /* When the CADEN bit is cleared (zero), the CC-ADC is disabled. When the CADEN bit is set (one), the CC-ADC will continuously measure the voltage drop over the external sense resistor RSENSE. In Power-down, only the Regular Current detection is active. In Power-off, the CC-ADC is always disabled. - CLEAR */
#define COULOMB_COUNTER_CADEN_SET_gc   (0x80) /* When the CADEN bit is cleared (zero), the CC-ADC is disabled. When the CADEN bit is set (one), the CC-ADC will continuously measure the voltage drop over the external sense resistor RSENSE. In Power-down, only the Regular Current detection is active. In Power-off, the CC-ADC is always disabled. - SET */


/* CC-ADC Control and Status Register A-CADPOL */
#define COULOMB_COUNTER_CADPOL_CLEAR_gc (0x00) /* CC-ADC Control and Status Register A-CADPOL - CLEAR */
#define COULOMB_COUNTER_CADPOL_SET_gc   (0x40) /* CC-ADC Control and Status Register A-CADPOL - SET */


/* CC_ADC Update Busy */
#define COULOMB_COUNTER_CADUB_CLEAR_gc (0x00) /* CC_ADC Update Busy - CLEAR */
#define COULOMB_COUNTER_CADUB_SET_gc   (0x20) /* CC_ADC Update Busy - SET */


/* CC_ADC Accumulate Current Select Bits */
#define COULOMB_COUNTER_CADCSRA_CADAS_gc(x) ((x<<3) & 0x18)

/* The CADSI bits determine the current sampling interval for the Regular Current detection in Power-down mode. The actual settings remain to be determined. */
#define COULOMB_COUNTER_CADCSRA_CADSI_gc(x) ((x<<1) & 0x06)

/* When the CADSE bit is written to one, the ongoing CC-ADC conversion is aborted, and the CC-ADC enters Regular Current detection mode. */
#define COULOMB_COUNTER_CADSE_CLEAR_gc (0x00) /* When the CADSE bit is written to one, the ongoing CC-ADC conversion is aborted, and the CC-ADC enters Regular Current detection mode. - CLEAR */
#define COULOMB_COUNTER_CADSE_SET_gc   (0x01) /* When the CADSE bit is written to one, the ongoing CC-ADC conversion is aborted, and the CC-ADC enters Regular Current detection mode. - SET */


/* CC-ADC Control and Status Register B-CADACIE */
#define COULOMB_COUNTER_CADACIE_CLEAR_gc (0x00) /* CC-ADC Control and Status Register B-CADACIE - CLEAR */
#define COULOMB_COUNTER_CADACIE_SET_gc   (0x40) /* CC-ADC Control and Status Register B-CADACIE - SET */


/* Regular Current Interrupt Enable */
#define COULOMB_COUNTER_CADRCIE_CLEAR_gc (0x00) /* Regular Current Interrupt Enable - CLEAR */
#define COULOMB_COUNTER_CADRCIE_SET_gc   (0x20) /* Regular Current Interrupt Enable - SET */


/* CAD Instantenous Current Interrupt Enable */
#define COULOMB_COUNTER_CADICIE_CLEAR_gc (0x00) /* CAD Instantenous Current Interrupt Enable - CLEAR */
#define COULOMB_COUNTER_CADICIE_SET_gc   (0x10) /* CAD Instantenous Current Interrupt Enable - SET */


/* CC-ADC Accumulate Current Interrupt Flag */
#define COULOMB_COUNTER_CADACIF_CLEAR_gc (0x00) /* CC-ADC Accumulate Current Interrupt Flag - CLEAR */
#define COULOMB_COUNTER_CADACIF_SET_gc   (0x04) /* CC-ADC Accumulate Current Interrupt Flag - SET */


/* CC-ADC Accumulate Current Interrupt Flag */
#define COULOMB_COUNTER_CADRCIF_CLEAR_gc (0x00) /* CC-ADC Accumulate Current Interrupt Flag - CLEAR */
#define COULOMB_COUNTER_CADRCIF_SET_gc   (0x02) /* CC-ADC Accumulate Current Interrupt Flag - SET */


/* CC-ADC Instantaneous Current Interrupt Flag */
#define COULOMB_COUNTER_CADICIF_CLEAR_gc (0x00) /* CC-ADC Instantaneous Current Interrupt Flag - CLEAR */
#define COULOMB_COUNTER_CADICIF_SET_gc   (0x01) /* CC-ADC Instantaneous Current Interrupt Flag - SET */


/*
--------------------------------------------------------------------------------
VOLTAGE_REGULATOR - Voltage Regulator
--------------------------------------------------------------------------------
*/


/* ROC Status */
#define VOLTAGE_REGULATOR_ROCS_CLEAR_gc (0x00) /* ROC Status - CLEAR */
#define VOLTAGE_REGULATOR_ROCS_SET_gc   (0x80) /* ROC Status - SET */


/* ROC Warning Interrupt Flag */
#define VOLTAGE_REGULATOR_ROCWIF_CLEAR_gc (0x00) /* ROC Warning Interrupt Flag - CLEAR */
#define VOLTAGE_REGULATOR_ROCWIF_SET_gc   (0x02) /* ROC Warning Interrupt Flag - SET */


/* ROC Warning Interrupt Enable */
#define VOLTAGE_REGULATOR_ROCWIE_CLEAR_gc (0x00) /* ROC Warning Interrupt Enable - CLEAR */
#define VOLTAGE_REGULATOR_ROCWIE_SET_gc   (0x01) /* ROC Warning Interrupt Enable - SET */

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


/* ADC - Analog-to-Digital Converter (0x0000) */
#define ADC_BASE                  _SFR_MEM16(0x0000) /* ADC Base Address */
#define ADC_VADC                  _SFR_MEM16(0x0078) /* VADC Data Register  Bytes */
#define ADC_VADCL                 _SFR_MEM8 (0x0078) /* VADC Data Register  Bytes LOW BYTE */
#define ADC_VADCH                 _SFR_MEM8 (0x0079) /* VADC Data Register  Bytes HIGH BYTE */
#define ADC_VADCSR                _SFR_MEM8 (0x007A) /* The VADC Control and Status register */
#define ADC_VADMUX                _SFR_MEM8 (0x007C) /* The VADC multiplexer Selection Register */

/* WDT - Watchdog Timer (0x0000) */
#define WDT_BASE                  _SFR_MEM8 (0x0000) /* WDT Base Address */
#define WDT_WDTCSR                _SFR_MEM8 (0x0060) /* Watchdog Timer Control Register */

/* BANDGAP - Bandgap (0x0000) */
#define BANDGAP_BASE              _SFR_MEM8 (0x0000) /* BANDGAP Base Address */
#define BANDGAP_BGCCR             _SFR_MEM8 (0x00D0) /* Bandgap Calibration Register */
#define BANDGAP_BGCRR             _SFR_MEM8 (0x00D1) /* Bandgap Calibration of Resistor Ladder */

/* EXINT - External Interrupts (0x0000) */
#define EXINT_BASE                _SFR_MEM8 (0x0000) /* EXINT Base Address */
#define EXINT_EIFR                _SFR_MEM8 (0x003C) /* External Interrupt Flag Register */
#define EXINT_EIMSK               _SFR_MEM8 (0x003D) /* External Interrupt Mask Register */
#define EXINT_EICRA               _SFR_MEM8 (0x0069) /* External Interrupt Control Register */

/* PORTC - I/O Port (0x0000) */
#define PORTCC_BASE               _SFR_MEM8 (0x0000) /* PORTCC Base Address */
#define PORTCC_PINC               _SFR_MEM8 (0x0026) /* Port C Input Pins */
#define PORTCC_PORTC              _SFR_MEM8 (0x0028) /* Port C Data Register */

/* PORTA - I/O Port (0x0000) */
#define PORTAA_BASE               _SFR_MEM8 (0x0000) /* PORTAA Base Address */
#define PORTAA_PINA               _SFR_MEM8 (0x0020) /* Port A Input Pins */
#define PORTAA_DDRA               _SFR_MEM8 (0x0021) /* Port A Data Direction Register */
#define PORTAA_PORTA              _SFR_MEM8 (0x0022) /* Port A Data Register */

/* PORTB - I/O Port (0x0000) */
#define PORTBB_BASE               _SFR_MEM8 (0x0000) /* PORTBB Base Address */
#define PORTBB_PINB               _SFR_MEM8 (0x0023) /* Input Pins, Port B */
#define PORTBB_DDRB               _SFR_MEM8 (0x0024) /* Data Direction Register, Port B */
#define PORTBB_PORTB              _SFR_MEM8 (0x0025) /* Data Register, Port B */

/* FET - FET Control (0x0000) */
#define FET_BASE                  _SFR_MEM8 (0x0000) /* FET Base Address */
#define FET_FCSR                  _SFR_MEM8 (0x00F0) /* FET Control and Status Register */

/* SPI - Serial Peripheral Interface (0x0000) */
#define SPI_BASE                  _SFR_MEM8 (0x0000) /* SPI Base Address */
#define SPI_SPCR                  _SFR_MEM8 (0x004C) /* SPI Control Register */
#define SPI_SPSR                  _SFR_MEM8 (0x004D) /* SPI Status Register */
#define SPI_SPDR                  _SFR_MEM8 (0x004E) /* SPI Data Register */

/* BOOT_LOAD - Bootloader (0x0000) */
#define BOOT_LOAD_BASE            _SFR_MEM8 (0x0000) /* BOOT_LOAD Base Address */
#define BOOT_LOAD_SPMCSR          _SFR_MEM8 (0x0057) /* Store Program Memory Control and Status Register */

/* CPU - CPU Registers (0x0000) */
#define CPU_BASE                  _SFR_MEM8 (0x0000) /* CPU Base Address */
#define CPU_OSICSR                _SFR_MEM8 (0x0037) /* Oscillator Sampling Interface Control and Status Register */
#define CPU_GPIOR0                _SFR_MEM8 (0x003E) /* General Purpose IO Register 0 */
#define CPU_GPIOR1                _SFR_MEM8 (0x004A) /* General Purpose IO Register 1 */
#define CPU_GPIOR2                _SFR_MEM8 (0x004B) /* General Purpose IO Register 2 */
#define CPU_SMCR                  _SFR_MEM8 (0x0053) /* Sleep Mode Control Register */
#define CPU_MCUSR                 _SFR_MEM8 (0x0054) /* MCU Status Register */
#define CPU_MCUCR                 _SFR_MEM8 (0x0055) /* MCU Control Register */
#define CPU_SP                    _SFR_MEM16(0x005D) /* Stack Pointer  */
#define CPU_SPL                   _SFR_MEM8 (0x005D) /* Stack Pointer  LOW BYTE */
#define CPU_SPH                   _SFR_MEM8 (0x005E) /* Stack Pointer  HIGH BYTE */
#define CPU_SREG                  _SFR_MEM8 (0x005F) /* Status Register */
#define CPU_CLKPR                 _SFR_MEM8 (0x0061) /* Clock Prescale Register */
#define CPU_PRR0                  _SFR_MEM8 (0x0064) /* Power Reduction Register 0 */
#define CPU_FOSCCAL               _SFR_MEM8 (0x0066) /* Fast Oscillator Calibration Value */
#define CPU_DIDR0                 _SFR_MEM8 (0x007E) /* Digital Input Disable Register */

/* BATTERY_PROTECTION - Battery Protection (0x0000) */
#define BATTERY_PROTECTION_BASE   _SFR_MEM8 (0x0000) /* BATTERY_PROTECTION Base Address */
#define BATTERY_PROTECTION_BPIMSK _SFR_MEM8 (0x00F2) /* Battery Protection Interrupt Mask Register */
#define BATTERY_PROTECTION_BPIFR  _SFR_MEM8 (0x00F3) /* Battery Protection Interrupt Flag Register */
#define BATTERY_PROTECTION_BPSCD  _SFR_MEM8 (0x00F5) /* Battery Protection Short-Circuit Detection Level Register */
#define BATTERY_PROTECTION_BPDOCD _SFR_MEM8 (0x00F6) /* Battery Protection Discharge-Over-current Detection Level Register */
#define BATTERY_PROTECTION_BPCOCD _SFR_MEM8 (0x00F7) /* Battery Protection Charge-Over-current Detection Level Register */
#define BATTERY_PROTECTION_BPDHCD _SFR_MEM8 (0x00F8) /* Battery Protection Discharge-High-current Detection Level Register */
#define BATTERY_PROTECTION_BPCHCD _SFR_MEM8 (0x00F9) /* Battery Protection Charge-High-current Detection Level Register */
#define BATTERY_PROTECTION_BPSCTR _SFR_MEM8 (0x00FA) /* Battery Protection Short-current Timing Register */
#define BATTERY_PROTECTION_BPOCTR _SFR_MEM8 (0x00FB) /* Battery Protection Over-current Timing Register */
#define BATTERY_PROTECTION_BPHCTR _SFR_MEM8 (0x00FC) /* Battery Protection Short-current Timing Register */
#define BATTERY_PROTECTION_BPCR   _SFR_MEM8 (0x00FD) /* Battery Protection Control Register */
#define BATTERY_PROTECTION_BPPLR  _SFR_MEM8 (0x00FE) /* Battery Protection Parameter Lock Register */

/* EEPROM - EEPROM (0x0000) */
#define EEPROM_BASE               _SFR_MEM8 (0x0000) /* EEPROM Base Address */
#define EEPROM_EECR               _SFR_MEM8 (0x003F) /* EEPROM Control Register */
#define EEPROM_EEDR               _SFR_MEM8 (0x0040) /* EEPROM Data Register */
#define EEPROM_EEAR               _SFR_MEM8 (0x0041) /* EEPROM Read/Write Access */

/* TC1 - Timer/Counter, 16-bit (0x0000) */
#define TC16_BASE                 _SFR_MEM8 (0x0000) /* TC16 Base Address */
#define TC16_TIFR1                _SFR_MEM8 (0x0036) /* Timer/Counter Interrupt Flag register */
#define TC16_GTCCR                _SFR_MEM8 (0x0043) /* General Timer/Counter Control Register */
#define TC16_TIMSK1               _SFR_MEM8 (0x006F) /* Timer/Counter Interrupt Mask Register */
#define TC16_TCCR1A               _SFR_MEM8 (0x0080) /* Timer/Counter 1 Control Register A */
#define TC16_TCCR1B               _SFR_MEM8 (0x0081) /* Timer/Counter1 Control Register B */
#define TC16_TCNT1                _SFR_MEM16(0x0084) /* Timer Counter 1  Bytes */
#define TC16_TCNT1L               _SFR_MEM8 (0x0084) /* Timer Counter 1  Bytes LOW BYTE */
#define TC16_TCNT1H               _SFR_MEM8 (0x0085) /* Timer Counter 1  Bytes HIGH BYTE */
#define TC16_OCR1A                _SFR_MEM8 (0x0088) /* Output Compare Register 1A */
#define TC16_OCR1B                _SFR_MEM8 (0x0089) /* Output Compare Register B */

/* TC0 - Timer/Counter, 16-bit (0x0000) */
/* TC16_BASE ALREADY DEFINED */
#define TC16_TIFR0                _SFR_MEM8 (0x0035) /* Timer/Counter Interrupt Flag register */
#define TC16_TCCR0A               _SFR_MEM8 (0x0044) /* Timer/Counter0 Control Register */
#define TC16_TCCR0B               _SFR_MEM8 (0x0045) /* Timer/Counter0 Control Register */
#define TC16_TCNT0                _SFR_MEM16(0x0046) /* Timer Counter 0  Bytes */
#define TC16_TCNT0L               _SFR_MEM8 (0x0046) /* Timer Counter 0  Bytes LOW BYTE */
#define TC16_TCNT0H               _SFR_MEM8 (0x0047) /* Timer Counter 0  Bytes HIGH BYTE */
#define TC16_OCR0A                _SFR_MEM8 (0x0048) /* Output compare Register A */
#define TC16_OCR0B                _SFR_MEM8 (0x0049) /* Output compare Register B */
#define TC16_TIMSK0               _SFR_MEM8 (0x006E) /* Timer/Counter Interrupt Mask Register */

/* COULOMB_COUNTER - Coulomb Counter (0x0000) */
#define COULOMB_COUNTER_BASE      _SFR_MEM8 (0x0000) /* COULOMB_COUNTER Base Address */
#define COULOMB_COUNTER_CADAC0    _SFR_MEM8 (0x00E0) /* ADC Accumulate Current */
#define COULOMB_COUNTER_CADAC1    _SFR_MEM8 (0x00E1) /* ADC Accumulate Current */
#define COULOMB_COUNTER_CADAC2    _SFR_MEM8 (0x00E2) /* ADC Accumulate Current */
#define COULOMB_COUNTER_CADAC3    _SFR_MEM8 (0x00E3) /* ADC Accumulate Current */
#define COULOMB_COUNTER_CADCSRA   _SFR_MEM8 (0x00E4) /* CC-ADC Control and Status Register A */
#define COULOMB_COUNTER_CADCSRB   _SFR_MEM8 (0x00E5) /* CC-ADC Control and Status Register B */
#define COULOMB_COUNTER_CADRC     _SFR_MEM8 (0x00E6) /* CC-ADC Regular Current */
#define COULOMB_COUNTER_CADIC     _SFR_MEM16(0x00E8) /* CC-ADC Instantaneous Current */
#define COULOMB_COUNTER_CADICL    _SFR_MEM8 (0x00E8) /* CC-ADC Instantaneous Current LOW BYTE */
#define COULOMB_COUNTER_CADICH    _SFR_MEM8 (0x00E9) /* CC-ADC Instantaneous Current HIGH BYTE */

/* VOLTAGE_REGULATOR - Voltage Regulator (0x0000) */
#define VOLTAGE_REGULATOR_BASE    _SFR_MEM8 (0x0000) /* VOLTAGE_REGULATOR Base Address */
#define VOLTAGE_REGULATOR_ROCR    _SFR_MEM8 (0x00C8) /* Regulator Operating Condition Register */

/* FUSE - Fuses (0x0000) */
#define FUSE_BASE                 _SFR_MEM8 (0x0000) /* FUSE Base Address */
#define FUSE_LOW                  _SFR_MEM8 (0x0000) 

/* LOCKBIT - Lockbits (0x0000) */
#define LOCKBIT_BASE              _SFR_MEM8 (0x0000) /* LOCKBIT Base Address */
#define LOCKBIT_LOCKBIT           _SFR_MEM8 (0x0000) 
/* avr-libc typedef for avr/fuse.h */
typedef FUSE_t NVM_FUSES_t;

/*
================================================================================
Interrupt Vector Definitions
================================================================================
*/

/* Vector 0 is the reset vector */
#define None_RESET_vect_num         (0)                 
#define None_RESET_vect             _VECTOR(0)          /* External Pin, Power-on Reset, Brown-out Reset and Watchdog Reset */
#define None_BPINT_vect_num         (1)                 
#define None_BPINT_vect             _VECTOR(1)          /* Battery Protection Interrupt */
#define None_VREGMON_vect_num       (2)                 
#define None_VREGMON_vect           _VECTOR(2)          /* Voltage regulator monitor interrupt */
#define None_INT0_vect_num          (3)                 
#define None_INT0_vect              _VECTOR(3)          /* External Interrupt Request 0 */
#define None_INT1_vect_num          (4)                 
#define None_INT1_vect              _VECTOR(4)          /* External Interrupt Request 1 */
#define None_INT2_vect_num          (5)                 
#define None_INT2_vect              _VECTOR(5)          /* External Interrupt Request 2 */
#define None_WDT_vect_num           (6)                 
#define None_WDT_vect               _VECTOR(6)          /* Watchdog Timeout Interrupt */
#define None_TIMER1_IC_vect_num     (7)                 
#define None_TIMER1_IC_vect         _VECTOR(7)          /* Timer 1 Input capture */
#define None_TIMER1_COMPA_vect_num  (8)                 
#define None_TIMER1_COMPA_vect      _VECTOR(8)          /* Timer 1 Compare Match A */
#define None_TIMER1_COMPB_vect_num  (9)                 
#define None_TIMER1_COMPB_vect      _VECTOR(9)          /* Timer 1 Compare Match B */
#define None_TIMER1_OVF_vect_num    (10)                
#define None_TIMER1_OVF_vect        _VECTOR(10)         /* Timer 1 overflow */
#define None_TIMER0_IC_vect_num     (11)                
#define None_TIMER0_IC_vect         _VECTOR(11)         /* Timer 0 Input Capture */
#define None_TIMER0_COMPA_vect_num  (12)                
#define None_TIMER0_COMPA_vect      _VECTOR(12)         /* Timer 0 Comapre Match A */
#define None_TIMER0_COMPB_vect_num  (13)                
#define None_TIMER0_COMPB_vect      _VECTOR(13)         /* Timer 0 Compare Match B */
#define None_TIMER0_OVF_vect_num    (14)                
#define None_TIMER0_OVF_vect        _VECTOR(14)         /* Timer 0 Overflow */
#define None_SPI_STC_vect_num       (15)                
#define None_SPI_STC_vect           _VECTOR(15)         /* SPI Serial transfer complete */
#define None_VADC_vect_num          (16)                
#define None_VADC_vect              _VECTOR(16)         /* Voltage ADC Conversion Complete */
#define None_CCADC_CONV_vect_num    (17)                
#define None_CCADC_CONV_vect        _VECTOR(17)         /* Coulomb Counter ADC Conversion Complete */
#define None_CCADC_REG_CUR_vect_num (18)                
#define None_CCADC_REG_CUR_vect     _VECTOR(18)         /* Coloumb Counter ADC Regular Current */
#define None_CCADC_ACC_vect_num     (19)                
#define None_CCADC_ACC_vect         _VECTOR(19)         /* Coloumb Counter ADC Accumulator */
#define None_EE_READY_vect_num      (20)                
#define None_EE_READY_vect          _VECTOR(20)         /* EEPROM Ready */

/* Vector Table Size */
#define _VECTOR_SIZE                (2)                 /* Size of individual vector. */
#define _VECTORS_SIZE               (21 * _VECTOR_SIZE) /* Size of all vectors */
/*
================================================================================
Constants
================================================================================
*/

#define PROGMEM_START   (0x0000)                           
#define PROGMEM_SIZE    (0x2000)                           
#define PROGMEM_END     (PROGMEM_START + PROGMEM_SIZE - 1) 

#define FLASH_START     (0x0000)                           
#define FLASH_SIZE      (0x2000)                           
#define FLASH_PAGE_SIZE (0x0080)                           
#define FLASH_END       (FLASH_START + FLASH_SIZE - 1)     

#define SIGNATURESMEM_START  (0x0000)                                       
#define SIGNATURESMEM_SIZE   (0x0003)                                       
#define SIGNATURESMEM_END    (SIGNATURESMEM_START + SIGNATURESMEM_SIZE - 1) 

#define SIGNATURES_START     (0x0000)                                       
#define SIGNATURES_SIZE      (0x0003)                                       
#define SIGNATURES_PAGE_SIZE (0x0001)                                       
#define SIGNATURES_END       (SIGNATURES_START + SIGNATURES_SIZE - 1)       

#define FUSESMEM_START  (0x0000)                             
#define FUSESMEM_SIZE   (0x0001)                             
#define FUSESMEM_END    (FUSESMEM_START + FUSESMEM_SIZE - 1) 

#define FUSES_START     (0x0000)                             
#define FUSES_SIZE      (0x0001)                             
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
#define DATAMEM_SIZE        (0x0300)                               
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
#define IRAM_SIZE           (0x0200)                               
#define IRAM_PAGE_SIZE      (0x0001)                               
#define IRAM_END            (IRAM_START + IRAM_SIZE - 1)           

#define EEPROMMEM_START         (0x0000)                               
#define EEPROMMEM_SIZE          (0x0100)                               
#define EEPROMMEM_END           (EEPROMMEM_START + EEPROMMEM_SIZE - 1) 

#define EEPROM_START            (0x0000)                               
#define EEPROM_SIZE             (0x0100)                               
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

/* ============ Port Bits ============ */

#define PORTC0 (0) 
#define PORTA0 (0) 
#define PORTA1 (1) 
#define PORTB0 (0) 
#define PORTB1 (1) 
#define PORTB2 (2) 
#define PORTB3 (3) 

/*
================================================================================
Fuses/LockBits/Signatures
================================================================================
*/

/* ============ Fuses ============ */

#define FUSE_MEMORY_SIZE 0 

/* Fuse offset 0x00 */
#define SUT0      (unsigned char)~_BV(0) /* Select start-up time bit 0 */
#define SUT1      (unsigned char)~_BV(1) /* Select start-up time bit 1 */
#define SUT2      (unsigned char)~_BV(2) /* Select start-up time bit 2 */
#define SELFPRGEN (unsigned char)~_BV(3) /* Self Programming enable */
#define DWEN      (unsigned char)~_BV(4) /* Debug Wire enable */
#define SPIEN     (unsigned char)~_BV(5) /* Serial program downloading (SPI) enabled */
#define EESAVE    (unsigned char)~_BV(6) /* Preserve EEPROM through the Chip Erase cycle */
#define WDTON     (unsigned char)~_BV(7) /* Watch-dog Timer always on */


/* ========== Lock Bits ========== */
#define __LOCK_BITS_EXIST  


/* ========== Signature ========== */
#define SIGNATURE_0 (0x1E) 
#define SIGNATURE_1 (0x93) 
#define SIGNATURE_2 (0x10) 

#endif /* #ifdef _AVR_ATmega8HVA_H_INCLUDED */
