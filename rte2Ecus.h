/*
 * rte2Ecus.h
 *
 *  Created on: Apr 5, 2020
 *      Author: LENOVO.SXM1
 */

#ifndef RTE2ECUS_H_
#define RTE2ECUS_H_

# define DOOR_OPEN 0
# define DOOR_CLOSED 1
# define LIGHT_ON	0
# define LIGHT_OFF 1

E_status Rte_RightDoorInit(void);
E_status Rte_LeftDoorInit(void);
E_status Rte_LampInit(void);
E_status Rte_write_RightDoorStatus(u8 Data);
E_status Rte_write_LeftDoorStatus(u8 Data);
E_status Rte_Read_RightDoorStatus(u8 *Data);
E_status Rte_Read_LeftDoorStatus(u8 *Data);
E_status Rte_Read_DoorsStatus(u8 *Data);
E_status Rte_Write_LampStatus(u8 Data);
E_status Rte_Read_LampStatus(u8 *Data);
E_status Rte_Call_RightDoorGetStatus(u8* val);
E_status Rte_Call_LeftDoorGetStatus(u8* val);
E_status Rte_Call_LampON();
E_status Rte_Call_LampOFF();

#endif /* RTE2ECUS_H_ */
