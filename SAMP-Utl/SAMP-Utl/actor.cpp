#include "../SAMP-Utl.h"


namespace sutl {
    sutl_actor* s_actor[1000];
    int init_actors() {
        for(int i=0; i<MAX_ACTORS; i++)
            s_actor[i] = new sutl_actor(); 
		return 1;
    }
    int toggleActorGetAimed(const int actorid, bool toggle, AMX* amx) {
        s_actor[actorid]->BeAimed = toggle;

        struct arg_t {
            int actorid;
            AMX* amx;
        };
        arg_t *args = (arg_t*)malloc(sizeof(arg_t));
        args->actorid = actorid;
        args->amx = amx;

        if(toggle) {
            KillTimer(s_actor[actorid]->timerTarget);
            s_actor[actorid]->timerTarget = SetTimer(1000, true, verifyActorTarget, (void*)args);
        } else {
            if(s_actor[actorid]->timerTarget)
                KillTimer(s_actor[actorid]->timerTarget);
        }
        return 1;
    }
	bool IsActorAbleToGetAimed(const int actorid) {
        return s_actor[actorid]->BeAimed;
    }
    int GetPlayerWhoAimActor(const int actorid) {
        for(int player=0; player<MAX_PLAYERS; player++) {
            if(!IsPlayerConnected(player))
                return INVALID_PLAYER_ID;
            if(GetPlayerTargetActor(player) == actorid)
                return player;
        }
        return -1;
    }

    void SAMPGDK_CALL verifyActorTarget(int timerid, void* args) {
        struct arg_t {
            int actorid;
            AMX* amx;
        };
        arg_t* args_ptr = (arg_t*) args;
        int actorid = args_ptr->actorid;
        AMX* amx = args_ptr->amx;

        int playerid = GetPlayerWhoAimActor(actorid);
        if(playerid == INVALID_PLAYER_ID)
            return;
        int idx;
        cell ret;
        // forward OnActorGetsAimed(const actorid, const playerid);
        if(!amx_FindPublic(amx, "OnActorGetsAimed", &idx)) {
            amx_Push(amx, (cell)playerid);
            amx_Push(amx, (cell)actorid);
            amx_Exec(amx, &ret, idx);
            if(ret == 0) {
                logprintf("[SAMP-Utl]:OnActorGetsAimed(%d, %d) may not work properly", actorid, playerid);
            }
        }
        return;
    }  
};