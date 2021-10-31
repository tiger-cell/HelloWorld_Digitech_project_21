//
// MainPage.xaml.h
// Declaration of the MainPage class.
//

#pragma once

#include "MainPage.g.h"
#include "BlankPage.xaml.h"
#include "ToDoPage.xaml.h"
#include "NotesPage.xaml.h"
#include "TimerPage.xaml.h"

namespace HelloWorld
{
	/// <summary>
	/// An empty page that can be used on its own or navigated to within a Frame.
	/// </summary>
	public ref class MainPage sealed
	{
	public:
		MainPage();

	private:
		void Button_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void navHome(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void navToDo(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void nvTopLevelNav_Loaded(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void nvTopLevelNav_ItemInvoked(Windows::UI::Xaml::Controls::NavigationView^ sender, Windows::UI::Xaml::Controls::NavigationViewItemInvokedEventArgs^ args);
		void nvTopLevelNav_SelectionChanged(Windows::UI::Xaml::Controls::NavigationView^ sender, Windows::UI::Xaml::Controls::NavigationViewSelectionChangedEventArgs^ args);
	};
}
