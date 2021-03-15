#if !defined(AFX_DIALOGCHIPSELECT_H__456309EB_988C_488F_BF5B_AB63840FB8D5__INCLUDED_)
#define AFX_DIALOGCHIPSELECT_H__456309EB_988C_488F_BF5B_AB63840FB8D5__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// DialogChipSelect.h : header file
//

#include "Resource.h"
#include "afxlinkctrl.h" // CMFCLinkCtrl

/////////////////////////////////////////////////////////////////////////////
// CDialogChipSelect dialog

class CDialogChipSelect : public CDialog
{
// Construction
public:
    CDialogChipSelect(CWnd *pParent = NULL);   // standard constructor


// Dialog Data
    //{{AFX_DATA(CDialogChipSelect)
    enum { IDD = IDD_DIALOG_CHIPSELECT };
    CMFCLinkCtrl	m_LinkUrl[3];
    //}}AFX_DATA


// Overrides
    // ClassWizard generated virtual function overrides
    //{{AFX_VIRTUAL(CDialogChipSelect)
protected:
    virtual void DoDataExchange(CDataExchange *pDX);    // DDX/DDV support
    //}}AFX_VIRTUAL

// Implementation
protected:
    int							m_nSelect;
    BOOL						m_bNeedChangeLang;

    // Generated message map functions
    //{{AFX_MSG(CDialogChipSelect)
    virtual BOOL OnInitDialog();
    virtual void OnOK();
    //}}AFX_MSG
    DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DIALOGCHIPSELECT_H__456309EB_988C_488F_BF5B_AB63840FB8D5__INCLUDED_)
