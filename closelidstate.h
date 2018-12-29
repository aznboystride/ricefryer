#ifndef _closelidstate
#define _closelidstate
#include "fryer.h"

class Fryer;
class CloseLidState: public Fryerstate {
public:
	CloseLidState(Fryer* fry);
	void openLidButton();
	void closeLidButton();
	void cookButton();
	void stopCookButton();

private:
	Fryer* fryer;
};
#endif
