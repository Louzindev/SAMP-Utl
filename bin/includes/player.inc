#if defined _inc_SAMPUTL_PLAYER
	#undef _inc_SAMPUTL_PLAYER
#endif

#if defined _SAMPUTL_PLAYER_included
	#endinput
#endif

native ClearPlayerChat(const playerid);
native IsPlayerInMainWorld(const playerid);
native AblePlayerTakeDamage(const playerid, bool:toggle);
native IsPlayerAbleToTakeDamage(const playerid);
native TogglePlayerGiveDamage(const playerid, bool:toggle);
native IsPlayerAbleToGiveDamage(const playerid);