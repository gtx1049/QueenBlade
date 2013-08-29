#ifndef __STORYSCENE_H__
#define __STORYSCENE_H__

#include "cocos2d.h"
#include "controll\Loader.h"
#include "menu\menuset.h"
#include "MainScene.h"
USING_NS_CC;

class StoryScene : public CCScene
{
public:
	StoryScene(void);
	~StoryScene(void);

	virtual bool init(); 
	// implement the "static node()" method manually
    CREATE_FUNC(StoryScene);
};

#endif