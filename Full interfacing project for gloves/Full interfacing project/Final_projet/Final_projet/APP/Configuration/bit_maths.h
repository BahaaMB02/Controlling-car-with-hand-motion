/*
 * bit_maths.h
 *
 * Created: 8/27/2022 9:56:14 PM
 *  Author: abdala abdelatif
 */ 


#ifndef BIT_MATHS_H_
#define BIT_MATHS_H_

#define Set_Bit(Reg,Bit) (Reg|=(1<<Bit))
#define Clr_Bit(Reg,Bit) (Reg&=~(1<<Bit))
#define Tgl_Bit(Reg,Bit) (Reg^=(1<<Bit))
#define GET_BIT(REG,BIT)   ((REG>>BIT)&0x01)



#endif /* BIT_MATHS_H_ */