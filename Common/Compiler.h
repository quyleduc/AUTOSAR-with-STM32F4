/**
 * @file    Compiler.h
 * @version 1.0.0
 * @invariant  AUTOSAR Standard Release : R20-11 
 * @author ldquy (ducquy.le0610@gmail.com)
 * @brief AUTOSAR - SWS Compiler Abstraction 
 * @details
 *      This document specifies macros for the abstraction of compiler specifies keywords
 *      used for addressing data and code within declaration and definitions
 *      - Compiler provides macros for the encapsulation of definitions and declarations
 *      - Each single module has to distinguish between at least the following different
 *      memory classes and pointer classes. Each of these classes is represented by
 *      a define (e.g EEP_CODE)
 *      - The file Compiler_Cfg.h allows to configure these defines with the appropriate
 *      compiler specific keywords according to the modules description and memory
 *      set-up of the build scenario
 * @date 2021-11-28
 */

#ifndef COMPILER_H_
#define COMPILER_H_

#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
* 1) Project include 
==================================================================================================*/

#include "Compiler_Cfg.h"


// COMPILER030
#define COMPILER_VENDOR_ID 					(0x001B) // For STMikro compiler (https://www.autosar.org/about/vendorid/)

/*Definitions
 * memory class AUTOMATIC 	- Shall be provided as empty definition used for the declaration of local pointer
 * memory class TYPEDEF 	- Shall be provided as empty definition.
 * STATIC                   - Shall be provided the static define for abstraction of compiler keyword static
 * NULL_PTR                 - Define with void pointer to zero definition
 * INLINE                   - Define for abstraction of the keyword inline
 * 
*/

#define AUTOMATIC 
#define TYPEDEF
#define STATIC
#define NULL_PTR ((void *)0)
#define	INLINE 			inline
#define LOCAL_INLINE	static inline


#define FUNC(rettype, memclass) rettype                     // macro for the declaration and definition of functions

#define FUNC_P2CONST(rettype, ptrclass, memclass) const rettype *  // macro for the declaration adn definition of functions returning a pointer to a constant

#define FUNC_P2VAR(rettype, ptrclass, memclass) rettype *

/**
 * @todo Need to be analyze and add fullfill the macro for Compiler.h
 * @brief Lack of macro
 * - P2VAR
 * - CONSTP2VAR
 * - CONSTP2CONST
 * - P2FUNC
 * - P2CONST
 * - CONSTP2FUNC
 * - 
 * 
 */

#define VAR (vartype, memclass) vartype

#define CONST(consttype, memclass) const type



#ifdef __cplusplus
}
#endif

#endif /* COMPILER_H_ */
