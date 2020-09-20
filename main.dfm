object MainForm: TMainForm
  Left = 0
  Top = 0
  BorderStyle = bsSingle
  Caption = #1058#1072#1073#1083#1080#1094#1072' '#1101#1082#1089#1087#1086#1088#1090#1086#1074' '#1080' '#1080#1084#1087#1086#1088#1090#1086#1074' '#1090#1086#1074#1072#1088
  ClientHeight = 471
  ClientWidth = 744
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  Menu = MainMenu
  OldCreateOrder = False
  Position = poScreenCenter
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object MainStringGrid: TStringGrid
    Left = 0
    Top = 0
    Width = 744
    Height = 409
    Align = alTop
    ColCount = 4
    DefaultColWidth = 187
    FixedCols = 0
    RowCount = 2
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = []
    Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine, goRowSelect]
    ParentFont = False
    ScrollBars = ssVertical
    TabOrder = 0
    OnSelectCell = MainStringGridSelectCell
    ColWidths = (
      187
      179
      193
      187)
    RowHeights = (
      24
      24)
  end
  object AddButton: TButton
    Left = 24
    Top = 424
    Width = 100
    Height = 35
    Caption = #1044#1086#1073#1072#1074#1080#1090#1100
    TabOrder = 1
    OnClick = AddButtonClick
  end
  object EditButton: TButton
    Left = 152
    Top = 424
    Width = 100
    Height = 35
    Caption = #1048#1079#1084#1077#1085#1080#1090#1100
    Enabled = False
    TabOrder = 2
    OnClick = EditButtonClick
  end
  object DeleteButton: TButton
    Left = 280
    Top = 424
    Width = 100
    Height = 35
    Caption = #1059#1076#1072#1083#1080#1090#1100
    Enabled = False
    TabOrder = 3
    OnClick = DeleteButtonClick
  end
  object MainMenu: TMainMenu
    Left = 504
    Top = 424
    object FileMenu: TMenuItem
      Caption = #1060#1072#1081#1083
      object OpenMenu: TMenuItem
        Action = OpenAction
      end
      object SaveMenu: TMenuItem
        Action = SaveAction
      end
      object ExitMenu: TMenuItem
        Action = ExitAction
      end
    end
    object TasksMenu: TMenuItem
      Caption = #1047#1072#1087#1088#1086#1089#1099
      object Task1Menu: TMenuItem
        Action = Task1Action
      end
      object Task2Menu: TMenuItem
        Action = Task2Action
      end
      object Task3Menu: TMenuItem
        Action = Task3Action
      end
      object Task4Menu: TMenuItem
        Action = Task4Action
      end
    end
  end
  object ActionList: TActionList
    Left = 568
    Top = 424
    object OpenAction: TAction
      Category = 'File'
      Caption = #1054#1090#1082#1088#1099#1090#1100
      ShortCut = 16463
      OnExecute = OpenActionExecute
    end
    object SaveAction: TAction
      Category = 'File'
      Caption = #1057#1086#1093#1088#1072#1085#1080#1090#1100
      ShortCut = 16467
      OnExecute = SaveActionExecute
    end
    object ExitAction: TAction
      Category = 'File'
      Caption = #1042#1099#1093#1086#1076
      OnExecute = ExitActionExecute
    end
    object Task1Action: TAction
      Category = 'Tasks'
      Caption = #1053#1072#1081#1090#1080' '#1089#1090#1088#1072#1085#1099', '#1074' '#1082#1086#1090#1086#1088#1099#1077' '#1101#1082#1089#1087#1086#1088#1090#1080#1088#1091#1077#1090#1089#1103' '#1076#1072#1085#1085#1099#1081' '#1090#1086#1074#1072#1088
      OnExecute = Task1ActionExecute
    end
    object Task2Action: TAction
      Category = 'Tasks'
      Caption = #1042#1099#1074#1077#1089#1090#1080' '#1089#1087#1080#1089#1086#1082' '#1090#1086#1074#1072#1088#1086#1074', '#1087#1086#1089#1090#1072#1074#1083#1103#1077#1084#1099#1093' '#1091#1082#1072#1079#1072#1085#1085#1086#1081' '#1089#1090#1088#1072#1085#1086#1081
      OnExecute = Task2ActionExecute
    end
    object Task3Action: TAction
      Category = 'Tasks'
      Caption = #1042#1099#1074#1077#1089#1090#1080' '#1085#1072#1080#1084#1077#1085#1086#1074#1072#1085#1080#1077' '#1090#1086#1074#1072#1088#1086#1074', '#1085#1072#1095#1080#1085#1072#1102#1097#1080#1093#1089#1103' '#1089' '#1079#1072#1076#1072#1085#1085#1086#1081' '#1073#1091#1082#1074#1099
      OnExecute = Task3ActionExecute
    end
    object Task4Action: TAction
      Category = 'Tasks'
      Caption = #1042#1099#1074#1077#1089#1090#1080' '#1086#1073#1097#1080#1081' '#1086#1073#1098#1077#1084' '#1090#1086#1074#1072#1088#1086#1074', '#1087#1086#1089#1090#1072#1074#1083#1103#1077#1084#1099#1093' '#1074' '#1091#1082#1072#1079#1072#1085#1085#1091#1102' '#1089#1090#1088#1072#1085#1091
      OnExecute = Task4ActionExecute
    end
  end
  object SaveDialog: TSaveDialog
    Filter = #1041#1072#1079#1072' '#1076#1072#1085#1085#1099#1093' (DAT)|*.dat'
    Left = 632
    Top = 424
  end
  object OpenDialog: TOpenDialog
    Filter = #1041#1072#1079#1072' '#1076#1072#1085#1085#1099#1093' (DAT)|*.dat'
    Left = 696
    Top = 424
  end
end
