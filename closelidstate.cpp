#include "closelidstate.h"

CloseLidState::CloseLidState(Fryer * fry)
{
	this->fryer = fry;
}

void CloseLidState::openLidButton()
{
	cout << "opening lid" << endl;
	fryer->setState(fryer->GetOpenLidState());
	fryer->openLid();
}

void CloseLidState::closeLidButton()
{
	cout << "closing lid" << endl;
	fryer->setState(fryer->GetCloseLidState());
	fryer->closeLid();
}

void CloseLidState::cookButton()
{
	fryer->setState(fryer->GetCookingState());
	cout << "cooking started" << endl;
}

void CloseLidState::stopCookButton()
{
	fryer->setState(fryer->GetNotCookingState());
	cout << "cooking stopped" << endl;
}

string CloseLidState::getName()
{
	return "CloseLidState";
}
