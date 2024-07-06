/*
 * Utils.h
 *
 * Created: 7/4/2024 3:33:30 PM
 *  Author: Manal Nabil
 */ 


#ifndef UTILS_H_
#define UTILS_H_

#define SetBit(reg,bit)    (reg = reg|(1<<bit))

#define ClearBit(reg,bit)  (reg = reg&~(1<<bit))

#define ReadBit(reg,bit)   ((reg>>bit)&1)

#define ToggelBit(reg,bit) (reg = reg^(1<<bit))


#endif /* UTILS_H_ */