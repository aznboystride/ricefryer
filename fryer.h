#ifndef _fryer
#define _fryer
#include <iostream>
#include <string>
#include "fryerstate.h"
#include "cookingstate.h"
#include "closelidstate.h"
#include "notcookingstate.h"
#include "openlidstate.h"

using namespace std;

class Fryer {
public:
	Fryer();

	void setState(Fryerstate* state);

	Fryerstate* GetState();

	Fryerstate* GetCloseLidState();

	Fryerstate* GetOpenLidState();

	Fryerstate* GetCookingState();

	Fryerstate* GetNotCookingState();
	bool isLidOpen();

	void openLid();
	void closeLid();
	void cookButton();
	void stopCookButton();
	void openLidButton();
	void closeLidButton();


private:
	Fryerstate* state;
	Fryerstate* closeLidState;
	Fryerstate* openLidState;
	Fryerstate* cookingState;
	Fryerstate* notcookingState;
	bool lidOpen;
};
#endif