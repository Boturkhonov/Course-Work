//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "AddEdit.h"
#include "main.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TAddEditForm *AddEditForm;
extern bool Add;
extern int NumberOfItems;
extern int CurrentItem;
//---------------------------------------------------------------------------
__fastcall TAddEditForm::TAddEditForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TAddEditForm::FormShow(TObject *Sender)
{
	if (Add) {
		NameEdit->Text = "Товар №" + IntToStr(NumberOfItems +1);
		ImporterEdit->Text = "";
		QuantitySpinEdit->Value = 1;
		ProducerEdit->Text = "";
	} else {
		NameEdit->Text = MainForm->MainStringGrid->Cells[0][CurrentItem];
		ImporterEdit->Text = MainForm->MainStringGrid->Cells[1][CurrentItem];
		QuantitySpinEdit->Value = StrToInt(MainForm->MainStringGrid->Cells[2][CurrentItem]);
		ProducerEdit->Text = MainForm->MainStringGrid->Cells[3][CurrentItem];
	}
}
//---------------------------------------------------------------------------
void __fastcall TAddEditForm::CancelButtonClick(TObject *Sender)
{
    Close();
}
//---------------------------------------------------------------------------
void __fastcall TAddEditForm::ImporterEditKeyPress(TObject *Sender, System::WideChar &Key)

{
	if (Key == vkBack || Key == vkSpace) {
		return;
	}
	if (isdigit(Key)) {
		Key = 0;
	}
}
//---------------------------------------------------------------------------
void __fastcall TAddEditForm::OkButtonClick(TObject *Sender)
{

	if (NameEdit->Text == "" || ImporterEdit->Text == "" || ProducerEdit->Text == "") {
		ShowMessage("Все поля должны быть заполнены!");
		return;
	}
	
	int d;
	if (Add) {
		NumberOfItems += 1;
		d = NumberOfItems;
		MainForm->MainStringGrid->RowCount = NumberOfItems + 1;
		if (NumberOfItems > 0) {
			MainForm->EditButton->Enabled = true;
			MainForm->DeleteButton->Enabled = true;
		}

	} else
		d = CurrentItem;

	MainForm->MainStringGrid->Cells[0][d] = NameEdit->Text;
	MainForm->MainStringGrid->Cells[1][d] = ImporterEdit->Text;
	MainForm->MainStringGrid->Cells[2][d] = IntToStr(QuantitySpinEdit->Value);
	MainForm->MainStringGrid->Cells[3][d] = ProducerEdit->Text;
	Close();
}
//---------------------------------------------------------------------------

