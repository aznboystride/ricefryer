#include "notcookingstate.h"

NotCookingState::NotCookingState(Fryer* fry)
{
	fryer = fry;
}

void NotCookingState::openLidButton()
{
	if (!fryer->isLidOpen()) {
		cout << "opening lid" << endl;
		fryer->openLid();
	}
	else {
		cout << "lid is already opened" << endl;
	}
}

void NotCookingState::closeLidButton()
{
	if (fryer->isLidOpen()) {
		cout << "closing lid" << endl;
		fryer->closeLid();
	}
	else {
		cout << "lid is already closed" << endl;
	}
}

void NotCookingState::cookButton()
{
	if (!fryer->isLidOpen()) {
		fryer->setState(fryer->GetCookingState());
		cout << "starting to cook" << endl;
	}
	else {
		cout << "close lid first" << endl;
	}
}

void NotCookingState::stopCookButton()
{
	cout << "already not cooking" << endl;
}

string NotCookingState::getName()
{
	return "NotCookingState";
}
