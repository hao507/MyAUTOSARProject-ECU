/**
 * RTE Types Header File
 *
 * @req SWS_Rte_01161
 * @req SWS_Rte_01160
 */

#ifndef RTE_TYPE_H_
#define RTE_TYPE_H_

/** --- Includes ----------------------------------------------------------------------------------
 * @req SWS_Rte_01163
 */
#include <Rte.h>
#include <Rte_Type_Workarounds.h>

/* @req SWS_Rte_08732 */
typedef struct {
    uint16 clientId;
    uint16 sequenceCounter;
} Rte_Cs_TransactionHandleType;

#define ARRAY_SIZE_Dlt_ApplicationIDType (4u)
#define ARRAY_SIZE_Dlt_ContextIDType (4u)

/* Redefinition type AnalogValue */
typedef sint32 AnalogValue;

/* Redefinition type ComM_InhibitionStatusType */
typedef uint8 ComM_InhibitionStatusType;

/* Redefinition type ComM_ModeType */
typedef uint8 ComM_ModeType;

/* Redefinition type ComM_UserHandleType */
typedef uint8 ComM_UserHandleType;

/* Pointer type ConstVoidPtr */
typedef const void * ConstVoidPtr;

/* Redefinition type CounterType */
typedef uint32 CounterType;

/* Redefinition type Dcm_ConfirmationStatusType */
typedef uint8 Dcm_ConfirmationStatusType;

/* Redefinition type Dcm_NegativeResponseCodeType */
typedef uint8 Dcm_NegativeResponseCodeType;

/* Redefinition type Dcm_OpStatusType */
typedef uint8 Dcm_OpStatusType;

/* Redefinition type Dcm_ProtocolType */
typedef uint8 Dcm_ProtocolType;

/* Redefinition type Dcm_RoeStateType */
typedef uint8 Dcm_RoeStateType;

/* Redefinition type Dcm_SecLevelType */
typedef uint8 Dcm_SecLevelType;

/* Redefinition type Dcm_SesCtrlType */
typedef uint8 Dcm_SesCtrlType;

/* Redefinition type Dem_DTCFormatType */
typedef uint8 Dem_DTCFormatType;

/* Redefinition type Dem_DTCOriginType */
typedef uint8 Dem_DTCOriginType;

/* Redefinition type Dem_DTCStatusMaskType */
typedef uint8 Dem_DTCStatusMaskType;

/* Redefinition type Dem_EventIdType */
typedef uint16 Dem_EventIdType;

/* Redefinition type Dem_EventStatusExtendedType */
typedef uint8 Dem_EventStatusExtendedType;

/* Redefinition type Dem_EventStatusType */
typedef uint8 Dem_EventStatusType;

/* Redefinition type Dem_IndicatorStatusType */
typedef uint8 Dem_IndicatorStatusType;

/* Redefinition type Dem_InitMonitorReasonType */
typedef uint8 Dem_InitMonitorReasonType;

/* Redefinition type Dem_OperationCycleIdType */
typedef uint8 Dem_OperationCycleIdType;

/* Redefinition type Dem_OperationCycleStateType */
typedef uint8 Dem_OperationCycleStateType;

/* Redefinition type Dem_ReturnClearDTCType */
typedef uint8 Dem_ReturnClearDTCType;

/* Redefinition type DigitalLevel */
typedef uint8 DigitalLevel;

/* Array type Dlt_ApplicationIDType */
typedef uint8 Dlt_ApplicationIDType[ARRAY_SIZE_Dlt_ApplicationIDType];

/* Array type Dlt_ContextIDType */
typedef uint8 Dlt_ContextIDType[ARRAY_SIZE_Dlt_ContextIDType];

/* Redefinition type Dlt_MessageArgumentCount */
typedef uint16 Dlt_MessageArgumentCount;

/* Redefinition type Dlt_MessageIDType */
typedef uint32 Dlt_MessageIDType;

/* Redefinition type Dlt_MessageLogLevelType */
typedef uint8 Dlt_MessageLogLevelType;

/* Redefinition type Dlt_MessageOptionsType */
typedef uint8 Dlt_MessageOptionsType;

/* Redefinition type Dlt_MessageTraceType */
typedef uint8 Dlt_MessageTraceType;

/* Redefinition type Dlt_ReturnType */
typedef uint8 Dlt_ReturnType;

/* Redefinition type Dlt_SessionIDType */
typedef uint32 Dlt_SessionIDType;

/* Redefinition type DutyCycle */
typedef uint32 DutyCycle;

/* Redefinition type EcuM_BootTargetType */
typedef uint8 EcuM_BootTargetType;

/* Redefinition type EcuM_StateType */
typedef uint8 EcuM_StateType;

/* Redefinition type EcuM_UserType */
typedef uint8 EcuM_UserType;

