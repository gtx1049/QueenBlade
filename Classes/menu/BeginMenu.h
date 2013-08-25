#ifndef __BEGINMENU_H__
#define __BEGINMENU_H__

#include "cocos2d.h"
USING_NS_CC;

class BeginMenu : public cocos2d::CCMenu
{
public:
	BeginMenu(void);
	~BeginMenu(void);

	virtual bool init(); 
	// implement the "static node()" method manually
    CREATE_FUNC(BeginMenu);

	//listener
	void menuStartGame(CCObject* pSender);
	void menuFreeGame(CCObject* pSender);
	void menuConnectGame(CCObject* pSender);
	void menuGallery(CCObject* pSender);
	void menuExitGame(CCObject* pSender);
};

#endif