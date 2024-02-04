//---------------------------------------------------------------------------

#include <fmx.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.fmx"
TTaskTracker *TaskTracker;
//---------------------------------------------------------------------------
__fastcall TTaskTracker::TTaskTracker(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TTaskTracker::AddButtonClick(TObject *Sender)
{
String taskText = TaskInputField->Text;

    // Check if the input is not empty before adding the task
    if (!taskText.Trim().IsEmpty())
    {
        TasksListBox->Items->Add(taskText);
        TaskInputField->Text = "";  // Clear the input field after adding a non-empty task
    }
    else
    {
        ShowMessage("Please enter a non-empty task.");  // Display a message indicating the input is empty
	}
}
//---------------------------------------------------------------------------
void __fastcall TTaskTracker::TasksListBoxItemClick(TCustomListBox * const Sender, TListBoxItem * const Item)

{
			int index = Item->Index;
            TasksListBox->Items->Delete(index);
}
//---------------------------------------------------------------------------

