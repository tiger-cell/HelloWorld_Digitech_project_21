//
// NotesPage.xaml.cpp
// Implementation of the NotesPage class
//

#include "pch.h"
#include "NotesPage.xaml.h"

using namespace HelloWorld;

using namespace concurrency;
using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::Storage;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Controls::Primitives;
using namespace Windows::UI::Xaml::Data;
using namespace Windows::UI::Xaml::Input;
using namespace Windows::UI::Xaml::Media;
using namespace Windows::UI::Xaml::Navigation;

// The Blank Page item template is documented at https://go.microsoft.com/fwlink/?LinkId=234238

Library library;

NotesPage::NotesPage()
{
	InitializeComponent();
    int num = 1;
    while (library.LoadSettings("data", num)->ToString() != "") {
        LBBottomList->Items->Append(library.LoadSettings("data", num)->ToString());
        num++;
    }
    library.numItems = num;
    library.cursorPos = num;
}


void HelloWorld::NotesPage::CreateFileButton_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
    library.SaveSettings("data", noteInput->Text);
    notesDisplayText->Text = noteInput->Text;
    LBBottomList->Items->Append(notesDisplayText->Text->ToString());

}


void HelloWorld::NotesPage::LoadNotesFile(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
    //Library library;
    notesDisplayText->Text = library.LoadPrevSetting("data")->ToString();
}
