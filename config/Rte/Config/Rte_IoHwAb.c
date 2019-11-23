/** === HEADER ====================================================================================
 */

#include <Rte.h>

#include <Os.h>
#if ((OS_AR_RELEASE_MAJOR_VERSION != RTE_AR_RELEASE_MAJOR_VERSION) || (OS_AR_RELEASE_MINOR_VERSION != RTE_AR_RELEASE_MINOR_VERSION))
#error Os version mismatch
#endif

#include <Com.h>
#if ((COM_AR_RELEASE_MAJOR_VERSION != RTE_AR_RELEASE_MAJOR_VERSION) || (COM_AR_RELEASE_MINOR_VERSION != RTE_AR_RELEASE_MINOR_VERSION))
#error Com version mismatch
#endif

#include <Rte_Hook.h>
#include <Rte_Internal.h>
#include <Rte_Calprms.h>

#include "Rte_IoHwAb.h"

/** === Runnable Prototypes =======================================================================
 */

/** ------ IoHwAbInstance -----------------------------------------------------------------------
 */
Std_ReturnType Rte_IoHwAbInstance_AnalogRead(/*IN*/IoHwAb_SignalType_ portDefArg1, /*OUT*/AnalogValue * Value, /*OUT*/SignalQuality * Quality); /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required] */
Std_ReturnType Rte_IoHwAbInstance_DigitalRead(/*IN*/IoHwAb_SignalType_ portDefArg1, /*OUT*/DigitalLevel * Level, /*OUT*/SignalQuality * Quality); /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required] */
Std_ReturnType Rte_IoHwAbInstance_DigitalWrite(/*IN*/IoHwAb_SignalType_ portDefArg1, /*IN*/DigitalLevel Level); /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required] */
Std_ReturnType Rte_IoHwAbInstance_PwmSetDuty(/*IN*/IoHwAb_SignalType_ portDefArg1, /*IN*/DutyCycle DutyValue, /*OUT*/SignalQuality * Quality); /*lint -e621 MISRA:OTHER:Ignore misidentified symbol clash [MISRA 2012 Rule 5.5, required] */

/** === Inter-Runnable Variable Buffers ===========================================================
 */

/** === Inter-Runnable Variable Functions =========================================================
 */

/** === Implicit Buffer Instances =================================================================
 */
/*lint -e765 AUTOSAR API SWS_MemMap_00003 */

/** === Per Instance Memories =====================================================================
 */

/** === Component Data Structure Instances ========================================================
 */
#define IoHwAb_START_SEC_CONST_UNSPECIFIED
#include <IoHwAb_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
const Rte_CDS_IoHwAb IoHwAb_IoHwAbInstance = {
    ._dummy = 0
}; /*!e9003 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
#define IoHwAb_STOP_SEC_CONST_UNSPECIFIED
#include <IoHwAb_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

#define IoHwAb_START_SEC_CONST_UNSPECIFIED
#include <IoHwAb_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
const Rte_Instance Rte_Inst_IoHwAb = &IoHwAb_IoHwAbInstance;
/*!e9003 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
#define IoHwAb_STOP_SEC_CONST_UNSPECIFIED
#include <IoHwAb_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

/** === Runnables =================================================================================
 */

/** ------ IoHwAbInstance -----------------------------------------------------------------------
 */

#define IoHwAb_START_SEC_CODE
#include <IoHwAb_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
Std_ReturnType Rte_IoHwAbInstance_AnalogRead(/*IN*/IoHwAb_SignalType_ portDefArg1, /*OUT*/AnalogValue * Value, /*OUT*/SignalQuality * Quality) {
    Std_ReturnType retVal;

    /* PRE */

    /* MAIN */

    retVal = IoHwAb_Analog_Read(portDefArg1, Value, Quality);

    /* POST */

    return retVal;
} /*!e9003 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
#define IoHwAb_STOP_SEC_CODE
#include <IoHwAb_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

#define IoHwAb_START_SEC_CODE
#include <IoHwAb_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
Std_ReturnType Rte_IoHwAbInstance_DigitalRead(/*IN*/IoHwAb_SignalType_ portDefArg1, /*OUT*/DigitalLevel * Level, /*OUT*/SignalQuality * Quality) {
    Std_ReturnType retVal;

    /* PRE */

    /* MAIN */

    retVal = IoHwAb_Digital_Read(portDefArg1, Level, Quality);

    /* POST */

    return retVal;
} /*!e9003 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
#define IoHwAb_STOP_SEC_CODE
#include <IoHwAb_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

#define IoHwAb_START_SEC_CODE
#include <IoHwAb_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
Std_ReturnType Rte_IoHwAbInstance_DigitalWrite(/*IN*/IoHwAb_SignalType_ portDefArg1, /*IN*/DigitalLevel Level) {
    Std_ReturnType retVal;

    /* PRE */

    /* MAIN */

    retVal = IoHwAb_Digital_Write(portDefArg1, Level);

    /* POST */

    return retVal;
} /*!e9003 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
#define IoHwAb_STOP_SEC_CODE
#include <IoHwAb_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */

#define IoHwAb_START_SEC_CODE
#include <IoHwAb_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
Std_ReturnType Rte_IoHwAbInstance_PwmSetDuty(/*IN*/IoHwAb_SignalType_ portDefArg1, /*IN*/DutyCycle DutyValue, /*OUT*/SignalQuality * Quality) {
    Std_ReturnType retVal;

    /* PRE */

    /* MAIN */

    retVal = IoHwAb_Pwm_Set_Duty(portDefArg1, DutyValue, Quality);

    /* POST */

    return retVal;
} /*!e9003 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */
#define IoHwAb_STOP_SEC_CODE
#include <IoHwAb_MemMap.h> /*lint !e415 Autosar specified way to group code into memory sections, Req SWS_MemMap_00003 */   

