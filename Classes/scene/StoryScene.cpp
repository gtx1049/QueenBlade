#include "StoryScene.h"


StoryScene::StoryScene(void)
{
}


StoryScene::~StoryScene(void)
{
}

bool StoryScene::init()
{
	if(!CCScene::init())
    {
        return false;
    }
	CCSize visibleSize = CCDirector::sharedDirector()->getVisibleSize();
    CCPoint origin = CCDirector::sharedDirector()->getVisibleOrigin();
	//add background
	CCSprite* background = CCSprite::create(Loader::story_bg);

    // position the sprite on the center of the screen
    background->setPosition(ccp(visibleSize.width/2 + origin.x, visibleSize.height/2 + origin.y));

	//back menu
	FlowMenu* back = FlowMenu::create();
	back->backGenerate(storytomain);

    // add the sprite as a child to this layer
    this->addChild(background, 0);
	this->addChild(back, 0);

	return true;
}