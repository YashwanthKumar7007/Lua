#include <stdio.h>
#include <lua.h>
#include <lualib.h>
#include <lauxlib.h>

int main()
{
    lua_State *L = luaL_newstate();
    luaL_openlibs(L);
    printf("hello from C");
    luaL_dofile(L,"C:\\work\\Lua\\Code\\Application\\app.lua");
    lua_close(L);
    return 0;
}