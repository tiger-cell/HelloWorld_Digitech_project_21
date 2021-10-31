//
// MainPage.xaml.cpp
// Implementation of the MainPage class.
//

#include "pch.h"
#include "MainPage.xaml.h"

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

// The Blank Page item template is documented at https://go.microsoft.com/fwlink/?LinkId=402352&clcid=0x409

MainPage::MainPage()
{
	InitializeComponent();
}

//region NavigationView event handlers

//endregion

void HelloWorld::MainPage::Button_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	// This takes the enter text in namepInput TextBox control and uses it to create a greeting.
	// The greetingsOutput TextBox displays the result.
	//greetingOutput->Text = "Hello, " + nameInput->Text + "!";
}


void HelloWorld::MainPage::navHome(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	//greetingOutput->Text = "Sorry, the 'Home' button doesn't work yet :(";
	//this->Frame->Navigate(BlankPage::typeid);
	contentFrame->Navigate(BlankPage::typeid);
}


void HelloWorld::MainPage::navToDo(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	//greetingOutput->Text = "Sorry, the 'To Do' button doesn't work yet :(";
	contentFrame->Navigate(ToDoPage::typeid);
}

void HelloWorld::MainPage::nvTopLevelNav_Loaded(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	//NavBar->SelectedItem = "navHome"; // Load that one first ?
}


void HelloWorld::MainPage::nvTopLevelNav_ItemInvoked(Windows::UI::Xaml::Controls::NavigationView^ sender, Windows::UI::Xaml::Controls::NavigationViewItemInvokedEventArgs^ args)
{	
	if (args->IsSettingsInvoked) {
		// Do something: go to settings page.
	}
	else {
		auto navItemTag = args->InvokedItemContainer->Tag->ToString();

		if (navItemTag == "home") {
			contentFrame->Navigate(Windows::UI::Xaml::Interop::TypeName(BlankPage::typeid));
		}
		else if (navItemTag == "todo") {
			contentFrame->Navigate(Windows::UI::Xaml::Interop::TypeName(ToDoPage::typeid));
		}
		else if (navItemTag == "notes") {
			contentFrame->Navigate(Windows::UI::Xaml::Interop::TypeName(NotesPage::typeid));
		}
		else if (navItemTag == "timer") {
			contentFrame->Navigate(Windows::UI::Xaml::Interop::TypeName(TimerPage::typeid));
		}
	}
}


void HelloWorld::MainPage::nvTopLevelNav_SelectionChanged(Windows::UI::Xaml::Controls::NavigationView^ sender, Windows::UI::Xaml::Controls::NavigationViewSelectionChangedEventArgs^ args)
{
}
