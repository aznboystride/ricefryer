#include "cookingstate.h"

CookingState::CookingState(Fryer * fry)
{
	fryer = fry;
}

void CookingState::openLidButton()
{
	cout << "cannot open lid while cooking" << endl;
}

void CookingState::closeLidButton()
{
	cout << "lid is already closed because it's cooking" << endl;
}

void CookingState::cookButton()
{
	cout << "is already cooking so nothing happens" << endl;
}

void CookingState::stopCookButton()
{
	cout << "stopping cooking" << endl;
	fryer->setState(fryer->GetNotCookingState());
}

std::string CookingState::getName()
{
	return "Cooking State";
}
