#ifndef _NATIVES_H_
#define _NATIVES_H_
#include "common.h"

namespace Natives {
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
};

#endif