//---------------------------------------------------------------------------

#ifndef TaskUnitH
#define TaskUnitH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Mask.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TTaskForm : public TForm
{
__published:	// IDE-managed Components
	TLabeledEdit *LabeledEdit;
	TMemo *TaskMemo;
	TLabel *TaskLabel;
	TButton *CloseButton;
	TButton *SearchButton;
	void __fastcall LabeledEditKeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall CloseButtonClick(TObject *Sender);
	void __fastcall SearchButtonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TTaskForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TTaskForm *TaskForm;
//---------------------------------------------------------------------------
#endif
