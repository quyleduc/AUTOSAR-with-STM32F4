/**
 * @file Std_Types.h
 * @author ldquy (ducquy.le0610@gmail.com)
 * @brief 
 * @version 1.0.0
 * @invariant  AUTOSAR Standard Release : R20-11 
 * @date 2021-11-28
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef STD_TYPES_H_
#define STD_TYPES_H_

#include "Platform_Types.h"
#include "Compiler.h"

/*******************
 * [SWS_STD_00005] *
 * @brief This type can be used as standard API return type which is shared between the RTE 
 * and the BSW modules. It shall be defined as follows: 
 * typedef uint8 Std_ReturnType;
 *******************/
typedef uint8 Std_ReturnType;

#define E_OK 				0x00u
#define E_NOT_OK			0x01u

#define STD_HIGH 			0x01u
#define STD_LOW 			0x00u

#define STD_ACTIVE 			0x01u
#define STD_IDLE 			0x00u

#define STD_ON 				0x01u
#define STD_OFF 			0x00u

typedef struct
{
	uint16 	vendorID;
	uint16 	moduleID;
	uint8 	sw_major_version;
	uint8 	sw_minor_version;
	uint8 	sw_patch_version;

}Std_VersionInfoType;



#endif /* STD_TYPES_H_ */
