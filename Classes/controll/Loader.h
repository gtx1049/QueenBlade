#ifndef __LOADER_H__
#define __LOADER_H__

#include "cocos2d.h"
//#include "menu\menuset.h"
USING_NS_CC;

//#define FNTFILE "fonts/qbfont.fnt"

class Loader
{
public:
	Loader(void);
	~Loader(void);

	static void initLoader();
	static void releaseLoader();

	static const char* getMenustring(int keyindex);

	static const char* fntfile;
	static const char* mains_wel;
	static const char* story_bg;
	static const char* battle_bg;
private:
	static CCDictionary* menustring;
};

#endif