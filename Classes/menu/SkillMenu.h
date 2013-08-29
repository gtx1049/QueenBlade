#ifndef __SKILLMENU_H__
#define __SKILLMENU_H__

#include "cocos2d.h"
#include "cocos-ext.h"
#include "menu\menuset.h"
USING_NS_CC;
USING_NS_CC_EXT;

class SkillMenu : public CCLayer, public CCTableViewDataSource, public CCTableViewDelegate
{
public:
	SkillMenu(void);
	~SkillMenu(void);

	virtual bool init(); 
	// implement the "static node()" method manually
    CREATE_FUNC(SkillMenu);

	//virtual bool ccTouchBegan(CCTouch *pTouch, CCEvent *pEvent);
    //virtual void ccTouchMoved(CCTouch *pTouch, CCEvent *pEvent);
	//virtual void ccTouchEnded(CCTouch *pTouch, CCEvent *pEvent);
	virtual void scrollViewDidScroll(cocos2d::extension::CCScrollView* view) {};
    virtual void scrollViewDidZoom(cocos2d::extension::CCScrollView* view) {};
	virtual void tableCellTouched(CCTableView* table, CCTableViewCell* cell);
    virtual CCTableViewCell* tableCellAtIndex(CCTableView *table, unsigned int idx);
	virtual unsigned int numberOfCellsInTableView(CCTableView *table);
	virtual cocos2d::CCSize tableCellSizeForIndex(cocos2d::extension::CCTableView *table, unsigned int idx);
private:
 //   CCPoint beginpos;
	//CCPoint endpos;
	//CCPoint movepos;
	//CCLayer* skills;

	void menuSkillchoose(CCObject* pSender);
};

#endif