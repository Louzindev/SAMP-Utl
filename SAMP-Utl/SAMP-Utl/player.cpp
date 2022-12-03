#include "../SAMP-Utl.h"
namespace sutl {
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
		return s_player[playerid]->takeDMG;
	}	
	int TogglePlayerGiveDamage(int playerid, bool toggle) {
		s_player[playerid]->giveDMG = toggle;
		return 1;
	}
	bool IsPlayerAbleToGiveDamage(int playerid) {
		return s_player[playerid]->giveDMG;
	}
};