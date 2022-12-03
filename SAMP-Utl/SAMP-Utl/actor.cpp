#include "../SAMP-Utl.h"


namespace sutl {
    int toggleActorGetAimed(const int actorid, bool toggle) {
        s_actor[actorid]->BeAimed = toggle;
        return 1;
    }
	bool IsActorAbleToGetAimed(const int actorid) {
        return s_actor[actorid]->BeAimed;
    }
    int GetPlayerWhoAimActor(const int actorid) {
        for(int player:MAX_PLAYERS) {
            if(!IsPlayerConnected(player))
                return -1;
            if(GetPlayerTargetActor(player) == actorid) {
                return actorid;
            }
        }
        return -1;
    }
};