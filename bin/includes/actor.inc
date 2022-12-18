#if defined _inc_SAMPUTL_ACTOR
	#undef _inc_SAMPUTL_ACTOR
#endif

#if defined _SAMPUTL_ACTOR_included
	#endinput
#endif
forward OnActorGetsAimed(const actorid, const playerid);

native toggleActorGetAimed(const actorid, bool:toggle);
native GetPlayerWhoAimActor(const actorid);

