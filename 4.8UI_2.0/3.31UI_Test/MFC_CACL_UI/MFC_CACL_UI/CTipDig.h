﻿#pragma once


// CTipDig 对话框

class CTipDig : public CDialogEx
{
	DECLARE_DYNAMIC(CTipDig)

public:
	CTipDig(CWnd* pParent = nullptr);   // 标准构造函数
	virtual ~CTipDig();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedCancel();
};
