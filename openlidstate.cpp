#include "openlidstate.h"

OpenLidState::OpenLidState(Fryer * fry)
{
	this->fryer = fry;
}

void OpenLidState::openLidButton()
{
	cout << "lid already opened" << endl;
}

void OpenLidState::closeLidButton()
{
	cout << "closing lid" << endl;
	fryer->closeLid();
	fryer->setState(fryer->GetCloseLidState());
}

void OpenLidState::cookButton()
{
	cout << "cannot cook with lid open" << endl;
}

void OpenLidState::stopCookButton()
{
	cout << "lid is open, so it wasn't cooking" << endl;
}

string OpenLidState::getName()
{
	return "OpenLidState";
}
