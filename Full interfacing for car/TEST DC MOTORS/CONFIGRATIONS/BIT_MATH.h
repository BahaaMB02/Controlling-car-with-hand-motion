/*
 * BIT_MATH.h
 *
 * Created: 6/10/2022 10:55:22 AM
 *  Author: karim
 */ 


#ifndef BIT_MATH_H_
#define BIT_MATH_H_

#define SET_BIT(REG,BIT)   (REG|=(1<<BIT))    // Set value of bit by logic 1
#define CLR_BIT(REG,BIT)   (REG&=~(1<<BIT))   // Set value of bit by logic 0
#define TGL_BIT(REG,BIT)   (REG^=(1<<BIT))    // Not Gate for value (1 -> 0)
#define GET_BIT(REG,BIT)   ((REG>>BIT)&0x01)  // read value of bit




















#endif /* BIT_MATH_H_ */