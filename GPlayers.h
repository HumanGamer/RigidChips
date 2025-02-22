#ifndef G_GPLAYERS_H
#define G_GPLAYERS_H
#include "GRigid.hpp"
#define GRECEIVEMAX 513
typedef struct {
	short		code;
	BYTE		data[256];
} GSTREAM;
typedef struct {
	short		code;
	GCHIPDATA	data[GRECEIVEMAX*2];
} GCHIPSTREAM;


typedef struct {
	MYAPP_PLAYER_INFO info;
	DWORD	size;
	GCHIPDATA	data[GRECEIVEMAX*2];
} GRECEIVEDATA;

typedef struct {
	GVector_32 Pos;
	GVector_32 Vec;
	GFloat_32 Power;
	GFloat_32 Size;
	GVector_32 Tar;
	GFloat_32 Dist;
	DWORD dpnid;
} GBULLETDATA;
#define GBULLETDATAMAX 100
typedef struct {
	short		code;
	GBULLETDATA	data[GBULLETDATAMAX];
} GBULLESTREAM;

typedef struct {
	int Type;
	GVector_32 Pos;
	GFloat_32 Power;
} GEXPDATA;

#define GEXPDATAMAX 100
typedef struct {
	short		code;
	GEXPDATA	data[GEXPDATAMAX];
} GEXPSTREAM;

typedef struct {
	int Type;
	GVector_32 Pos;
	GFloat_32 Power;
	DWORD dpnid;
} GEXPDATA2;

typedef struct {
	short		code;
	GEXPDATA2	data[GEXPDATAMAX];
} GEXPSTREAM2;
typedef struct {
	int team; 
	int haveArm; 
	int crush; 
	int init; 
	int reset; 
	int yforce;
	int scenarioCode;

	GFloat x,y,z;
	GFloat w1,w2;
	GFloat ww1,ww2;
	GFloat maxY;
	DWORD time;
	DWORD time2;
	DWORD rtime;
	DWORD rtime2;
	short sendtime;
	short sendtime2;
	DWORD span;
	DWORD span2;
	GRECEIVEDATA	ReceiveData;
	int ChipCount;

	int Jet[GRECEIVEMAX];
	GVector	X[GRECEIVEMAX];
	GVector	X2[GRECEIVEMAX];
} GPLAYERDATA;

typedef struct {
	unsigned long ver_team; 
	long haveArm; 
	long crush; 
	long init; 
	long reset; 
	long yforce; 
	unsigned long base_fps; 
	long scenarioCode; 
	float dummyf1; 
	float dummyf2; 
	float dummyf3; 
} GMYDATA;

typedef struct {
	short		code;
	GMYDATA	data;
} GINFOSTREAM;
#endif

