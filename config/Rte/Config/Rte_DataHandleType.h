/**
 * Data Handle Types Header File
 *
 * @req SWS_Rte_07920
 * @req SWS_Rte_07921
 * @req SWS_Rte_07922
 * @req SWS_Rte_07923
 * @req SWS_Rte_07136
 */

#ifndef RTE_DATAHANDLETYPE_H_
#define RTE_DATAHANDLETYPE_H_

#include <Rte_Type.h>

/** --- Data Element without Status ---------------------------------------------------------------
 *  @req SWS_Rte_01363
 *  @req SWS_Rte_01364
 *  @req SWS_Rte_02607
 */
typedef struct {
    IntensityStatusImpl value;
} Rte_DE_IntensityStatusImpl;
typedef struct {
    LEDStatusImpl value;
} Rte_DE_LEDStatusImpl;
typedef struct {
    IntImpl value;
} Rte_DE_IntImpl;
typedef struct {
    SwitchStatusImpl value;
} Rte_DE_SwitchStatusImpl;

/** --- Data Element with Status ------------------------------------------------------------------
 *  @req SWS_Rte_01365
 *  @req SWS_Rte_01366
 *  @req SWS_Rte_03734
 *  @req SWS_Rte_02666
 *  @req SWS_Rte_02589
 *  @req SWS_Rte_02590
 *  @req SWS_Rte_02609
 *  @req SWS_Rte_03836
 */

#endif /* RTE_DATAHANDLETYPE_H_ */
