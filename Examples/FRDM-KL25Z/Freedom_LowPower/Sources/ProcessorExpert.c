/* ###################################################################
**     Filename    : ProcessorExpert.c
**     Project     : ProcessorExpert
**     Processor   : MKL25Z128VLK4
**     Version     : Driver 01.01
**     Compiler    : GNU C Compiler
**     Date/Time   : 2013-05-02, 19:41, # CodeGen: 0
**     Abstract    :
**         Main module.
**         This module contains user's application code.
**     Settings    :
**     Contents    :
**         No public methods
**
** ###################################################################*/
/*!
** @file ProcessorExpert.c
** @version 01.01
** @date 2013-05-02, 19:41, # CodeGen: 0
** @brief
**         Main module.
**         This module contains user's application code.
*/         
/*!
**  @addtogroup ProcessorExpert_module ProcessorExpert module documentation
**  @{
*/         
/* MODULE ProcessorExpert */


/* Including needed modules to compile this module/procedure */
#include "Cpu.h"
#include "Events.h"
#include "WAIT1.h"
#include "LED1.h"
#include "LEDpin2.h"
#include "BitIoLdd2.h"
#include "LED2.h"
#include "LEDpin3.h"
#include "BitIoLdd3.h"
#include "LED3.h"
#include "LEDpin4.h"
#include "BitIoLdd4.h"
#include "AS1.h"
#include "ASerialLdd1.h"
#include "CLS1.h"
#include "UTIL1.h"
#include "FRTOS1.h"
#include "CS1.h"
/* Including shared modules, which are used for whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"

/* User includes (#include below this line is not maintained by Processor Expert) */
#include "Platform.h"
#include "Shell.h"
#include "LowPower.h"

/*lint -save  -e970 Disable MISRA rule (6.3) checking. */
int main(void)
/*lint -restore Enable MISRA rule (6.3) checking. */
{
  /* Write your local variable definition here */

  /*** Processor Expert internal initialization. DON'T REMOVE THIS CODE!!! ***/
  PE_low_level_init();
  /*** End of Processor Expert internal initialization.                    ***/
  LED2_On();
  WAIT1_Waitms(1000);
  LED2_Off();
  
#if PL_HAS_LOW_POWER
  LP_Init();
#endif
#if PL_HAS_SHELL
  SHELL_Init();
#endif
#if PL_HAS_RTOS
  PEX_RTOS_START();
#endif
  for(;;) {
    LP_EnterPowerMode(LP_WAIT);
    LED1_On();
    WAIT1_Waitms(20);
    LED1_Off();
  }

  /* For example: for(;;) { } */

  /*** Don't write any code pass this line, or it will be deleted during code generation. ***/
  /*** RTOS startup code. Macro PEX_RTOS_START is defined by the RTOS component. DON'T MODIFY THIS CODE!!! ***/
  #ifdef PEX_RTOS_START
    PEX_RTOS_START();                  /* Startup of the selected RTOS. Macro is defined by the RTOS component. */
  #endif
  /*** End of RTOS startup code.  ***/
  /*** Processor Expert end of main routine. DON'T MODIFY THIS CODE!!! ***/
  for(;;){}
  /*** Processor Expert end of main routine. DON'T WRITE CODE BELOW!!! ***/
} /*** End of main routine. DO NOT MODIFY THIS TEXT!!! ***/

/* END ProcessorExpert */
/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.0.12 [05.05]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
