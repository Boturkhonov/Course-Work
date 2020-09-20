object TaskForm: TTaskForm
  Left = 0
  Top = 0
  BorderStyle = bsDialog
  Caption = #1054#1082#1085#1086' '#1079#1072#1087#1088#1086#1089#1072
  ClientHeight = 260
  ClientWidth = 472
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
  object TaskLabel: TLabel
    Left = 32
    Top = 75
    Width = 53
    Height = 14
    Caption = 'TaskLabel'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object LabeledEdit: TLabeledEdit
    Left = 32
    Top = 40
    Width = 121
    Height = 21
    EditLabel.Width = 65
    EditLabel.Height = 16
    EditLabel.Caption = 'LabeledEdit'
    EditLabel.Font.Charset = DEFAULT_CHARSET
    EditLabel.Font.Color = clWindowText
    EditLabel.Font.Height = -13
    EditLabel.Font.Name = 'Tahoma'
    EditLabel.Font.Style = []
    EditLabel.ParentFont = False
    TabOrder = 0
    OnKeyPress = LabeledEditKeyPress
  end
  object TaskMemo: TMemo
    Left = 32
    Top = 94
    Width = 409
    Height = 115
    Lines.Strings = (
      '')
    ReadOnly = True
    TabOrder = 1
  end
  object CloseButton: TButton
    Left = 366
    Top = 227
    Width = 75
    Height = 25
    Caption = #1047#1072#1082#1088#1099#1090#1100
    TabOrder = 2
    OnClick = CloseButtonClick
  end
  object SearchButton: TButton
    Left = 175
    Top = 38
    Width = 75
    Height = 25
    Caption = #1053#1072#1081#1090#1080
    TabOrder = 3
    OnClick = SearchButtonClick
  end
end
