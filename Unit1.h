//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.Edit.hpp>
#include <FMX.Layouts.hpp>
#include <FMX.ListBox.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
#include <FMX.Objects.hpp>
//---------------------------------------------------------------------------
class TTaskTracker : public TForm
{
__published:	// IDE-managed Components
	TLabel *AddTaskLabel;
	TEdit *TaskInputField;
	TButton *AddButton;
	TListBox *TasksListBox;
	TComboBox *ComboBox1;
	TImage *lightImage;
	TImage *darkImage;
	void __fastcall AddButtonClick(TObject *Sender);
	void __fastcall TasksListBoxItemClick(TCustomListBox * const Sender, TListBoxItem * const Item);
	void __fastcall lightImageClick(TObject *Sender);

private:	// User declarations
public:		// User declarations
	__fastcall TTaskTracker(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TTaskTracker *TaskTracker;
//---------------------------------------------------------------------------
#endif
