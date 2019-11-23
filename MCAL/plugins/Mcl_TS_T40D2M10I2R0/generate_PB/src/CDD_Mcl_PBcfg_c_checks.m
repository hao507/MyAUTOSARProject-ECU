[!NOCODE!][!//
/**
  @file    CDD_Mcl_PBcfg_c_checks.m
  @version 1.0.2

  @brief   AUTOSAR Mcl - version check macro.
  @details Version checks.
  
  Project AUTOSAR 4.2 MCAL
  Patform ARM
  Peripheral eDMA
  Dependencies none
  
  ARVersion 4.2.2
  ARRevision ASR_REL_4_2_REV_0002
  ARConfVariant
  SWVersion 1.0.2
  BuildVersion S32K14xS32K14X_MCAL_1_0_2_RTM_ASR_REL_4_2_REV_0002_20190426

  c) Copyright 2006-2016 Freescale Semiconductor, Inc. 
*       Copyright 2017-2019 NXP
  All Rights Reserved.
*/
/*==================================================================================================

[!VAR "MclSwMajorVersionTemplate"="1"!][!//     
[!VAR "MclSwMinorVersionTemplate"="0"!][!//     

[!ENDNOCODE!][!//
[!SELECT "CommonPublishedInformation"!][!//
    [!IF "not(num:i(SwMajorVersion) = num:i($MclSwMajorVersionTemplate))"!]
        [!ERROR!]
            "The software major number of the Basic Software Module Description file (Mcl.epd version [!"SwMajorVersion"!]) and the Code template file (CDD_Mcl_PBcfg.c version [!"num:i($MclSwMajorVersionTemplate)"!]) are different"
        [!ENDERROR!]
    [!ENDIF!][!//
    [!IF "not(num:i(SwMinorVersion) = num:i($MclSwMinorVersionTemplate))"!]
        [!ERROR!]
            "The software minor number of the Basic Software Module Description file (Mcl.epd version [!"SwMinorVersion"!]) and the Code template file (CDD_Mcl_PBcfg.c version [!"num:i($MclSwMinorVersionTemplate)"!]) are different"
        [!ENDERROR!]
    [!ENDIF!][!//
[!ENDSELECT!][!//
[!NOCODE!][!//

[!ENDNOCODE!][!//
