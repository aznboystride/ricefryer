#ifndef _cookingstate
#define _cookingstate
#include "fryer.h"

class CookingState {
public:
	CookingState(Fryer* fry);
	void openLidButton();
	void closeLidButton();
	void cookButton();
	void stopCookButton();

private:
	Fryer* fryer;
};
#endif
