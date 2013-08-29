#include "SkillMenu.h"


SkillMenu::SkillMenu(void)
{
}


SkillMenu::~SkillMenu(void)
{
}

bool SkillMenu::init()
{
	setTouchEnabled(true);
	CCSize visibleSize = CCDirector::sharedDirector()->getVisibleSize();
	CCPoint origin = CCDirector::sharedDirector()->getVisibleOrigin();
	
	CCTableView* tableView = CCTableView::create(this, CCSizeMake(60, 500));
	tableView->setDirection(kCCScrollViewDirectionVertical);
	tableView->setPosition(100,100);
	tableView->setDelegate(this);
	tableView->setVerticalFillOrder(kCCTableViewFillTopDown);
	this->addChild(tableView);
	tableView->reloadData();

	//skills = CCMenu::create();

	//for(int i = 0; i < 64; i++)
	//{
	//	CCLabelTTF* label = CCLabelTTF::create("I am test", "Arial", 40);
	//	CCMenuItemLabel* pMenuItem = CCMenuItemLabel::create(label, this, menu_selector(SkillMenu::menuSkillchoose));
	//	pMenuItem->setPosition(ccp(origin.x, visibleSize.height - i * 40 - 10));
 //       skills->addChild(pMenuItem, i + 100);
	//}
	//this->addChild(skills);
	//this->setContentSize(CCSizeMake(300, 64 * 35));
	this->setPosition(CCPointZero);
	return true;
}

void SkillMenu::tableCellTouched(CCTableView* table, CCTableViewCell* cell)
{
	CCLabelTTF *label = (CCLabelTTF*)cell->getChildByTag(1);
	label->setColor(ccc3(255, 0, 0));
}

CCTableViewCell* SkillMenu::tableCellAtIndex(CCTableView *table, unsigned int idx)
{
	CCString *string = CCString::createWithFormat("%d", idx);
    //CCTableViewCell *cell = table->dequeueCell();
    //if (!cell) {
       CCTableViewCell * cell = new CCTableViewCell();
        cell->autorelease();

        CCLabelTTF *label = CCLabelTTF::create(string->getCString(), "Helvetica", 60.0);
        label->setPosition(CCPointZero);
		label->setAnchorPoint(CCPointZero);
        label->setTag(1);
        cell->addChild(label);
    //}
    //else
    //{
    //    CCLabelTTF *label = (CCLabelTTF*)cell->getChildByTag(1);
    //    label->setString(string->getCString());
    //}
    return cell;
}

CCSize SkillMenu::tableCellSizeForIndex(CCTableView *table, unsigned int idx)
{
    return CCSizeMake(60, 60);
}

unsigned int SkillMenu::numberOfCellsInTableView(CCTableView *table)
{
    return 32;
}

//bool SkillMenu::ccTouchBegan(CCTouch *pTouch, CCEvent *pEvent)
//{
//	beginpos = pTouch->getLocation();
//	return true;
//}
//
//void SkillMenu::ccTouchMoved(CCTouch *pTouch, CCEvent *pEvent)
//{
//	//CCSetIterator it = pTouches->begin();
//    //CCTouch* pTouch = (CCTouch*)(*it);
//    CCPoint touchLocation = pTouch->getLocation();    
//    float nMoveY = touchLocation.y - movepos.y;
//
//    CCPoint curPos  = this->getPosition();
//    CCPoint nextPos = ccp(curPos.x, curPos.y + nMoveY);
//
//    if (nextPos.y < 0.0f)
//    {
//        this->setPosition(CCPointZero);
//        return;
//    }
//
//	if (nextPos.y > (64 * 50 - CCDirector::sharedDirector()->getVisibleSize().height))
//    {
//        this->setPosition(ccp(0, (64 * 50 - CCDirector::sharedDirector()->getVisibleSize().height)));
//        return;
//    }
//
//    this->setPosition(nextPos);
//    movepos = touchLocation;
//}
//
//void SkillMenu::ccTouchEnded(CCTouch *pTouch, CCEvent *pEvent)
//{
//	endpos = pTouch->getLocation();
//}

void SkillMenu::menuSkillchoose(CCObject* pSender)
{

}