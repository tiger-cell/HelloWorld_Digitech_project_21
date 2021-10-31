#pragma once

class Library
{
private:
	
public:
	int numItems;
	int cursorPos;
	Library();

	Platform::Object ^ LoadSettings(Platform::String ^ keyLoad, int num);

	void SaveSettings(Platform::String ^ KeySave, Platform::Object ^ valueToSave);

	Platform::Object ^ LoadPrevSetting(Platform::String ^ keyLoad);
};

