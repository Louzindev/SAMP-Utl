#ifndef _SAMPUTL_H_
#define _SAMPUTL_H_
#include "common.h"

class sutl_data {
public:
	sutl_data();
	int mainWorld;
};
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
};
namespace sutl {
	extern sutl_data sutl_info;
	// global
	int ClearChat();
	// Player
	extern sutl_player* s_player[1000];
	int connect_Sutl(int playerid);
	int ClearPlayerChat(int playerid);
	bool IsPlayerInMainWorld(int playerid);	
	int TogglePlayerTakeDamage(int playerid, bool toggle);	
	bool IsPlayerAbleToTakeDamage(int playerid);
	int TogglePlayerGiveDamage(int playerid, bool toggle);	
	bool IsPlayerAbleToGiveDamage(int playerid);
	// Actor
	extern sutl_actor* s_actor[MAX_ACTORS];
	int toggleActorGetAimed(const int actorid, bool toggle);
	bool IsActorAbleToGetAimed(const int actorid);
	int GetPlayerWhoAimActor(const int actorid);
};

#endif

