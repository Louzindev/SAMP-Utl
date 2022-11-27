#include "Natives.h"

namespace Natives {
	cell ClearPlayerChat(AMX* amx, cell* params) {
		int playerid = static_cast<int>(params[1]);
		return sutl::ClearPlayerChat(playerid);
	}
	cell ClearChat(AMX* amx, cell* params) {	
		return sutl::ClearChat();
	}
	// native IsPlayerInMainWorld(const playerid);
	cell IsPlayerInMainWorld(AMX* amx, cell* params) {
		int playerid = static_cast<int>(params[1]);
		return sutl::IsPlayerInMainWorld(playerid);
	}
	// native AblePlayerTakeDamage(const playerid, bool:toggle);
	cell TogglePlayerTakeDamage(AMX* amx, cell* params) {
		int playerid = static_cast<int>(params[1]);
		bool toggle = static_cast<bool>(params[2]);
		return sutl::TogglePlayerTakeDamage(playerid, toggle);
	}
	// native IsPlayerAbleToTakeDamage(const playerid);
	cell IsPlayerAbleToTakeDamage(AMX* amx, cell* params) {
		int playerid = static_cast<int>(params[1]);
		return sutl::IsPlayerAbleToTakeDamage(playerid);
	}
	// native TogglePlayerGiveDamage(const playerid, bool:toggle);
	cell TogglePlayerGiveDamage(AMX* amx, cell* params) {
		int playerid = static_cast<int>(params[1]);
		bool toggle = static_cast<bool>(params[2]);
		return sutl::TogglePlayerGiveDamage(playerid, toggle);
	}
	// native IsPlayerAbleToGiveDamage(const playerid);
	cell IsPlayerAbleToGiveDamage(AMX* amx, cell* params) {
		int playerid = static_cast<int>(params[1]);
		return sutl::IsPlayerAbleToGiveDamage(playerid);
	}
};