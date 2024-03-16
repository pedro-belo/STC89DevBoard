#ifndef __DEFS__

#define __DEFS__

typedef unsigned short u16;
typedef unsigned char u8;

#define D8(label, addr) __sfr __at(addr) label
#define D1(label, addr) __sbit __at(addr) label

#endif 