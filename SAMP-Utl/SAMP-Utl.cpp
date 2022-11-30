#include "SAMP-Utl.h"

sutl_data::sutl_data() {
	this->mainWorld = 0;
}

sutl_player::sutl_player() {
	this->giveDMG = true;
	this->takeDMG = true;
}


namespace sutl {
	int connect_Sutl(int playerid) {
		if(s_player[playerid] == NULL) 
			s_player[playerid] = new sutl_player();
		else 
		    delete s_player[playerid];
		return 1;
	}
	
};