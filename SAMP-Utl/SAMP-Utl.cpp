#include "SAMP-Utl.h"

sutl_data::sutl_data() {
	this->mainWorld = 0;
}

sutl_player::sutl_player() {
	this->giveDMG = true;
	this->takeDMG = true;
}


namespace sutl {
	sutl_data sutl_info;
	sutl_player* s_player[1000];
	int connect_Sutl(int playerid) {
		if(s_player[playerid] == NULL) 
			s_player[playerid] = new sutl_player();
		else 
		    delete s_player[playerid];
		return 1;
	}
	
	int ClearPlayerChat( int playerid ) 
	{
		if (IsPlayerConnected( playerid )) 
		{
			int i;
			for (i = 0; i < 10; ++i) {
				SendClientMessage(playerid, -1, "");
			}
			return 1;
		}
		return 0;
	}
	int ClearChat() 
	{
		int i;
		for (i = 0; i < 10; ++i) {
			SendClientMessageToAll(-1, "");
		}
		return 1;
	}
	
	bool IsPlayerInMainWorld(int playerid) 
	{
		if(GetPlayerVirtualWorld(playerid) == sutl_info.mainWorld)
			return true;
		else 
			return false;
	}	
	int TogglePlayerTakeDamage(int playerid, bool toggle) {
		s_player[playerid]->takeDMG = toggle;
		return 1;
	}	
	bool IsPlayerAbleToTakeDamage(int playerid) {
		if(s_player[playerid]->takeDMG)
			return true;
		else 
			return false;

	}	
	int TogglePlayerGiveDamage(int playerid, bool toggle) {
		s_player[playerid]->giveDMG = toggle;
		return 1;
	}
	bool IsPlayerAbleToGiveDamage(int playerid) {
		if(s_player[playerid]->giveDMG) 
		    return true;
        else 
            return false;
	}
};