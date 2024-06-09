#ifndef _BIT_MANIPULATION_MACROS_
#define _BIT_MANIPULATION_MACROS_

#include "AtMega328P_registers.h"

#define BIT_IS_SET(register, bit) (READ_8BIT(register) & (1 << bit))

#endif /*_BIT_MANIPULATION_MACROS_*/