object AddEditForm: TAddEditForm
  Left = 0
  Top = 0
  BorderStyle = bsDialog
  Caption = 'AddEditForm'
  ClientHeight = 211
  ClientWidth = 457
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poMainFormCenter
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object NameLabel: TLabel
    Left = 16
    Top = 16
    Width = 163
    Height = 18
    Caption = #1053#1072#1080#1084#1077#1085#1086#1074#1072#1085#1080#1077' '#1090#1086#1074#1072#1088#1072': '
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -15
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object ImporterLabel: TLabel
    Left = 16
    Top = 56
    Width = 130
    Height = 18
    Caption = #1057#1090#1088#1072#1085#1072' '#1080#1084#1087#1086#1088#1090#1105#1088': '
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -15
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object QuantityLabel: TLabel
    Left = 16
    Top = 96
    Width = 151
    Height = 18
    Caption = #1054#1073#1098#1077#1084' '#1087#1072#1088#1090#1080#1080' ('#1096#1090'.): '
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -15
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object ProducerLabel: TLabel
    Left = 16
    Top = 136
    Width = 167
    Height = 18
    Caption = 'C'#1090#1088#1072#1085#1072'-'#1087#1088#1086#1080#1079#1074#1086#1076#1080#1090#1077#1083#1100': '
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -15
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object NameEdit: TEdit
    Left = 191
    Top = 16
    Width = 242
    Height = 21
    MaxLength = 20
    TabOrder = 0
  end
  object ImporterEdit: TEdit
    Left = 191
    Top = 57
    Width = 242
    Height = 21
    MaxLength = 20
    TabOrder = 1
    OnKeyPress = ImporterEditKeyPress
  end
  object QuantitySpinEdit: TSpinEdit
    Left = 191
    Top = 97
    Width = 121
    Height = 22
    MaxLength = 9
    MaxValue = 1000000000
    MinValue = 1
    TabOrder = 2
    Value = 0
  end
  object ProducerEdit: TEdit
    Left = 191
    Top = 137
    Width = 242
    Height = 21
    MaxLength = 20
    TabOrder = 3
    OnKeyPress = ImporterEditKeyPress
  end
  object OkButton: TButton
    Left = 128
    Top = 178
    Width = 75
    Height = 25
    Caption = #1054#1050
    TabOrder = 4
    OnClick = OkButtonClick
  end
  object CancelButton: TButton
    Left = 256
    Top = 178
    Width = 75
    Height = 25
    Caption = #1054#1090#1084#1077#1085#1072
    TabOrder = 5
    OnClick = CancelButtonClick
  end
end
