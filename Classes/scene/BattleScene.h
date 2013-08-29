#ifndef __BATTLESCENE_H__
#define __BATTLESCENE_H__

#include "cocos2d.h"
#include "controll\Loader.h"
#include "menu\menuset.h"
USING_NS_CC;

class BattleScene : public CCScene
{
public:
	BattleScene(void);
	~BattleScene(void);

	
	virtual bool init(); 
	// implement the "static node()" method manually
    CREATE_FUNC(BattleScene);
};

#endif