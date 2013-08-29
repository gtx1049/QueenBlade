#include "MainScene.h"


MainScene::MainScene(void)
{
}


MainScene::~MainScene(void)
{
}

bool MainScene::init()
{
	if(!CCScene::init())
    {
        return false;
    }
	CCSize visibleSize = CCDirector::sharedDirector()->getVisibleSize();
    CCPoint origin = CCDirector::sharedDirector()->getVisibleOrigin();
	//add background
	CCSprite* background = CCSprite::create(Loader::mains_wel);

    // position the sprite on the center of the screen
    background->setPosition(ccp(visibleSize.width/2 + origin.x, visibleSize.height/2 + origin.y));

    // add the sprite as a child to this layer
    this->addChild(background, 0);

    // add layer as a child to scene
	BeginMenu *beginmenu = BeginMenu::create();
	this->addChild(beginmenu, 1);

	// return the scene
    return true;
}