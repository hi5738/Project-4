/*
File: Reminder.cpp
Purpose: View part of Model-View-Controller Architecture. Multimap is the Model of Model-View-Controller Architecture.
Edited from older files to become a static library.
Programmed By: Derek Chan
*/
#pragma once

class Reminder
{
private:
	typedef multimap<string, Event> mmap;
	typedef pair<string, Event> mmap_pair;
	mmap container;
	Menu newMenu;
public:
	Reminder();
	Reminder(string filepath, int thisMonth, int thisDay, int thisYear);
	~Reminder();

	void RemEdit();
};

