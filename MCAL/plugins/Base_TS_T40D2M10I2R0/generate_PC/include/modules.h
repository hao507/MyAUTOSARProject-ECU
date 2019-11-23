[!CODE!][!//
/**
*   @file    modules.h
*   @version 1.0.2
*
*   @brief   AUTOSAR Base - Project configuration.
*   @details Header file describing all Autosar MCAL modules present in the current project.
*
*   @addtogroup BASE_COMPONENT
*   @{
*/
/*==================================================================================================
*   Project              : AUTOSAR 4.2 MCAL
*   Platform             : ARM
*   Peripheral           : S32K14X
*   Dependencies         : none
*
*   Autosar Version      : 4.2.2
*   Autosar Revision     : ASR_REL_4_2_REV_0002
*   Autosar Conf.Variant :
*   SW Version           : 1.0.2
*   Build Version        : S32K14xS32K14X_MCAL_1_0_2_RTM_ASR_REL_4_2_REV_0002_20190426
*
*   (c) Copyright 2006-2016 Freescale Semiconductor, Inc. 
*       Copyright 2017-2019 NXP
*   All Rights Reserved.
==================================================================================================*/
/*==================================================================================================
==================================================================================================*/
/**
* @file        modules.h
*/
/** 
* @page misra_violations MISRA-C:2004 violations
*
* @section modules_h_REF_1
*          Violates MISRA 2004 Required Rule 19.15, Precautions shall be taken in order to
*          prevent the contents of a header file being included twice. All header files are
*          protected against multiple inclusions.
* @section [global]
*          Violates MISRA 2004 Required Rule 5.1, Identifiers (internal and external) shall not rely 
*          on the significance of more than 31 characters. The used compilers use more than 31 chars for
*          identifiers.
*/

#ifndef MODULES_H
#define MODULES_H

#ifdef __cplusplus
extern "C" {
#endif

/*==================================================================================================
*                                         INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
/** 
* @file        modules.h
* @brief Include Standard types & defines
*/
/* @violates @ref modules_h_REF_1 MISRA 2004 Required Rule 19.15, precautions to prevent the 
*   contents of a header file being included twice.*/
#include "Std_Types.h"

/*==================================================================================================
*                               SOURCE FILE VERSION INFORMATION
==================================================================================================*/

/** 
@{
* @brief Parameters that shall be published within the modules header file.
*       The integration of incompatible files shall be avoided.
*/
#define MODULES_VENDOR_ID                       43
#define MODULES_MODULE_ID                       0
#define MODULES_AR_RELEASE_MAJOR_VERSION_H      4
#define MODULES_AR_RELEASE_MINOR_VERSION_H      2
#define MODULES_AR_RELEASE_REVISION_VERSION_H   2
#define MODULES_SW_MAJOR_VERSION_H              1
#define MODULES_SW_MINOR_VERSION_H              0
#define MODULES_SW_PATCH_VERSION_H              2
/**@}*/
/*==================================================================================================
*                                      FILE VERSION CHECKS
==================================================================================================*/
#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
    /* Check if source file and Std_Types.h header file are of the same Autosar version */
    #if ((MODULES_AR_RELEASE_MAJOR_VERSION_H != STD_AR_RELEASE_MAJOR_VERSION) || \
         (MODULES_AR_RELEASE_MINOR_VERSION_H != STD_AR_RELEASE_MINOR_VERSION))
        #error "AutoSar Version Numbers of modules.h and Std_Types.h are different"
    #endif
#endif

/*==================================================================================================
*                                           CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                       DEFINES AND MACROS
==================================================================================================*/
/** 
* @brief This constant used for other modules to check if ADC is present in the project.  
*/
#define USE_ADC_MODULE              ([!IF "node:exists(as:modconf("Adc")[1])"!]STD_ON[!ELSE!]STD_OFF[!ENDIF!])

/** 
* @brief This constant used for other modules to check if CAN is present in the project.  
*/
#define USE_CAN_MODULE              ([!IF "node:exists(as:modconf("Can")[1])"!]STD_ON[!ELSE!]STD_OFF[!ENDIF!])

/** 
* @brief This constant used for other modules to check if CRCU is present in the project.  
*/
#define USE_CRCU_MODULE              ([!IF "node:exists(as:modconf("Crcu")[1])"!]STD_ON[!ELSE!]STD_OFF[!ENDIF!])

/** 
* @brief This constant used for other modules to check if CSEC is present in the project.  
*/
#define USE_CSEC_MODULE              ([!IF "node:exists(as:modconf("Csec")[1])"!]STD_ON[!ELSE!]STD_OFF[!ENDIF!])

/** 
* @brief This constant used for other modules to check if DIO is present in the project.  
*/
#define USE_DIO_MODULE              ([!IF "node:exists(as:modconf("Dio")[1])"!]STD_ON[!ELSE!]STD_OFF[!ENDIF!])

/** 
* @brief This constant used for other modules to check if ETH is present in the project.
*/
#define USE_ETH_MODULE              ([!IF "node:exists(as:modconf("Eth")[1])"!]STD_ON[!ELSE!]STD_OFF[!ENDIF!])

/** 
* @brief This constant used for other modules to check if EEP is present in the project.
*/
#define USE_EEP_MODULE              ([!IF "node:exists(as:modconf("Eep")[1])"!]STD_ON[!ELSE!]STD_OFF[!ENDIF!])

/** 
* @brief This constant used for other modules to check if FEE is present in the project.  
*/
#define USE_FEE_MODULE              ([!IF "node:exists(as:modconf("Fee")[1])"!]STD_ON[!ELSE!]STD_OFF[!ENDIF!])

/** 
* @brief This constant used for other modules to check if FLS is present in the project.  
*/
#define USE_FLS_MODULE              ([!IF "node:exists(as:modconf("Fls")[1])"!]STD_ON[!ELSE!]STD_OFF[!ENDIF!])

/** 
* @brief This constant used for other modules to check if Fr is present in the project.  
*/
#define USE_FR_MODULE              ([!IF "node:exists(as:modconf("Fr")[1])"!]STD_ON[!ELSE!]STD_OFF[!ENDIF!])

/** 
* @brief This constant used for other modules to check if GPT is present in the project.  
*/
#define USE_GPT_MODULE              ([!IF "node:exists(as:modconf("Gpt")[1])"!]STD_ON[!ELSE!]STD_OFF[!ENDIF!])

/** 
* @brief This constant used for other modules to check if ICU is present in the project.  
*/
#define USE_ICU_MODULE              ([!IF "node:exists(as:modconf("Icu")[1])"!]STD_ON[!ELSE!]STD_OFF[!ENDIF!])

/** 
* @brief This constant used for other modules to check if I2C is present in the project.  
*/
#define USE_I2C_MODULE              ([!IF "node:exists(as:modconf("I2c")[1])"!]STD_ON[!ELSE!]STD_OFF[!ENDIF!])

/** 
* @brief This constant used for other modules to check if LIN is present in the project.  
*/
#define USE_LIN_MODULE              ([!IF "node:exists(as:modconf("Lin")[1])"!]STD_ON[!ELSE!]STD_OFF[!ENDIF!])

/** 
* @brief This constant used for other modules to check if MCEM is present in the project.  
*/
#define USE_MCEM_MODULE              ([!IF "node:exists(as:modconf("Mcem")[1])"!]STD_ON[!ELSE!]STD_OFF[!ENDIF!])

/** 
* @brief This constant used for other modules to check if MCEM is present in the project.  
*/
#define USE_MCL_MODULE              ([!IF "node:exists(as:modconf("Mcl")[1])"!]STD_ON[!ELSE!]STD_OFF[!ENDIF!])

/** 
* @brief This constant used for other modules to check if MCU is present in the project.  
*/
#define USE_MCU_MODULE              ([!IF "node:exists(as:modconf("Mcu")[1])"!]STD_ON[!ELSE!]STD_OFF[!ENDIF!])

/** 
* @brief This constant used for other modules to check if OCU is present in the project.
*/
#define USE_OCU_MODULE             ([!IF "node:exists(as:modconf("Ocu")[1])"!]STD_ON[!ELSE!]STD_OFF[!ENDIF!])

/**
* @brief This constant used for other modules to check if PORT is present in the project.  
*/
#define USE_PORT_MODULE             ([!IF "node:exists(as:modconf("Port")[1])"!]STD_ON[!ELSE!]STD_OFF[!ENDIF!])

/** 
* @brief This constant used for other modules to check if PWM is present in the project.  
*/
#define USE_PWM_MODULE              ([!IF "node:exists(as:modconf("Pwm")[1])"!]STD_ON[!ELSE!]STD_OFF[!ENDIF!])

/** 
* @brief This constant used for other modules to check if SPI is present in the project.  
*/
#define USE_SPI_MODULE              ([!IF "node:exists(as:modconf("Spi")[1])"!]STD_ON[!ELSE!]STD_OFF[!ENDIF!])

/** 
* @brief This constant used for other modules to check if WDG is present in the project.  
*/
#define USE_WDG_MODULE              ([!IF "node:exists(as:modconf("Wdg")[1])"!]STD_ON[!ELSE!]STD_OFF[!ENDIF!])

/** 
* @brief This constant used for other modules to check if ISELED is present in the project.  
*/
#define USE_ISELED_MODULE              ([!IF "node:exists(as:modconf("Iseled")[1])"!]STD_ON[!ELSE!]STD_OFF[!ENDIF!])

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/

/*==================================================================================================
*                                 STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
*                                 GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                     FUNCTION PROTOTYPES
==================================================================================================*/


#ifdef __cplusplus
}
#endif

#endif /* MODULES_H */

/** @} */

[!ENDCODE!][!//

