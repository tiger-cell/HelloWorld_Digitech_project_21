//
// NotesPage.xaml.h
// Declaration of the NotesPage class
//

#pragma once

#include "NotesPage.g.h"
//#include "Library.h"

namespace HelloWorld
{
	/// <summary>
	/// An empty page that can be used on its own or navigated to within a Frame.
	/// </summary>
	[Windows::Foundation::Metadata::WebHostHidden]
	public ref class NotesPage sealed
	{
	public:
		NotesPage();
	private:
		void CreateFileButton_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void LoadNotesFile(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
	};
}
