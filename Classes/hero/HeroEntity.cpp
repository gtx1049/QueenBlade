#include "HeroEntity.h"


HeroEntity::HeroEntity(void)
{
	for(int i = 0; i < PAGECOUNT; i++)
	{
		for(int j = 0; j < TABLECOUNT; j++)
		{
			table[i][j] = INVALID;
		}
		skilltype[i]  = INVALID;
		skillcolor[i] = INVALID;
		skillpage[i]  = INVALID;
		skillmod[i]   = INVALID;
	} 
}


HeroEntity::~HeroEntity(void)
{
}

char HeroEntity::getTranspage(int page, int trans)
{
	return table[page][trans];
}

void HeroEntity::setStatus(int status)
{
	this->status = status;
}

bool HeroEntity::isLose()
{
	if(hp <= 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}