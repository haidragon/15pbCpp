// MyDlg.cpp : ʵ���ļ�
//

#include "stdafx.h"
#include "MyDlg.h"
#include "afxdialogex.h"


// CMyDlg �Ի���

IMPLEMENT_DYNAMIC(CMyDlg, CDialogEx)

CMyDlg::CMyDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{

}

CMyDlg::~CMyDlg()
{
}

void CMyDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(CMyDlg, CDialogEx)
END_MESSAGE_MAP()


// CMyDlg ��Ϣ��������