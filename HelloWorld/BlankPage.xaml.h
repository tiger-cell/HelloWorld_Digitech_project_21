//
// BlankPage.xaml.h
// Declaration of the BlankPage class
//

#pragma once

#include "BlankPage.g.h"
#include "MainPage.xaml.h"

namespace HelloWorld
{
	/// <summary>
	/// An empty page that can be used on its own or navigated to within a Frame.
	/// </summary>
	[Windows::Foundation::Metadata::WebHostHidden]
	public ref class BlankPage sealed
	{
	public:
		BlankPage();
	private:
		void Button_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void Button_Click_1(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
	};
}
