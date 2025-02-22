#ifndef G_LUASCRIPT_H
#define G_LUASCRIPT_H

#include "GVector.hpp"
#include "GRigid.hpp"
#include "readData.hpp"

#define lua_c

extern "C" {
    #include "Lua/include/lua.h"
    #include "Lua/include/lualib.h"
    #include "Lua/include/lauxlib.h"
}

#ifndef M_PI
#define M_PI	3.14159265358979323846
#endif

extern GValList ValList[];
extern GKeyList KeyList[];
extern GWorld *World;
extern GRigid *Chip[];
extern int ChipCount;
extern int VarCount;
extern int TickCount;
extern int SystemTickCount;
extern double FPS;
extern int LIMITFPS;
extern int Width;
extern int Height;
extern unsigned int NumFace;
extern unsigned int NumVertice;
extern int LastBye;
extern int Analog[];
extern int Hat[];
extern int	MouseX;
extern int	MouseY;
extern int	MouseL;
extern int	MouseR;
extern int	MouseM;
extern int	CtrlKey;
extern GFloat CCDZoom;
extern char ScriptOutput[][GOUTPUTMAXCHAR];
//extern bool ObjectBallFlag;
extern int ScriptErrorCode;
extern char ScriptErrorStr[];
extern int ViewType;
extern GVector UserEyePos;
extern GVector UserRefPos;
extern GVector UserUpVec;


lua_State *luaScriptInit(char *buff);
void luaScriptEnd(lua_State *L);
int luaScriptRun (lua_State *L,char *funcName);
#endif