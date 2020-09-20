//---------------------------------------------------------------------------

#include <vcl.h>
#include <string>
#pragma hdrstop

#include "main.h"
#include "AddEdit.h"
#include "TaskUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TMainForm *MainForm;

bool Add;
int NumberOfItems;
int CurrentItem = 1;
int CurrentTask;
FILE *F;

struct Export {
	char Name[21];
	char Importer[21];
	int	 Quantity;
	char Exporter[21];
};

Export MyList;

//---------------------------------------------------------------------------
__fastcall TMainForm::TMainForm(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TMainForm::FormCreate(TObject *Sender)
{
	MainStringGrid->Cells[0][0] = "������������";
	MainStringGrid->Cells[1][0] = "������-�������";
	MainStringGrid->Cells[2][0] = "����� ������������ ������ (��.)";
	MainStringGrid->Cells[3][0] = "������-�������������";
}
//------------------------------Opening File---------------------------------
void __fastcall TMainForm::OpenActionExecute(TObject *Sender)
{
	if (OpenDialog->Execute() && FileExists(OpenDialog->FileName)) {
	//��������� ���� ��� ������
	F = fopen(AnsiString(OpenDialog->FileName).c_str(), "rt");
	int i = 1;
	MainStringGrid->RowCount = 2;

	while (!feof(F))//���� �� ����� �����
	{
	  fread(&MyList,sizeof(Export),1,F);
	 //������� ������ � ������
	  MainStringGrid->Cells[0][i] = MyList.Name;
	  MainStringGrid->Cells[1][i] = MyList.Importer;
	  MainStringGrid->Cells[2][i] = IntToStr(MyList.Quantity);
	  MainStringGrid->Cells[3][i] = MyList.Exporter;
	  i++;
	}
	NumberOfItems = i-2;
	MainStringGrid->RowCount = i-1;

	fclose(F);//��������� ����
  }
  else ShowMessage("���� �� ����������!");
  if(NumberOfItems != 0){
	EditButton->Enabled = true;
	DeleteButton->Enabled = true;
  }

}
//----------------------------Saving File-----------------------------------
void __fastcall TMainForm::SaveActionExecute(TObject *Sender)
{
	if (SaveDialog->Execute()) {

		if (FileExists(SaveDialog->FileName)){
			if (MessageDlg("���� � ����� ������ ��� ����������. ������������?", mtConfirmation, TMsgDlgButtons() << mbYes << mbNo, 0)==mrNo){
			  exit;
			}
		}
		//��������� ���� ��� ������
		F=fopen(AnsiString(SaveDialog->FileName).c_str(), "wt");

		int i = 0;
		while (i != MainStringGrid->RowCount-1){
			i++;
			strcpy(MyList.Name, AnsiString(MainStringGrid->Cells[0][i]).c_str());
			strcpy(MyList.Importer, AnsiString(MainStringGrid->Cells[1][i]).c_str());
			MyList.Quantity = StrToInt(MainStringGrid->Cells[2][i].c_str());
			strcpy(MyList.Exporter, AnsiString(MainStringGrid->Cells[3][i]).c_str());
			fwrite(&MyList,sizeof(Export),1,F); //��������� ������ � ����
		}
		fclose(F); //��������� ����
	}

}
//---------------------------------------------------------------------------
void __fastcall TMainForm::ExitActionExecute(TObject *Sender)
{
	Application->Terminate();
}
//---------------------------------------------------------------------------
void __fastcall TMainForm::AddButtonClick(TObject *Sender)
{
	AddEditForm->Caption = "�������� ������";
	Add = true;
	AddEditForm->ShowModal();
}
//---------------------------------------------------------------------------
void __fastcall TMainForm::EditButtonClick(TObject *Sender)
{
    if (MainStringGrid->Cells[0][CurrentItem] == "") {
		return;
	}
	AddEditForm->Caption = "�������� ������";
	Add = false;
	AddEditForm->ShowModal();
}
//---------------------------------------------------------------------------
void __fastcall TMainForm::DeleteButtonClick(TObject *Sender)
{
	if (MainStringGrid->Cells[0][CurrentItem] == "") {
		return;
	}
	for (int i = CurrentItem; i < MainStringGrid->RowCount; i++) {
		for (int j = 0; j < 4; j++) {
			MainStringGrid->Cells[j][i] = MainStringGrid->Cells[j][i+1];
		}
	}
	NumberOfItems--;
	MainStringGrid->RowCount =  NumberOfItems + 1;
	if (NumberOfItems == 0) {
		EditButton->Enabled = false;
		DeleteButton->Enabled = false;
	}

}
//---------------------------------------------------------------------------
void __fastcall TMainForm::MainStringGridSelectCell(TObject *Sender, int ACol, int ARow,
		  bool &CanSelect)
{
	CurrentItem = ARow;
}
//---------------------------------------------------------------------------
void __fastcall TMainForm::Task1ActionExecute(TObject *Sender)
{
	TaskForm->Caption = "����� �����, � ������� �������������� ������ �����";
	TaskForm->LabeledEdit->EditLabel->Caption = "������� �������� ������: ";
	TaskForm->TaskLabel->Caption = "������ �����, � ������� �������������� ������ �����: ";
	CurrentTask = 1;
	TaskForm->ShowModal();
}
//---------------------------------------------------------------------------
void __fastcall TMainForm::Task2ActionExecute(TObject *Sender)
{
	TaskForm->Caption = "����� ������ �������, ������������ ��������� �������";
	TaskForm->LabeledEdit->EditLabel->Caption = "������� �������� ������: ";
	TaskForm->TaskLabel->Caption = "������ �������, ������������ ��������� �������: ";
	CurrentTask = 2;
	TaskForm->ShowModal();
}
//---------------------------------------------------------------------------
void __fastcall TMainForm::Task3ActionExecute(TObject *Sender)
{
	TaskForm->Caption = "����� ������������ �������, ������������ � �������� �����";
	TaskForm->LabeledEdit->EditLabel->Caption = "������� �����: ";
	TaskForm->TaskLabel->Caption = "������ �������, ������������ � �������� �����: ";
	CurrentTask = 3;
	TaskForm->ShowModal();
}
//---------------------------------------------------------------------------
void __fastcall TMainForm::Task4ActionExecute(TObject *Sender)
{
	TaskForm->Caption = "����� ����� ����� �������, ������������ � ��������� ������";
	TaskForm->LabeledEdit->EditLabel->Caption = "������� �������� ������: ";
	TaskForm->TaskLabel->Caption = "����� ����� �������, ������������ � ��������� ������: ";
	CurrentTask = 4;
	TaskForm->ShowModal();
}
//---------------------------------------------------------------------------
