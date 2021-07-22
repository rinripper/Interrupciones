/**
  PIN MANAGER Generated Driver File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the generated manager file for the PIC24 / dsPIC33 / PIC32MM MCUs device.  This manager
    configures the pins direction, initial state, analog setting.

  @Description:
    This source file provides implementations for PIN MANAGER.
    Generation Information :
        Product Revision  :  PIC24 / dsPIC33 / PIC32MM MCUs - 1.170.0
        Device            :  PIC24FJ128GA010
    The generated drivers are tested against the following:
        Compiler          :  XC16 v1.61
        MPLAB 	          :  MPLAB X v5.45
*/

/*
    (c) 2020 Microchip Technology Inc. and its subsidiaries. You may use this
    software and any derivatives exclusively with Microchip products.

    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
    WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
    PARTICULAR PURPOSE, OR ITS INTERACTION WITH MICROCHIP PRODUCTS, COMBINATION
    WITH ANY OTHER PRODUCTS, OR USE IN ANY APPLICATION.

    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
    BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
    FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
    ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
    THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.

    MICROCHIP PROVIDES THIS SOFTWARE CONDITIONALLY UPON YOUR ACCEPTANCE OF THESE
    TERMS.
*/

#ifndef _PIN_MANAGER_H
#define _PIN_MANAGER_H
/**
    Section: Includes
*/
#include <xc.h>

/**
    Section: Device Pin Macros
*/
/**
  @Summary
    Sets the GPIO pin, RE3, high using LATE3.

  @Description
    Sets the GPIO pin, RE3, high using LATE3.

  @Preconditions
    The RE3 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RE3 high (1)
    IO_LED_SetHigh();
    </code>

*/
#define IO_LED_SetHigh()          (_LATE3 = 1)
/**
  @Summary
    Sets the GPIO pin, RE3, low using LATE3.

  @Description
    Sets the GPIO pin, RE3, low using LATE3.

  @Preconditions
    The RE3 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Set RE3 low (0)
    IO_LED_SetLow();
    </code>

*/
#define IO_LED_SetLow()           (_LATE3 = 0)
/**
  @Summary
    Toggles the GPIO pin, RE3, using LATE3.

  @Description
    Toggles the GPIO pin, RE3, using LATE3.

  @Preconditions
    The RE3 must be set to an output.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Toggle RE3
    IO_LED_Toggle();
    </code>

*/
#define IO_LED_Toggle()           (_LATE3 ^= 1)
/**
  @Summary
    Reads the value of the GPIO pin, RE3.

  @Description
    Reads the value of the GPIO pin, RE3.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    uint16_t portValue;

    // Read RE3
    postValue = IO_LED_GetValue();
    </code>

*/
#define IO_LED_GetValue()         _RE3
/**
  @Summary
    Configures the GPIO pin, RE3, as an input.

  @Description
    Configures the GPIO pin, RE3, as an input.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RE3 as an input
    IO_LED_SetDigitalInput();
    </code>

*/
#define IO_LED_SetDigitalInput()  (_TRISE3 = 1)
/**
  @Summary
    Configures the GPIO pin, RE3, as an output.

  @Description
    Configures the GPIO pin, RE3, as an output.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    // Sets the RE3 as an output
    IO_LED_SetDigitalOutput();
    </code>

*/
#define IO_LED_SetDigitalOutput() (_TRISE3 = 0)

/**
    Section: Function Prototypes
*/
/**
  @Summary
    Configures the pin settings of the PIC24FJ128GA010

  @Description
    This is the generated manager file for the PIC24 / dsPIC33 / PIC32MM MCUs device.  This manager
    configures the pins direction, initial state, analog setting.

  @Preconditions
    None.

  @Returns
    None.

  @Param
    None.

  @Example
    <code>
    void SYSTEM_Initialize(void)
    {
        // Other initializers are called from this function
        PIN_MANAGER_Initialize();
    }
    </code>

*/
void PIN_MANAGER_Initialize (void);



#endif
