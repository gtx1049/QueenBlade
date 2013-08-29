#ifndef __FLOWMENU_H__
#define __FLOWMENU_H__

#include "cocos2d.h"
#include "controll\Loader.h"
#include "menuset.h"
#include "scene\BattleScene.h"
#include "scene\GalleryScene.h"
#include "scene\MainScene.h"
#include "scene\StoryScene.h"
USING_NS_CC;

class FlowMenu : public CCMenu
{
public:
	FlowMenu(void);
	~FlowMenu(void);

	void backGenerate(int choose);

	virtual bool init(); 
	// implement the "static node()" method manually
    CREATE_FUNC(FlowMenu);
private:
	void menuBacktoMain(CCObject* pSender);
};

#endif