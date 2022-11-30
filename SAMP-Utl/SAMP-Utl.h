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
namespace sutl {
	extern sutl_data sutl_info;
	extern sutl_player* s_player[1000];
	int connect_Sutl(int playerid);
	int ClearPlayerChat(int playerid);
	int ClearChat();
	bool IsPlayerInMainWorld(int playerid);	
	int TogglePlayerTakeDamage(int playerid, bool toggle);	
	bool IsPlayerAbleToTakeDamage(int playerid);	
	int TogglePlayerGiveDamage(int playerid, bool toggle);	
	bool IsPlayerAbleToGiveDamage(int playerid);
};

#endif

