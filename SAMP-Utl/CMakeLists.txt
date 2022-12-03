cmake_minimum_required (VERSION 3.8)
include(AMXConfig)
include(AddSAMPPlugin)

set(SAMPUTL_SRC 
	"SAMP-Utl/player.cpp"
	"SAMP-Utl/actor.cpp"
)

set(SOURCES
	"${SDK}/amxplugin.cpp"
	"${SDK}/amxplugin2.cpp"
	"${GDK}/sampgdk.c"
	"SAMP-Utl.cpp"
	"Natives.cpp"
	"main.cpp"
)

set(HEADERS 
	"${SDK}/amx/amx.h"
	"${SDK}/amx/amx2.h"
	"${GDK}/sampgdk.h"
	"SAMP-Utl.h"
	"Natives.h"
	
)

add_samp_plugin(SAMPUtl 
	"${HEADERS}"
	"${SOURCES}"
	"${SAMPUTL_SRC}"
	"plugin.def"
)


target_include_directories(SAMPUtl PUBLIC
	"${SDK}"
	"${GDK}"
	"${CMAKE_BINARY_DIR}"
)
target_compile_definitions(SAMPUtl PUBLIC "-DSAMPGDK_AMALGAMATION")

