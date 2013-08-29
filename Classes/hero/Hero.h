#ifndef __HERO_H__
#define __HERO_H__

#include "cocos2d.h"
#include "HeroEntity.h"
USING_NS_CC;

class Hero : public CCSprite
{
public:
	Hero(void);
	~Hero(void);

	virtual bool init();
	CREATE_FUNC(Hero);

private:
	HeroEntity* pheroentity;
};

#endif