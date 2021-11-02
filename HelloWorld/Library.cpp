#include "pch.h"
#include "Library.h"
#include <sstream>
#include <vector>
#include <string>

using namespace Windows::Storage;

Library::Library()
{
	/*if (ApplicationData::Current->LocalSettings->Values->HasKey("nDataItems")) {
		Library::numI = ApplicationData::Current->LocalSettings->Values->Lookup("nDataItems");
	}*/
	Library::numItems = 1; // Because of this code it was overwriting all the other saved values :(
	Library::cursorPos = 1;

	Library::recordings;
}

Platform::Object ^ Library::LoadSettings(Platform::String^ keyLoad, int num) {
	if (ApplicationData::Current->LocalSettings->Values->HasKey(keyLoad + num.ToString())) {
		return ApplicationData::Current->LocalSettings->Values->Lookup(keyLoad + num.ToString());
	}
	else
		return "";
	//return NULL; // what is this?
}

void Library::SaveSettings(Platform::String ^ keySave, Platform::Object ^ valueToSave) {
	ApplicationData::Current->LocalSettings->Values->Insert(keySave + numItems.ToString(), valueToSave);
	numItems++;
	cursorPos = numItems;
}

Platform::Object^ Library::LoadPrevSetting(Platform::String^ keyLoad)
{
	cursorPos--;
	//cursorPos++; // load Next.
	if (cursorPos == 0)
		cursorPos = numItems; // Wrap around.

	if (ApplicationData::Current->LocalSettings->Values->HasKey(keyLoad + cursorPos.ToString())) {
		return ApplicationData::Current->LocalSettings->Values->Lookup(keyLoad + cursorPos.ToString());
	}
	else
		return "No Data";
}
