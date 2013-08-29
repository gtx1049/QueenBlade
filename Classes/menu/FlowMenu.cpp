#include "FlowMenu.h"


FlowMenu::FlowMenu(void)
{
}


FlowMenu::~FlowMenu(void)
{
}

bool FlowMenu::init()
{
	if(!CCMenu::init())
    {
        return false;
    }

	setTouchEnabled(true);
	this->setPosition(CCPointZero);

	return true;
}

void FlowMenu::backGenerate(int choose)
{
	Loader::initLoader();
	CCSize visibleSize = CCDirector::sharedDirector()->getVisibleSize();
    CCPoint origin = CCDirector::sharedDirector()->getVisibleOrigin();
	CCLabelBMFont* label = CCLabelBMFont::create(Loader::getMenustring(backitem), Loader::fntfile);
	CCMenuItemLabel* item;
	switch(choose)
	{
	case storytomain:
		item = CCMenuItemLabel::create(label, this, menu_selector(FlowMenu::menuBacktoMain));
		break;
	case battletomain:
		item = CCMenuItemLabel::create(label, this, menu_selector(FlowMenu::menuBacktoMain));
		break;
	case gallerytomain:
		item = CCMenuItemLabel::create(label, this, menu_selector(FlowMenu::menuBacktoMain));
		break;
	}
	
	Loader::releaseLoader();
	item->setPosition(ccp(origin.x + visibleSize.width - item->getContentSize().width/2, origin.y + item->getContentSize().height/2));
	this->addChild(item);
}

void FlowMenu::menuBacktoMain(CCObject* pSender)
{
	CCScene* pscene = MainScene::create();
	CCDirector::sharedDirector()->replaceScene(CCTransitionFade::create(0.8f, pscene));
}