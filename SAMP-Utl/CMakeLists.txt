cmake_minimum_required (VERSION 3.8)
include(AMXConfig)
include(AddSAMPPlugin)

set(SOURCES
	"${SDK}/amxplugin.cpp"
	"${SDK}/amxplugin2.cpp"
	"${GDK}/sampgdk.c"
	"SAMP-Utl.cpp"
	"Natives.cpp"
	"main.cpp"
	"plugin.def"
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
)


target_include_directories(SAMPUtl PUBLIC
	"${SDK}"
	"${GDK}"
	"${CMAKE_BINARY_DIR}"
)
target_compile_definitions(SAMPUtl PUBLIC "-DSAMPGDK_AMALGAMATION")

