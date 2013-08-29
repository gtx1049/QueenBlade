#ifndef __BEGINMENU_H__
#define __BEGINMENU_H__

#include "cocos2d.h"
#include "menuset.h"
#include "scene\StoryScene.h"
#include "scene\BattleScene.h"
#include "scene\GalleryScene.h"
#include "controll\Loader.h"
USING_NS_CC;

class BeginMenu : public cocos2d::CCMenu
{
public:
	BeginMenu(void);
	~BeginMenu(void);

	virtual bool init(); 
	// implement the "static node()" method manually
    CREATE_FUNC(BeginMenu);

	//setPosion
	void setPostion();

	//setFontsize
	void setFontsize(int size);

private:
	//listener
	void menuStartGame(CCObject* pSender);
	void menuFreeGame(CCObject* pSender);
	void menuConnectGame(CCObject* pSender);
	void menuGallery(CCObject* pSender);
	void menuExitGame(CCObject* pSender);

	CCMenuItemLabel* start;
	CCMenuItemLabel* free;
	CCMenuItemLabel* muti;
	CCMenuItemLabel* gallery;
	CCMenuItemLabel* exit;

	int fontsize;

	void facItems();
	CCMenuItemLabel* generateMenuitem(int index, int size);

	//temp var
	//const static std::string menunames[5] = {"New Game", "Free Game", "Muti Game", "Gallery", "Exit"};
};

#endif