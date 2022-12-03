#ifndef _NATIVES_H_
#define _NATIVES_H_
#include "common.h"

namespace Natives {
	// =============> PLAYER <===============
	// native ClearPlayerChat(const playerid);
	cell ClearPlayerChat(AMX* amx, cell* params);
	// native ClearChat();
	cell ClearChat(AMX* amx, cell* params);
	// native IsPlayerInMainWorld(const playerid);
	cell IsPlayerInMainWorld(AMX* amx, cell* params);
	// native AblePlayerTakeDamage(const playerid, bool:toggle);
	cell TogglePlayerTakeDamage(AMX* amx, cell* params);
	// native IsPlayerAbleToTakeDamage(const playerid);
	cell IsPlayerAbleToTakeDamage(AMX* amx, cell* params);
	// native TogglePlayerGiveDamage(const playerid, bool:toggle);
	cell TogglePlayerGiveDamage(AMX* amx, cell* params);
	// native IsPlayerAbleToGiveDamage(const playerid);
	cell IsPlayerAbleToGiveDamage(AMX* amx, cell* params);

	// =============> ACTOR <===============

	// native toggleActorGetAimed(const actorid, bool:toggle);
	cell toggleActorGetAimed(AMX* amx, cell* params);
	// native GetPlayerWhoAimActor(const actorid);
	cell GetPlayerWhoAimActor(AMX* amx, cell* params);

	extern "C" const AMX_NATIVE_INFO native_list[];
};

#endif