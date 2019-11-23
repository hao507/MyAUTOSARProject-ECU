[!CODE!][!//
/**
*   @file    Dio_Cfg.c
*   @implements    Dio_Cfg.c_artifact
*   @version 1.0.2
*
*   @brief   AUTOSAR Dio precompile configuration code.
*   @details This file is the Autosar DIO driver precompile configuration
*            code. This file is automatically generated, do not modify manually.
*
*   @addtogroup DIO_CFG
*   @{
*/
/*=================================================================================================
*   Project              : AUTOSAR 4.2 MCAL
*   Platform             : ARM
*   Peripheral           : GPIO
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
=================================================================================================*/
/*=================================================================================================
=================================================================================================*/

/**
* @page misra_violations MISRA-C:2004 violations
*
* @section Dio_Cfg_C_REF_1
*          Violates MISRA 2004 Required Rule 1.4, The compiler/linker shall be
*          checked to ensure that 31 character significance and case sensitivity are supported
*          for external identifiers. 
*          The used compilers/linkers allow more than 31 characters significance for external identifiers.
*
* @section Dio_Cfg_C_REF_2
*          Violates MISRA 2004 Required Rule 19.15, Precautions shall be taken in order to 
*          prevent the contents of a header file being included twice. This violation is not fixed 
*          since the inclusion of MemMap.h is as per Autosar requirement MEMMAP003.
*
* @section Dio_Cfg_C_REF_3
*          Violates MISRA 2004 Advisory Rule 19.1, only preprocessor statements and comments 
*          before '#include'. MemMap.h is included after each section define in order to set 
*          the current memory section as defined by AUTOSAR.
*
* @section Dio_Cfg_C_REF_4
*          Violates MISRA 2004 Required Rule 8.10, All declarations and definitions of objects or 
*          functions at file scope shall have internal linkage unless external linkage is required.
*          This warning appears when defining functions or objects that will be used by the upper layers.
*
* @section [global]
*          Violates MISRA 2004 Required Rule 5.1, Identifiers (internal and external) shall not rely 
*          on the significance of more than 31 characters. The used compilers use more than 31 chars for
*          identifiers.
*/

#ifdef __cplusplus
extern "C" {
#endif

/*=================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
=================================================================================================*/

#include "Dio.h"

[!NOCODE!][!//
[!INCLUDE "Dio_VersionCheck_Src.m"!][!//
[!ENDNOCODE!][!//

#if (defined(DIO_PRECOMPILE_SUPPORT) || defined(DIO_LINKTIME_SUPPORT)) 
/*=================================================================================================
*                              SOURCE FILE VERSION INFORMATION
=================================================================================================*/

#define DIO_VENDOR_ID_CFG_C                   43
/** @violates @ref Dio_Cfg_C_REF_1 The used compilers use more than 31 chars for identifiers. */
#define DIO_AR_RELEASE_MAJOR_VERSION_CFG_C    4
/** @violates @ref Dio_Cfg_C_REF_1 The used compilers use more than 31 chars for identifiers. */
#define DIO_AR_RELEASE_MINOR_VERSION_CFG_C    2
/** @violates @ref Dio_Cfg_C_REF_1 The used compilers use more than 31 chars for identifiers. */
#define DIO_AR_RELEASE_REVISION_VERSION_CFG_C 2
#define DIO_SW_MAJOR_VERSION_CFG_C            1
#define DIO_SW_MINOR_VERSION_CFG_C            0
#define DIO_SW_PATCH_VERSION_CFG_C            2

/*=================================================================================================
*                                     FILE VERSION CHECKS
=================================================================================================*/


#if (((DIO_AR_RELEASE_MAJOR_VERSION_CFG_C != DIO_AR_RELEASE_MAJOR_VERSION)  ||  \
      (DIO_AR_RELEASE_MINOR_VERSION_CFG_C != DIO_AR_RELEASE_MINOR_VERSION)      \
     )                                                                      ||  \
      (DIO_AR_RELEASE_REVISION_VERSION_CFG_C != DIO_AR_RELEASE_REVISION_VERSION)\
    )
    #error "AutoSar Version Numbers of Dio_Cfg.c and Dio.h are different"
#endif
#if ((DIO_SW_MAJOR_VERSION_CFG_C != DIO_SW_MAJOR_VERSION) || \
     (DIO_SW_MINOR_VERSION_CFG_C != DIO_SW_MINOR_VERSION) || \
     (DIO_SW_PATCH_VERSION_CFG_C != DIO_SW_PATCH_VERSION)    \
    )
    #error "Software Version Numbers of Dio_Cfg.c and Dio.h are different"
#endif
#if ((DIO_VENDOR_ID_CFG_C != DIO_VENDOR_ID))
    #error "VENDOR ID for Dio_Cfg.c and Dio.h is different"
#endif

/*=================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
=================================================================================================*/


/*=================================================================================================
*                                       LOCAL MACROS
=================================================================================================*/


/*=================================================================================================
*                                      LOCAL CONSTANTS
=================================================================================================*/


/*=================================================================================================
*                                      LOCAL VARIABLES
=================================================================================================*/


/*=================================================================================================
*                                      GLOBAL CONSTANTS
=================================================================================================*/

#define DIO_START_SEC_CONFIG_DATA_UNSPECIFIED

/** @violates @ref Dio_Cfg_C_REF_2 MISRA 2004 Required Rule 19.15,
    Precautions to prevent the contents of a header file being included twice.*/
#include "Dio_MemMap.h"

/**
* @brief          Platform implemented port pins representation.
* @details        Array of bit maps reflecting the available pins in each port.
*                 The number of elements in the array corresponds to the number of
*                 ports implemented in the platform package. Rightmost bit of each
*                 array element corresponds to channel 0 of the associated port,
*                 while leftmost bit of each array element corresponds to channel 31
*                 of the associated port. A 0 bit means that the correspondent channel
*                 is not available in the platform package, while a bit of 1 means 
*                 that the correspondent channel is available in the platform package.
*
* @api
*/
[!VAR "NumPorts"="count(ecu:list('Dio.AvailablePortPinsForWrite'))"!][!//
/** @violates @ref Dio_Cfg_C_REF_4 This warning appears when defining functions or objects that will be used by the upper layers. */
CONST(Dio_PortLevelType, DIO_CONST) Dio_aAvailablePinsForWrite[DIO_NUM_PORTS_U16] = 
{
[!FOR "Loop" = "1" TO "$NumPorts"!][!//
    (Dio_PortLevelType)[!"ecu:list('Dio.AvailablePortPinsForWrite')[num:dectoint($Loop)]"!]UL[!//
[!IF "$Loop < $NumPorts "!],[!ENDIF!]
[!ENDFOR!][!//
};

[!VAR "NumPorts"="count(ecu:list('Dio.AvailablePortPinsForRead'))"!][!//
/** @violates @ref Dio_Cfg_C_REF_4 This warning appears when defining functions or objects that will be used by the upper layers. */
CONST(Dio_PortLevelType, DIO_CONST) Dio_aAvailablePinsForRead[DIO_NUM_PORTS_U16] = 
{
[!FOR "Loop" = "1" TO "$NumPorts"!][!//
    (Dio_PortLevelType)[!"ecu:list('Dio.AvailablePortPinsForRead')[num:dectoint($Loop)]"!]UL[!//
[!IF "$Loop < $NumPorts "!],[!ENDIF!]
[!ENDFOR!][!//
};

[!//
[!MACRO "reverse_bits"!][!//
[!NOCODE!]
    [!VAR "Orig_mask"="DioPortMask"!]
    [!VAR "Orig_offset"="DioPortOffset"!]
    [!IF "../../../../../DioGeneral/DioReversePortBits"!]
        [!VAR "Reversed_mask"="0"!]
        [!VAR "Found_1"="0"!]
        [!FOR "Loop" = "0" TO "31"!]
            [!VAR "crt_bit" = "bit:shr($Orig_mask,$Loop)"!]
            [!VAR "crt_bit"="bit:and($crt_bit, 1)"!]
            [!VAR "Reversed_mask"="bit:or($Reversed_mask,$crt_bit)"!]
            [!IF "$Loop != 31"!][!//
                [!VAR "Reversed_mask"="bit:shl($Reversed_mask, 1)"!]
            [!ENDIF!]
            [!IF "$Found_1=1 and $crt_bit=0"!]
                [!VAR "right_bits"="$Loop"!]
                [!VAR "Found_1"="0"!]
            [!ENDIF!]
            [!IF "$crt_bit = 1"!]
                [!VAR "Found_1"="1"!]
            [!ENDIF!][!//
        [!ENDFOR!]
    [!ELSE!]
        [!VAR "Reversed_mask"="DioPortMask"!]
    [!ENDIF!]
    [!VAR "Reversed_offset"="DioPortOffset"!]
[!ENDNOCODE!][!//
(uint8)[!"num:inttohex($Reversed_offset,2)"!], (Dio_PortLevelType)[!"num:inttohex($Reversed_mask,8)"!]UL}[!//
[!ENDMACRO!][!//

[!SELECT "DioConfig"!][!//
/* ========== [!"as:name(.)"!] ========== */

[!VAR "numChannelGroupsInConfig" = "count(DioPort/*/DioChannelGroup/*)"!][!//

/**
* @brief          Data structure for configuration [!"as:name(.)"!].
*/
/** @violates @ref Dio_Cfg_C_REF_4 This warning appears when defining functions or objects that will be used by the upper layers. */
CONST(Dio_ConfigType, DIO_CONST) [!"as:name(.)"!] = 
{
    (uint8)[!"num:inttohex($numChannelGroupsInConfig)"!],
    [!IF "$numChannelGroupsInConfig != 0"!][!/*
        */!]&[!"as:name(.)"!]_aChannelGroupList[0]
    [!ELSE!][!/*
        */!]NULL_PTR
    [!ENDIF!]
};

[!IF "$numChannelGroupsInConfig != 0"!][!//
/**
* @brief          List of channel groups in configuration [!"as:name(.)"!].
*/
/** @violates @ref Dio_Cfg_C_REF_4 This warning appears when defining functions or objects that will be used by the upper layers. */
CONST(Dio_ChannelGroupType, DIO_CONST) [!"as:name(.)"!]_aChannelGroupList[[!"num:dectoint($numChannelGroupsInConfig)"!]] = 
{
[!VAR "i" = "0"!][!//
[!LOOP "DioPort/*"!][!//
[!LOOP "DioChannelGroup/*"!][!//
    { DioConf_DioPort_[!"node:name(./../..)"!], [!CALL "reverse_bits"!][!//
[!VAR "i"="$i+1"!][!//
[!IF "$i != $numChannelGroupsInConfig"!],[!ENDIF!]
[!ENDLOOP!][!//
[!ENDLOOP!][!//

};
[!ENDIF!]
[!ENDSELECT!][!//


#define DIO_STOP_SEC_CONFIG_DATA_UNSPECIFIED

/** @violates @ref Dio_Cfg_C_REF_2 MISRA 2004 Required Rule 19.15,
    Precautions to prevent the contents of a header file being included twice.*/
/** @violates @ref Dio_Cfg_C_REF_3 MISRA 2004 Advisory Rule 19.1,
    Only preprocessor statements and comments before '#include'.*/
#include "Dio_MemMap.h"

/*=================================================================================================
*                                      GLOBAL VARIABLES
=================================================================================================*/


/*=================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
=================================================================================================*/


/*=================================================================================================
*                                       LOCAL FUNCTIONS
=================================================================================================*/


/*=================================================================================================
*                                       GLOBAL FUNCTIONS
=================================================================================================*/


#endif /* (defined(DIO_PRECOMPILE_SUPPORT) || defined(DIO_LINKTIME_SUPPORT)) */

#ifdef __cplusplus
}
#endif

/** @} */
[!ENDCODE!][!//
