#include "SAMP-Utl.h"


sutl_player::sutl_player() {
	this->giveDMG = true;
	this->takeDMG = true;
}

sutl_actor::sutl_actor() {
	this->BeAimed = false;
	this->timerTarget = -1;
}
