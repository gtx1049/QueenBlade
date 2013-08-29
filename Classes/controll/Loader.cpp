#include "Loader.h"

static const char* menukey[6] = {"main_startgame", "main_freegame", 
								 "main_mutigame", "main_gallery", 
								 "main_exit", "flow_back"};
static const char* menufile = "menustring.plist";

CCDictionary* Loader::menustring = NULL;
const char* Loader::fntfile = "fonts/qbfont.fnt";
const char* Loader::mains_wel = "welcome.png";
const char* Loader::story_bg = "castle.jpg";
const char* Loader::battle_bg = "avenue.jpg";

Loader::Loader(void)
{

}


Loader::~Loader(void)
{
}

void Loader::initLoader()
{
	menustring = CCDictionary::createWithContentsOfFile(menufile);
}

void Loader::releaseLoader()
{
	menustring->release();
}

const char* Loader::getMenustring(int keyindex)
{
	return ((CCString*)menustring->objectForKey(menukey[keyindex]))->m_sString.c_str();
}