#ifndef __MAINSCENE_H__
#define __MAINSCENE_H__

#include "cocos2d.h"
USING_NS_CC;

class MainScene : public CCScene
{
public:
	MainScene(void);
	~MainScene(void);

	virtual bool init(); 
	// implement the "static node()" method manually
    CREATE_FUNC(MainScene);
};

#endif