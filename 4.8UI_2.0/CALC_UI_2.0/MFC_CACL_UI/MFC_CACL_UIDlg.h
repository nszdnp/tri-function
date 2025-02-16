﻿
// MFC_CACL_UIDlg.h: 头文件
//

#pragma once

enum Calculator_Flag {
	flag_Sum,
	flag_Sub,
	flag_Mult,
	flag_Divi,
	flag_Cos,
	flag_Sin,
	flag_Arcsin,
	flag_Arctan,
	flag_Null
};


// CMFCCACLUIDlg 对话框
class CMFCCACLUIDlg : public CDialogEx
{
// 构造
public:
	CMFCCACLUIDlg(CWnd* pParent = nullptr);	// 标准构造函数
	void SaveFirstValue();		//保存第一个输入值
// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MFC_CACL_UI_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
private:
	CString mStrInput;			//编辑框1内的字符串
	CString mTempStr;
	double mNum1;				//输入的2个值
	double mNum2;
	Calculator_Flag mFlag;		//运算符号
	int mMode;					//1对应角度，0对应弧度
	int mSign;					//正负号标志
public:
	void Num_usable();
	void Num_unsable();
	afx_msg void OnBnClickedSinCacl();
	afx_msg void OnBnClickedCosCacl();
	afx_msg void OnBnClickedArcsinCacl();
	afx_msg void OnBnClickedArctanCacl();
	CButton m_btnedit_sin;
	CButton m_btnedit_cos;
	CButton m_btnedit_arcsin;
	CButton m_btnedit_arctan;
	afx_msg void OnBnClickedButtonDel();
	afx_msg void OnBnClickedButtonMydel();
	CButton m_btnedit_1;
	CButton m_btnedit_2;
	CButton m_btnedit_3;
	CButton m_btnedit_4;
	CButton m_btnedit_5;
	CButton m_btnedit_6;
	CButton m_btnedit_7;
	CButton m_btnedit_8;
	CButton m_btnedit_9;
	CButton m_btnedit_0;
	afx_msg void OnBnClickedButtonDot();
	CButton m_btnedit_d;
	afx_msg void OnBnClickedButtonD();
	afx_msg void OnBnClickedButton2();
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton4();
	afx_msg void OnBnClickedButton5();
	afx_msg void OnBnClickedButton6();
	afx_msg void OnBnClickedButton7();
	afx_msg void OnBnClickedButton8();
	afx_msg void OnBnClickedButton9();
	afx_msg void OnBnClickedButton0();
	afx_msg void OnBnClickedButton3();
	afx_msg void OnBnClickedButtonResult();
	afx_msg void OnBnClickedButtonMydel2();
	afx_msg void OnBnClickedButtonRad();
	afx_msg void OnBnClickedButtonDeg();
};
