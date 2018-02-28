#pragma once
typedef multimap<string, Event> mmap;
typedef pair<string, Event> mmap_pair;

class Menu
{
private:
	mmap container;
public:
	Menu();
	Menu(mmap newContainer);
	~Menu();
	void start();
};

