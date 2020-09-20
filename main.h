//---------------------------------------------------------------------------

#ifndef mainH
#define mainH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <System.Actions.hpp>
#include <Vcl.ActnList.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.Dialogs.hpp>
#include <Vcl.Grids.hpp>
//---------------------------------------------------------------------------
class TMainForm : public TForm
{
__published:	// IDE-managed Components
	TMainMenu *MainMenu;
	TActionList *ActionList;
	TAction *OpenAction;
	TAction *SaveAction;
	TAction *ExitAction;
	TAction *Task1Action;
	TAction *Task2Action;
	TAction *Task3Action;
	TAction *Task4Action;
	TMenuItem *FileMenu;
	TMenuItem *OpenMenu;
	TMenuItem *SaveMenu;
	TMenuItem *ExitMenu;
	TMenuItem *TasksMenu;
	TMenuItem *Task1Menu;
	TMenuItem *Task2Menu;
	TMenuItem *Task3Menu;
	TMenuItem *Task4Menu;
	TSaveDialog *SaveDialog;
	TOpenDialog *OpenDialog;
	TStringGrid *MainStringGrid;
	TButton *AddButton;
	TButton *EditButton;
	TButton *DeleteButton;
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall OpenActionExecute(TObject *Sender);
	void __fastcall SaveActionExecute(TObject *Sender);
	void __fastcall ExitActionExecute(TObject *Sender);
	void __fastcall AddButtonClick(TObject *Sender);
	void __fastcall EditButtonClick(TObject *Sender);
	void __fastcall MainStringGridSelectCell(TObject *Sender, int ACol, int ARow, bool &CanSelect);
	void __fastcall DeleteButtonClick(TObject *Sender);
	void __fastcall Task1ActionExecute(TObject *Sender);
	void __fastcall Task2ActionExecute(TObject *Sender);
	void __fastcall Task3ActionExecute(TObject *Sender);
	void __fastcall Task4ActionExecute(TObject *Sender);

private:	// User declarations
public:		// User declarations
	__fastcall TMainForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TMainForm *MainForm;
//---------------------------------------------------------------------------
#endif
