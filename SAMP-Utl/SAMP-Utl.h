﻿#ifndef _SAMPUTL_H_
#define _SAMPUTL_H_
#include "common.h"

class sutl_player {
public:
	sutl_player();
	bool takeDMG;
	bool giveDMG;
};


class sutl_actor {
public:
	sutl_actor();
	bool BeAimed;
	int timerTarget;
	int timerBubble;
	int actorBubble;
};


namespace sutl {
	// Global
	int ClearChat();
	// Player
	int connect_Sutl(int playerid);
	int ClearPlayerChat(int playerid);
	bool IsPlayerInMainWorld(int playerid);	
	int TogglePlayerTakeDamage(int playerid, bool toggle);	
	bool IsPlayerAbleToTakeDamage(int playerid);
	int TogglePlayerGiveDamage(int playerid, bool toggle);	
	bool IsPlayerAbleToGiveDamage(int playerid);
	// Actor
	int init_actors();
	int toggleActorGetAimed(const int actorid, bool toggle, AMX* amx);
	bool IsActorAbleToGetAimed(const int actorid);
	int GetPlayerWhoAimActor(const int actorid);
	int SetActorChatBubble(int actorid, const char* text, int time);
	void SAMPGDK_CALL verifyActorTarget(int timerid, void* args);
	void SAMPGDK_CALL timerBubble(int timerid, void* args);
};

#endif

