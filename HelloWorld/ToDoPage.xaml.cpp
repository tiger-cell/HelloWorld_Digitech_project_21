//
// ToDoPage.xaml.cpp
// Implementation of the ToDoPage class
//

#include "pch.h"
#include "ToDoPage.xaml.h"
#include <vector>

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

Library librarytd;

ToDoPage::ToDoPage()
{
	InitializeComponent();
    int num = 1;
    while (librarytd.LoadSettings("datatd", num)->ToString() != "") {
        LBBottomList->Items->Append(librarytd.LoadSettings("datatd", num)->ToString());
        num++;
    }
    librarytd.numItems = num;
    librarytd.cursorPos = num;
}



void HelloWorld::ToDoPage::CreateFileButton_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	librarytd.SaveSettings("datatd", itemInput->Text);
	LBBottomList->Items->Append(itemInput->Text->ToString());
}

void HelloWorld::ToDoPage::LoadToDoFile(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
    itemInput->Text = librarytd.LoadPrevSetting("datatd")->ToString();
}