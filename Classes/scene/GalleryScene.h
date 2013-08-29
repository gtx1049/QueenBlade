#ifndef __GALLERYSCENE_H__
#define __GALLERYSCENE_H__

#include "cocos2d.h"
#include "controll\Loader.h"
#include "menu\menuset.h"
USING_NS_CC;

class GalleryScene : public CCScene
{
public:
	GalleryScene(void);
	~GalleryScene(void);

	virtual bool init(); 
	// implement the "static node()" method manually
    CREATE_FUNC(GalleryScene);
};

#endif