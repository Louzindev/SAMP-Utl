#include "lznlib.h"

namespace lzn {
    void amx_GetStr(AMX* amx, cell amx_addr, char* dest, int len) 
    {
        cell* addr; 
        amx_GetAddr(amx, amx_addr, &addr); 
        amx_GetString(dest, addr, 0, len);
    }
}