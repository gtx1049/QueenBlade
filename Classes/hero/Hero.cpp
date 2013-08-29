#include "Hero.h"


Hero::Hero(void)
{
}


Hero::~Hero(void)
{
	if(pheroentity != NULL)
	{
		delete pheroentity;
	}
}

bool Hero::init()
{
	return true;
}