#ifndef _cookingstate
#define _cookingstate
#include "fryer.h"

class Fryer;
class CookingState: public Fryerstate {
public:
	CookingState(Fryer* fry);
	void openLidButton();
	void closeLidButton();
	void cookButton();
	void stopCookButton();
	std::string getName();

private:
	Fryer* fryer;
};
#endif