/* Redefinition type Frequency */
typedef uint32 Frequency;

/* Redefinition type HTMSS_TestGroupType */
typedef uint8 HTMSS_TestGroupType;

/* Structure type HTMSS_TestResultType */
typedef struct _HTMSS_TestResultType_ HTMSS_TestResultType;
struct _HTMSS_TestResultType_ {
    uint8 TestResult;
    uint8 TestSignature;
};

/* Primitive type IntImpl */
typedef uint8 IntImpl;

/* Primitive type IntensityStatusImpl */
typedef float IntensityStatusImpl;

/* Redefinition type IoHwAb_SignalType_ */
typedef uint32 IoHwAb_SignalType_;

/* Primitive type LEDStatusImpl */
typedef boolean LEDStatusImpl;

/* Redefinition type NvM_BlockIdType */
typedef uint16 NvM_BlockIdType;

/* Redefinition type NvM_RequestResultType */
typedef uint8 NvM_RequestResultType;

/* Redefinition type SignalQuality */
typedef uint8 SignalQuality;

/* Redefinition type StbM_SynchronizedTimeBaseType */
typedef uint16 StbM_SynchronizedTimeBaseType;

/* Redefinition type StbM_TimeBaseStatusType */
typedef uint8 StbM_TimeBaseStatusType;

/* Structure type StbM_TimeStampExtendedType */
typedef struct _StbM_TimeStampExtendedType_ StbM_TimeStampExtendedType;
struct _StbM_TimeStampExtendedType_ {
    StbM_TimeBaseStatusType timeBaseStatus;
    uint32 nanoseconds;
    uint64 seconds;
};

/* Structure type StbM_TimeStampType */
typedef struct _StbM_TimeStampType_ StbM_TimeStampType;
struct _StbM_TimeStampType_ {
    StbM_TimeBaseStatusType timeBaseStatus;
    uint32 nanoseconds;
    uint32 seconds;
    uint16 secondsHi;
};

/* Structure type StbM_UserDataType */
typedef struct _StbM_UserDataType_ StbM_UserDataType;
struct _StbM_UserDataType_ {
    uint8 userDataLength;
    uint8 userByte0;
    uint8 userByte1;
    uint8 userByte2;
};

/* Primitive type SwitchStatusImpl */
typedef boolean SwitchStatusImpl;

/* Redefinition type TickType */
typedef uint32 TickType;

/* Pointer type VoidPtr */
typedef void * VoidPtr;

/* Redefinition type WdgM_CheckpointIdType */
typedef uint16 WdgM_CheckpointIdType;

/* Redefinition type WdgM_GlobalStatusType */
typedef uint8 WdgM_GlobalStatusType;

/* Redefinition type WdgM_LocalStatusType */
typedef uint8 WdgM_LocalStatusType;

/* Redefinition type WdgM_ModeType */
typedef uint8 WdgM_ModeType;

/* Redefinition type WdgM_SupervisedEntityIdType */
typedef uint16 WdgM_SupervisedEntityIdType;

/* Pointer type constUint16Ptr */
typedef const uint16 * constUint16Ptr;

/* Pointer type constUint32Ptr */
typedef const uint32 * constUint32Ptr;

/* Pointer type constUint8Ptr */
typedef const uint8 * constUint8Ptr;

/* Pointer type uint16Ptr */
typedef uint16 * uint16Ptr;

/* Pointer type uint32Ptr */
typedef uint32 * uint32Ptr;

/* Pointer type uint8Ptr */
typedef uint8 * uint8Ptr;

/* Structure type Dlt_MessageLogInfoType */
typedef struct _Dlt_MessageLogInfoType_ Dlt_MessageLogInfoType;
struct _Dlt_MessageLogInfoType_ {
    Dlt_MessageArgumentCount arg_count;
    Dlt_MessageLogLevelType log_level;
    Dlt_MessageOptionsType options;
    Dlt_ContextIDType context_id;
    Dlt_ApplicationIDType app_id;
};

/* Structure type Dlt_MessageTraceInfoType */
typedef struct _Dlt_MessageTraceInfoType_ Dlt_MessageTraceInfoType;
struct _Dlt_MessageTraceInfoType_ {
    Dlt_MessageTraceType trace_info;
    Dlt_MessageOptionsType options;
    Dlt_ContextIDType context;
    Dlt_ApplicationIDType app_id;
};

/* Redefinition type TickRefType */
typedef uint32Ptr TickRefType;

/* @req SWS_Rte_08560 */

typedef uint8 Rte_TransformerErrorCode; /* @req SWS_Rte_08545 */
typedef uint8 Rte_TransformerClass; /* @req SWS_Rte_08543 */

typedef struct {
    Rte_TransformerErrorCode errorCode;
    Rte_TransformerClass transformerClass;
} Rte_TransformerError;

#endif /* RTE_TYPE_H_ */
