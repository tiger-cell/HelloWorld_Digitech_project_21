#pragma once

class Library
{
private:
	
public:
	int numItems;
	int cursorPos;
	std::vector<std::string> recordings;
	Library();

	Platform::Object ^ LoadSettings(Platform::String ^ keyLoad, int num);

	void SaveSettings(Platform::String ^ KeySave, Platform::Object ^ valueToSave);

	Platform::Object ^ LoadPrevSetting(Platform::String ^ keyLoad);
};

