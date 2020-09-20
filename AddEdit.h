//---------------------------------------------------------------------------

#ifndef AddEditH
#define AddEditH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Samples.Spin.hpp>
#include <Vcl.Mask.hpp>
//---------------------------------------------------------------------------
class TAddEditForm : public TForm
{
__published:	// IDE-managed Components
	TLabel *NameLabel;
	TEdit *NameEdit;
	TLabel *ImporterLabel;
	TEdit *ImporterEdit;
	TLabel *QuantityLabel;
	TSpinEdit *QuantitySpinEdit;
	TLabel *ProducerLabel;
	TEdit *ProducerEdit;
	TButton *OkButton;
	TButton *CancelButton;
	void __fastcall CancelButtonClick(TObject *Sender);
	void __fastcall ImporterEditKeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall OkButtonClick(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TAddEditForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TAddEditForm *AddEditForm;
//---------------------------------------------------------------------------
#endif
