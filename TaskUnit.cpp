//---------------------------------------------------------------------------

#include <vcl.h>
#include <vector>
#pragma hdrstop

#include "TaskUnit.h"
#include "main.h"
using namespace std;
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TTaskForm *TaskForm;
extern int CurrentTask;
vector<String> Res;
//---------------------------------------------------------------------------
__fastcall TTaskForm::TTaskForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TTaskForm::LabeledEditKeyPress(TObject *Sender, System::WideChar &Key)
{
	if (CurrentTask == 3) {

		if (Key == vkBack) {
			return;
		}
		if (LabeledEdit->Text.Length() > 0 || isdigit(Key)) {
			Key = 0;
		}
			
	}
	
}
//---------------------------------------------------------------------------
void __fastcall TTaskForm::FormShow(TObject *Sender)
{
	LabeledEdit->Text = "";
	TaskMemo->Text = "";	
}
//---------------------------------------------------------------------------
void __fastcall TTaskForm::CloseButtonClick(TObject *Sender)
{
	Close();	
}
//---------------------------------------------------------------------------
void __fastcall TTaskForm::SearchButtonClick(TObject *Sender)
{
	String Name;
	int c, first, second;
	char Letter;
	Res.clear();
	long long sum = 0;
	switch (CurrentTask) {
	case 1:
	case 2:
		if (CurrentTask == 1) {
			first = 0;
			second = 1;
		} else {
			first = 3;
			second = 0;
        }
		Name = LabeledEdit->Text;
		c = 0;
		for (int i = 1; i < MainForm->MainStringGrid->RowCount; i++) {
			if (MainForm->MainStringGrid->Cells[first][i].LowerCase() == Name.LowerCase()) {
				bool hasGot = false;
				for (int j = 0; j < Res.size(); j++) {
					if (Res[j].LowerCase() == MainForm->MainStringGrid->Cells[second][i].LowerCase()) {
						hasGot = true;
						break;
					}
				}
				if (hasGot == false) {
					Res.push_back(MainForm->MainStringGrid->Cells[second][i]);
				}
				c++;
			}
		}

		if (c == 0) {
			if (CurrentTask == 1) {
				ShowMessage("Товар не найдена");
			} else
				ShowMessage("Cтрана не найдена");
			return;
		}

		TaskMemo->Lines->Clear();

		for (int i = 0; i < Res.size(); i++) {
			TaskMemo->Lines->Add(Res[i]);
		}
	break;
	case 3:

		Name = LabeledEdit->Text;
		c = 0;
		for (int i = 1; i < MainForm->MainStringGrid->RowCount; i++) {
			String Item = MainForm->MainStringGrid->Cells[0][i];
			if (Item.SubString(0,1).LowerCase() == Name.SubString(0,1).LowerCase()) {
				bool hasGot = false;
				for (int j = 0; j < Res.size(); j++) {
					if (Res[j].LowerCase() == Item.SubString(0,1).LowerCase()) {
						hasGot = true;
						break;
					}
				}
				if (hasGot == false) {
					Res.push_back(MainForm->MainStringGrid->Cells[0][i]);
				}
				c++;
			}
		}

		if (c == 0) {
			ShowMessage("Товар, начинающий с буквой '"+Name+"' не найден");
			return;
		}

		TaskMemo->Lines->Clear();

		for (int i = 0; i < Res.size(); i++) {
			TaskMemo->Lines->Add(Res[i]);
		}

	break;
	case 4:
		Name = LabeledEdit->Text;

		for (int i = 1; i < MainForm->MainStringGrid->RowCount; i++) {
			if (MainForm->MainStringGrid->Cells[1][i].LowerCase() == Name.LowerCase()) {
				sum += MainForm->MainStringGrid->Cells[2][i].ToInt();
			}
		}
		TaskMemo->Text = IntToStr(sum);

	break;
	default:
	break;
	}	
}
//---------------------------------------------------------------------------
