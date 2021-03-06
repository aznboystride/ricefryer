#ifndef _notcookingstate
#define _notcookingstate
#include "fryer.h"

class NotCookingState: public Fryerstate {
public:
	NotCookingState(Fryer*);
	void openLidButton();
	void closeLidButton();
	void cookButton();
	void stopCookButton();
	std::string getName();
private:
	Fryer* fryer;
};
#endif
