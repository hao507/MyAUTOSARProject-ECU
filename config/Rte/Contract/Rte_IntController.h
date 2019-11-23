/**
 * Application Header File
 *
 * @req SWS_Rte_01003
 */

/** === HEADER ====================================================================================
 */
/*lint -e18 -e452 LINT:OTHER:Duplicate declarations hidden behind ifdef */

/** --- Normal include guard ----------------------------------------------------------------------
 */
#ifndef RTE_INTCONTROLLER_H_
#define RTE_INTCONTROLLER_H_

/** --- C++ guard ---------------------------------------------------------------------------------
 * @req SWS_Rte_03709
 */
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/** --- Duplicate application include guard -------------------------------------------------------
 * @req SWS_Rte_01006
 */
#ifdef RTE_APPLICATION_HEADER_FILE
#error Multiple application header files included.
#endif
#define RTE_APPLICATION_HEADER_FILE

/** --- Single runnable API -----------------------------------------------------------------------
 * @req SWS_Rte_02751
 */
#if defined(RTE_RUNNABLEAPI_IntControllerMain)
#define RTE_RUNNABLEAPI
#endif

/** --- Includes ----------------------------------------------------------------------------------
 * @req SWS_Rte_02751
 * @req SWS_Rte_07131
 */
#include <Rte_DataHandleType.h>
#include <Rte_IntController_Type.h>

/** --- Application Errors ------------------------------------------------------------------------
 * @req SWS_Rte_02575
 * @req SWS_Rte_02576
 * @req SWS_Rte_07143
 */
#define RTE_E_PwmServiceSetDuty_E_NOT_OK 1U
#define RTE_E_PwmServiceSetDuty_E_OK 0U

/** --- Initial Values ----------------------------------------------------------------------------
 * @SWS_Rte_05078
 */

/** --- PIM DATA TYPES ------------------------------------------------------------------------------ */

/** --- Condition Value Macros -------------------------------------------------------
 * @req SWS_Rte_03854
 */

/** === BODY ======================================================================================
 */

/** @req SWS_Rte_03731
 *  @req SWS_Rte_07137
 *  @req SWS_Rte_07138
 *  !req SWS_Rte_06523
 *  @req SWS_Rte_03730
 *  @req SWS_Rte_07677
 *  @req SWS_Rte_02620
 *  @req SWS_Rte_02621
 *  @req SWS_Rte_01055
 *  @req SWS_Rte_03726 */

/** @req SWS_Rte_01343
 *  @req SWS_Rte_01342
 *  !req SWS_Rte_06524
 *  @req SWS_Rte_01053
 */

extern Std_ReturnType Rte_Call_IntController_RedLiIntControllerInstance_DutySignal_Set(/*IN*/DutyCycle DutyValue, /*OUT*/SignalQuality * Quality);

/** @req SWS_Rte_07132
 *  @req SWS_Rte_03714 
 *  @req SWS_Rte_03725 
 *  @req SWS_Rte_03752
 *  @req SWS_Rte_02623
 */
typedef struct {
    Rte_DE_IntensityStatusImpl * const IntControllerMain_IntSts_status;
} Rte_CDS_IntController;

/** --- Instance handle type ---------------------------------------------------------------------- */
typedef Rte_CDS_IntController const * const Rte_Instance;

/** --- Singleton instance handle -----------------------------------------------------------------
 *  @req SWS_Rte_03793
 */
extern const Rte_Instance Rte_Inst_IntController;
#define self (Rte_Inst_IntController)

/** --- Calibration API --------------------------------------------------------------------------- */

/** --- Per Instance Memory API ------------------------------------------------------------------- */

/** --- Indirect port API ------------------------------------------------------------------------- */

/** --- Single Runnable APIs ---------------------------------------------------------------------- */
#if defined(RTE_RUNNABLEAPI)
/** --- IntControllerMain */
#if defined(RTE_RUNNABLEAPI_IntControllerMain)

void IntControllerMain(void);

static inline IntensityStatusImpl Rte_IRead_IntControllerMain_IntSts_status(void) {
    return self->IntControllerMain_IntSts_status->value;
}

static inline Std_ReturnType Rte_Call_DutySignal_Set(/*IN*/DutyCycle DutyValue, /*OUT*/SignalQuality * Quality) {
    return Rte_Call_IntController_RedLiIntControllerInstance_DutySignal_Set(DutyValue, Quality);
}

#endif
#endif

/** --- All Runnable APIs ------------------------------------------------------------------------- */
#if !defined(RTE_RUNNABLEAPI)
void IntControllerMain(void);

static inline IntensityStatusImpl Rte_IRead_IntControllerMain_IntSts_status(void) {
    return self->IntControllerMain_IntSts_status->value;
}

static inline Std_ReturnType Rte_Call_DutySignal_Set(/*IN*/DutyCycle DutyValue, /*OUT*/SignalQuality * Quality) {
    return Rte_Call_IntController_RedLiIntControllerInstance_DutySignal_Set(DutyValue, Quality);
}
#endif

/** === FOOTER ====================================================================================
 */

/** @req SWS_Rte_03710 */
#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */

#endif /* RTE_INTCONTROLLER_H_ */
