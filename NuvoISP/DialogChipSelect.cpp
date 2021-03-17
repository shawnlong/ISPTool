// DialogChipSelect.cpp : implementation file
//

#include "stdafx.h"
#include <string>
#include <vector>
#include "DialogChipSelect.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CDialogChipSelect dialog


CDialogChipSelect::CDialogChipSelect(CWnd *pParent /*=NULL*/)
    : CDialog(CDialogChipSelect::IDD, pParent)
    , m_nSelect(0) // 0: LDROM, 1: MKROM
{
}


void CDialogChipSelect::DoDataExchange(CDataExchange *pDX)
{
    CDialog::DoDataExchange(pDX);
    //{{AFX_DATA_MAP(CDialogChipSelect)
    DDX_Control(pDX, IDC_LINK_GITHUB, m_LinkUrl[0]);
    DDX_Control(pDX, IDC_LINK_GITEE, m_LinkUrl[1]);
    DDX_Control(pDX, IDC_LINK_GITLAB, m_LinkUrl[2]);
    //}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CDialogChipSelect, CDialog)
    //{{AFX_MSG_MAP(CDialogChipSelect)
    //}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDialogChipSelect message handlers

BOOL CDialogChipSelect::OnInitDialog()
{
    CDialog::OnInitDialog();
    const TCHAR *_sURL[] = {
        _T("https://github.com/OpenNuvoton/ISPTool/"),
        _T("https://gitee.com/OpenNuvoton/ISPTool/"),
        _T("https://gitlab.com/OpenNuvoton/nuvoton-tools/ISPTool/")
    };

    for (int i = 0; i < 3; i++) {
        m_LinkUrl[i].SetWindowText(_sURL[i]);
        m_LinkUrl[i].SetURL(_sURL[i]);
        m_LinkUrl[i].SizeToContent();
    }

    CheckDlgButton(IDC_RADIO1, 1);
    return TRUE;  // return TRUE unless you set the focus to a control
    // EXCEPTION: OCX Property Pages should return FALSE
}

void CDialogChipSelect::OnOK()
{
    m_nSelect = IsDlgButtonChecked(IDC_RADIO1);
    CDialog::OnOK();
}
