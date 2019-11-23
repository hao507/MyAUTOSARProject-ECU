/**
 * Application Types Header File
 *
 * @req SWS_Rte_07122
 */

/** === HEADER ====================================================================================
 */

#ifndef RTE_INTCONTROLLER_TYPE_H_
#define RTE_INTCONTROLLER_TYPE_H_

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

/** --- Includes ----------------------------------------------------------------------------------
 * @req SWS_Rte_07127
 */
#include <Rte_Type.h>

/** === BODY ====================================================================================
 */

/** --- ENUMERATION DATA TYPES ------------------------------------------------------------------ */

/** Enum literals for SignalQuality */
#ifndef IOHWAB_INIVAL
#define IOHWAB_INIVAL 0U
#endif /* IOHWAB_INIVAL */

#ifndef IOHWAB_ERR
#define IOHWAB_ERR 1U
#endif /* IOHWAB_ERR */

#ifndef IOHWAB_BAD
#define IOHWAB_BAD 2U
#endif /* IOHWAB_BAD */

#ifndef IOHWAB_GOOD
#define IOHWAB_GOOD 3U
#endif /* IOHWAB_GOOD */

/** --- MODE TYPES ------------------------------------------------------------------------------ */

/** === FOOTER ====================================================================================
 */

/** @req SWS_Rte_07126 */
#ifdef __cplusplus
} /* extern "C" */
#endif /* __cplusplus */

#endif /* RTE_INTCONTROLLER_TYPE_H_ */
