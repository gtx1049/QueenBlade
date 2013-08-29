#include "BattleScene.h"


BattleScene::BattleScene(void)
{
}


BattleScene::~BattleScene(void)
{
}

bool BattleScene::init()
{
	if(!CCScene::init())
    {
        return false;
    }
	CCSize visibleSize = CCDirector::sharedDirector()->getVisibleSize();
    CCPoint origin = CCDirector::sharedDirector()->getVisibleOrigin();
	//add background
	CCSprite* background = CCSprite::create(Loader::battle_bg);

    // position the sprite on the center of the screen
    background->setPosition(ccp(visibleSize.width/2 + origin.x, visibleSize.height/2 + origin.y));

	//back menu
	FlowMenu* back = FlowMenu::create();
	back->backGenerate(storytomain);

	//skillMenu
	SkillMenu* skill = SkillMenu::create();

    // add the sprite as a child to this layer
    this->addChild(background, 0);
	this->addChild(back, 1);
	this->addChild(skill);

	return true;
}