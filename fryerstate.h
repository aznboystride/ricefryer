#ifndef _fryerstate
#define _fryerstate
#include <iostream>
#include <string>
class Fryerstate {
public:
	virtual void openLidButton() = 0;
	virtual void closeLidButton() = 0;
	virtual void cookButton() = 0;
	virtual void stopCookButton() = 0;
	virtual std::string getName() = 0;
	friend std::ostream& operator<<(std::ostream& os, Fryerstate* state);
};
#endif