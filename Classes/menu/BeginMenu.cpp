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
	facItems();
	
	this->addChild(start);
	this->addChild(free);
	this->addChild(muti);
	this->addChild(gallery);
	this->addChild(exit);
	
	this->setPosition(CCPointZero);

	return true;
}

BeginMenu::~BeginMenu(void)
{
}

void BeginMenu::setFontsize(int size)
{
	fontsize = size;
}

void BeginMenu::menuStartGame(CCObject* pSender)
{
	CCScene* pscene = StoryScene::create();
	CCDirector::sharedDirector()->replaceScene(CCTransitionFade::create(0.8f, pscene));
}

void BeginMenu::menuFreeGame(CCObject* pSender)
{
	CCScene* pscene = BattleScene::create();
	CCDirector::sharedDirector()->replaceScene(CCTransitionFade::create(0.8f, pscene));
}

void BeginMenu::menuConnectGame(CCObject* pSender)
{

}

void BeginMenu::menuGallery(CCObject* pSender)
{
	CCScene* pscene = GalleryScene::create();
	CCDirector::sharedDirector()->replaceScene(CCTransitionFade::create(0.8f, pscene));
}

void BeginMenu::menuExitGame(CCObject* pSender)
{
	CCDirector::sharedDirector()->end();
}

CCMenuItemLabel* BeginMenu::generateMenuitem(int index, int size)
{
	CCMenuItemLabel* item;
	CCLabelBMFont* label;
	switch(index)
	{
	case startitem:
		label = CCLabelBMFont::create(Loader::getMenustring(index), Loader::fntfile);
		item = CCMenuItemLabel::create(label, this, menu_selector(BeginMenu::menuStartGame));
		break;
	case freeitem:
		label = CCLabelBMFont::create(Loader::getMenustring(index), Loader::fntfile);
		item = CCMenuItemLabel::create(label, this, menu_selector(BeginMenu::menuFreeGame));
		break;
	case mutiitem:
		label = CCLabelBMFont::create(Loader::getMenustring(index), Loader::fntfile);
		item = CCMenuItemLabel::create(label, this, menu_selector(BeginMenu::menuConnectGame));
		break;
	case galleryitem:
		label = CCLabelBMFont::create(Loader::getMenustring(index), Loader::fntfile);
		item = CCMenuItemLabel::create(label, this, menu_selector(BeginMenu::menuGallery));
		break;
	case exititem:
		label = CCLabelBMFont::create(Loader::getMenustring(index), Loader::fntfile);
		item = CCMenuItemLabel::create(label, this, menu_selector(BeginMenu::menuExitGame));
		break;
	}
    //item->setFontSizeObj(50);
    //item->setFontName("Marker Felt");
	//item->setColor(ccc3(255, 0, 0));

	CCSize visibleSize = CCDirector::sharedDirector()->getVisibleSize();
	CCPoint origin = CCDirector::sharedDirector()->getVisibleOrigin();

	item->setPosition(ccp(origin.x + 200, visibleSize.height - index * size - 200));
	return item;
}

void BeginMenu::facItems()
{
	setFontsize(50);
	Loader::initLoader();
	start   = generateMenuitem(startitem, fontsize);
	free    = generateMenuitem(freeitem, fontsize);
	muti    = generateMenuitem(mutiitem, fontsize);
	gallery = generateMenuitem(galleryitem, fontsize);
	exit    = generateMenuitem(exititem, fontsize);
	Loader::releaseLoader();
}