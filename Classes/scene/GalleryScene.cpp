#include "GalleryScene.h"


GalleryScene::GalleryScene(void)
{
}


GalleryScene::~GalleryScene(void)
{
}

bool GalleryScene::init()
{
	if(!CCScene::init())
    {
        return false;
    }
	CCSize visibleSize = CCDirector::sharedDirector()->getVisibleSize();
    CCPoint origin = CCDirector::sharedDirector()->getVisibleOrigin();
	//add background
	//CCSprite* background = CCSprite::create(Loader::story_bg);

    // position the sprite on the center of the screen
    //background->setPosition(ccp(visibleSize.width/2 + origin.x, visibleSize.height/2 + origin.y));

    // add the sprite as a child to this layer
    //this->addChild(background, 0);

	//back menu
	FlowMenu* back = FlowMenu::create();
	back->backGenerate(storytomain);

	this->addChild(back);

	return true;
}