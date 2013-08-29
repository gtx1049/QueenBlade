#ifndef __HEROENTITY_H__
#define __HEROENTITY_H__

class HeroEntity
{
public:
	HeroEntity(void);
	~HeroEntity(void);

	const static int PAGECOUNT = 32;
	const static int TABLECOUNT = 64;
	const static char INVALID = 0xFF;

	char getTranspage(int page, int trans);
	void setStatus(int status);
	bool isLose();
private:

	int hp;
	int status;
	int page;
	char table[PAGECOUNT][TABLECOUNT];
	
	bool skilltype[PAGECOUNT];
	char skillcolor[PAGECOUNT];
	char skillpage[PAGECOUNT];
	char skillmod[PAGECOUNT];
};

#endif