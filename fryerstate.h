#ifndef _fryerstate
#define _fryerstate

class Fryerstate {
public:
	virtual void openLidButton() = 0;
	virtual void closeLidButton() = 0;
	virtual void cookButton() = 0;
	virtual void stopCookButton() = 0;
};
#endif