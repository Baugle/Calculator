
// CalculatorsDlg.h: 头文件
//

#pragma once


// CCalculatorsDlg 对话框
class CCalculatorsDlg : public CDialogEx
{
// 构造
public:
	CCalculatorsDlg(CWnd* pParent = nullptr);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CALCULATORS_DIALOG };
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
public:
	afx_msg void OnBnClicked1();
	afx_msg void OnBnClickedxiaoshudian();
	afx_msg void OnBnClicked0();
	afx_msg void OnBnClicked2();
	afx_msg void OnBnClicked3();
	afx_msg void OnBnClicked4();
	afx_msg void OnBnClicked5();
	afx_msg void OnBnClicked6();
	afx_msg void OnBnClicked7();
	afx_msg void OnBnClicked8();
	afx_msg void OnBnClicked9();
	afx_msg void OnBnClickedC();
	afx_msg void OnBnClickedCe();
	afx_msg void OnBnClickedbaifen();
	afx_msg void OnBnClicked1chuyix();
	afx_msg void OnBnClickedxpingfang();
	afx_msg void OnBnClickedkaigenhaox();
	afx_msg void OnBnClickedchuyi();
	afx_msg void OnBnClickedcheng();
	afx_msg void OnBnClickedjian();
	afx_msg void OnBnClickedjia();
	afx_msg void OnBnClickedzhengfu();
	afx_msg void OnBnClickeddenghyu();
};
