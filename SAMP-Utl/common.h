#ifndef _COMMON_H_
#define _COMMON_H_

#include <iostream>
#include <cstdlib>
#include <unordered_map>
#include <memory>
#include "amx/amx.h"
#include "amx/amx2.h"
#include "plugincommon.h"
#include "sampgdk.h"
#include "Natives.h"
#include "SAMP-Utl.h"
#include "version.h"

extern void** ppPluginData;
extern void* pAMXFunctions;
typedef void (*logprintf_t)(const char* szFormat, ...);
extern logprintf_t logprintf;

#endif