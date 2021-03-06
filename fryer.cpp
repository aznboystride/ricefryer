#include "fryer.h"

Fryer::Fryer()
{
	closeLidState = new CloseLidState(this);
	openLidState = new OpenLidState(this);
	cookingState = new CookingState(this);
	notcookingState = new NotCookingState(this);

	state = notcookingState;
}

void Fryer::setState(Fryerstate * state)
{
	this->state = state;
}

Fryerstate * Fryer::GetState()
{
	return state;
}

Fryerstate * Fryer::GetCloseLidState()
{
	return closeLidState;
}

Fryerstate * Fryer::GetOpenLidState()
{
	return openLidState;
}

Fryerstate * Fryer::GetCookingState()
{
	return cookingState;
}

Fryerstate * Fryer::GetNotCookingState()
{
	return notcookingState;
}

bool Fryer::isLidOpen()
{
	return lidOpen;
}

void Fryer::openLid()
{
	lidOpen = true;
}

void Fryer::closeLid()
{
	lidOpen = false;
}

void Fryer::cookButton()
{
	state->cookButton();
}

void Fryer::stopCookButton()
{
	state->stopCookButton();
}

void Fryer::openLidButton()
{
	state->openLidButton();
}

void Fryer::closeLidButton()
{
	state->closeLidButton();
}
