#ifndef _fryer
#define _fryer
#include <iostream>
#include "cookingstate.h"
#include "fryerstate.h"
#include "closelidstate.h"
#include "notcookingstate.h"
#include "openlidstate.h"

using namespace std;

class Fryer {
public:
	Fryer();

	void setState(Fryerstate* state);

	Fryerstate* GetCloseLidState();

	Fryerstate* GetOpenLidState();

	Fryerstate* GetCookingState();

	Fryerstate* GetNotCookingState();
	bool isLidOpen() {
		return lidOpen;
	}

	void openLid();
	void closeLid();


private:
	Fryerstate* state;
	Fryerstate* closeLidState;
	Fryerstate* openLidState;
	Fryerstate* cookingState;
	Fryerstate* notcookingState;
	bool lidOpen;
};
#endif