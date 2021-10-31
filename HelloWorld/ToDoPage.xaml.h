//
// ToDoPage.xaml.h
// Declaration of the ToDoPage class
//

#pragma once

#include "ToDoPage.g.h"

namespace HelloWorld
{
	/// <summary>
	/// An empty page that can be used on its own or navigated to within a Frame.
	/// </summary>
	[Windows::Foundation::Metadata::WebHostHidden]
	public ref class ToDoPage sealed
	{
	public:
		ToDoPage();
	private:
		void CreateFileButton_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void LoadToDoFile(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
	};
}
