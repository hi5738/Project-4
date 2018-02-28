#include "stdafx.h"
#include "Event.h"
#include "RemMenu.h"
#include "Reminder.h"


Reminder::Reminder()
{
}

Reminder::Reminder(string filepath, int thisMonth, int thisDay, int thisYear) {
	char title[256], description[256];
	char hour[256], minute[256], month[256], day[256], year[256];

	ifstream fin;
	
	fin.open(filepath);

	if (!fin.is_open()) {
		cout << "NO FILE FOUND!" << endl;
	}

	while (fin.getline(title, 256)) {

		fin.getline(description, 256);

		fin.getline(hour, 256);

		fin.getline(minute, 256);

		fin.getline(month, 256);

		fin.getline(day, 256);

		fin.getline(year, 256);

		if ((stoi(string(month)) == thisMonth) && (stoi(string(day)) == thisDay) && (stoi(string(year)) == thisYear)) {
			cout << string(title) << endl << "->" << string(description) << endl;
		}

		Event newEvent = Event(string(title), stoi(string(day)), MONTH(stoi(string(month))), stoi(string(year)), stoi(string(hour)), stoi(string(minute)), string(description));

		container.insert(mmap_pair(title, newEvent));
	}

	fin.close();

	newMenu = Menu(container);
}

Reminder::~Reminder()
{
}

void Reminder::RemEdit() {
	newMenu.start();
}
