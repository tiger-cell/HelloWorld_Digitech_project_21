//
// BlankPage.xaml.cpp
// Implementation of the BlankPage class
//

#include "pch.h"
#include "BlankPage.xaml.h"

using namespace HelloWorld;

using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Controls::Primitives;
using namespace Windows::UI::Xaml::Data;
using namespace Windows::UI::Xaml::Input;
using namespace Windows::UI::Xaml::Media;
using namespace Windows::UI::Xaml::Navigation;

// The Blank Page item template is documented at https://go.microsoft.com/fwlink/?LinkId=234238

BlankPage::BlankPage()
{
	InitializeComponent();
}

void HelloWorld::BlankPage::Button_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	// MessageDialog msgDlg(L"Button Click Event", L"C++/UWP");

}

void HelloWorld::BlankPage::Button_Click_1(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	// Nil
}
