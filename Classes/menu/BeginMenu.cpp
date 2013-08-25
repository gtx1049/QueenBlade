#include "BeginMenu.h"


BeginMenu::BeginMenu(void)
{

}

bool BeginMenu::init()
{
	if(!CCMenu::init())
    {
        return false;
    }

	setTouchEnabled(true);

	/***********Menu list*************/
    CCMenuItemFont *start = CCMenuItemFont::create("New Game", this, menu_selector(BeginMenu::menuStartGame));
    start->setFontSizeObj(20);
    start->setFontName("Marker Felt");
    CCMenuItemFont *free = CCMenuItemFont::create("FreeGame", this, menu_selector(BeginMenu::menuFreeGame));
    free->setFontSizeObj(20);
    free->setFontName("Marker Felt");
    CCMenuItemFont *muti = CCMenuItemFont::create("Muti", this, menu_selector(BeginMenu::menuConnectGame));
    muti->setFontSizeObj(20);
    muti->setFontName("Marker Felt");
    CCMenuItemFont *gallery = CCMenuItemFont::create("Gallery", this, menu_selector(BeginMenu::menuGallery));
    gallery->setFontSizeObj(20);
    gallery->setFontName("Marker Felt");
    CCMenuItemFont *exit = CCMenuItemFont::create("Exit", this, menu_selector(BeginMenu::menuExitGame));
    exit->setFontSizeObj(20);
    exit->setFontName("Marker Felt");
	exit->setColor(ccc3(255,255,255));

	this->addChild(start);
	this->addChild(free);
	this->addChild(muti);
	this->addChild(gallery);
	CCSize visibleSize = CCDirector::sharedDirector()->getVisibleSize();
	CCPoint origin = CCDirector::sharedDirector()->getVisibleOrigin();
	exit->setPosition(ccp(origin.x + visibleSize.width - exit->getContentSize().width/2,origin.y + exit->getContentSize().height/2));
	this->addChild(exit);
	this->setPosition(CCPointZero);
	
	return true;
}

BeginMenu::~BeginMenu(void)
{
}

void BeginMenu::menuStartGame(CCObject* pSender)
{

}

void BeginMenu::menuFreeGame(CCObject* pSender)
{

}

void BeginMenu::menuConnectGame(CCObject* pSender)
{

}

void BeginMenu::menuGallery(CCObject* pSender)
{

}

void BeginMenu::menuExitGame(CCObject* pSender)
{
	CCDirector::sharedDirector()->end();
}