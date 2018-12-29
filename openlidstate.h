#ifndef _openlidstate
#define _openlidstate
#include "fryer.h"
class OpenLidState: public Fryerstate {
public:
	OpenLidState(Fryer* fry);
	void openLidButton();
	void closeLidButton();
	void cookButton();
	void stopCookButton();
	std::string getName();

private:
	Fryer* fryer;
};
#endif
