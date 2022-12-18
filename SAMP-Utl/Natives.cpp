#include "Natives.h"

namespace Natives {

	// =============> PLAYER <===============
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


	// =============> ACTOR <===============
	// native toggleActorGetAimed(const actorid);
	cell toggleActorGetAimed(AMX* amx, cell* params) {
		int actorid = static_cast<int>(params[1]);
		bool toggle = static_cast<bool>(params[2]);
		return sutl::toggleActorGetAimed(actorid, toggle, amx);
	}


	// native GetPlayerWhoAimActor(const actorid);
	cell GetPlayerWhoAimActor(AMX* amx, cell* params) {
		int actorid = static_cast<int>(params[1]);
		return sutl::GetPlayerWhoAimActor(actorid);
	}


	// native SetActorBubble(const actorid, const text[], const time);
	cell SetActorChatBubble(AMX* amx, cell* params) {
		int actorid = static_cast<int>(params[1]);
		char* text = new char[101];
		lzn::amx_GetStr(amx, params[2], text, 100);
		int time = static_cast<int>(params[3]);
		return sutl::SetActorChatBubble(actorid, text, time);
	}

	const AMX_NATIVE_INFO native_list[] = {
		{ "ClearPlayerChat", ClearPlayerChat },
		{ "IsPlayerInMainWorld", IsPlayerInMainWorld },
		{ "TogglePlayerTakeDamage", TogglePlayerTakeDamage },
		{ "IsPlayerAbleToTakeDamage", IsPlayerAbleToTakeDamage },
		{ "TogglePlayerGiveDamage", TogglePlayerGiveDamage },
		{ "IsPlayerAbleToGiveDamage", IsPlayerAbleToGiveDamage },
		{ "toggleActorGetAimed", toggleActorGetAimed },
		{ "GetPlayerWhoAimActor", GetPlayerWhoAimActor },
		{ "SetActorChatBubble", SetActorChatBubble},
		{ NULL, NULL }
	};
};