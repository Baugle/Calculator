
// CalculatorsDlg.cpp: 实现文件
//

#include "pch.h"
#include "framework.h"
#include "Calculators.h"
#include "CalculatorsDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// 用于应用程序“关于”菜单项的 CAboutDlg 对话框
#include <string>


class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

// 实现
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CCalculatorsDlg 对话框



CCalculatorsDlg::CCalculatorsDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_CALCULATORS_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CCalculatorsDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CCalculatorsDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_1, &CCalculatorsDlg::OnBnClicked1)
	ON_BN_CLICKED(IDC_xiaoshudian, &CCalculatorsDlg::OnBnClickedxiaoshudian)
	ON_BN_CLICKED(IDC_0, &CCalculatorsDlg::OnBnClicked0)
	ON_BN_CLICKED(IDC_2, &CCalculatorsDlg::OnBnClicked2)
	ON_BN_CLICKED(IDC_3, &CCalculatorsDlg::OnBnClicked3)
	ON_BN_CLICKED(IDC_4, &CCalculatorsDlg::OnBnClicked4)
	ON_BN_CLICKED(IDC_5, &CCalculatorsDlg::OnBnClicked5)
	ON_BN_CLICKED(IDC_6, &CCalculatorsDlg::OnBnClicked6)
	ON_BN_CLICKED(IDC_7, &CCalculatorsDlg::OnBnClicked7)
	ON_BN_CLICKED(IDC_8, &CCalculatorsDlg::OnBnClicked8)
	ON_BN_CLICKED(IDC_9, &CCalculatorsDlg::OnBnClicked9)
	ON_BN_CLICKED(IDC_C, &CCalculatorsDlg::OnBnClickedC)
	ON_BN_CLICKED(IDC_CE, &CCalculatorsDlg::OnBnClickedCe)
	ON_BN_CLICKED(IDC_baifen, &CCalculatorsDlg::OnBnClickedbaifen)
	ON_BN_CLICKED(IDC_1chuyix, &CCalculatorsDlg::OnBnClicked1chuyix)
	ON_BN_CLICKED(IDC_xpingfang, &CCalculatorsDlg::OnBnClickedxpingfang)
	ON_BN_CLICKED(IDC_kaigenhaox, &CCalculatorsDlg::OnBnClickedkaigenhaox)
	ON_BN_CLICKED(IDC_chuyi, &CCalculatorsDlg::OnBnClickedchuyi)
	ON_BN_CLICKED(IDC_cheng, &CCalculatorsDlg::OnBnClickedcheng)
	ON_BN_CLICKED(IDC_jian, &CCalculatorsDlg::OnBnClickedjian)
	ON_BN_CLICKED(IDC_jia, &CCalculatorsDlg::OnBnClickedjia)
	ON_BN_CLICKED(IDC_zhengfu, &CCalculatorsDlg::OnBnClickedzhengfu)
	ON_BN_CLICKED(IDC_denghyu, &CCalculatorsDlg::OnBnClickeddenghyu)
END_MESSAGE_MAP()


// CCalculatorsDlg 消息处理程序

BOOL CCalculatorsDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// 将“关于...”菜单项添加到系统菜单中。

	// IDM_ABOUTBOX 必须在系统命令范围内。
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != nullptr)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// 设置此对话框的图标。  当应用程序主窗口不是对话框时，框架将自动
	//  执行此操作
	SetIcon(m_hIcon, TRUE);			// 设置大图标
	SetIcon(m_hIcon, FALSE);		// 设置小图标

	// TODO: 在此添加额外的初始化代码



	return TRUE;  // 除非将焦点设置到控件，否则返回 TRUE
}

void CCalculatorsDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// 如果向对话框添加最小化按钮，则需要下面的代码
//  来绘制该图标。  对于使用文档/视图模型的 MFC 应用程序，
//  这将由框架自动完成。

void CCalculatorsDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // 用于绘制的设备上下文

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// 使图标在工作区矩形中居中
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// 绘制图标
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

//当用户拖动最小化窗口时系统调用此函数取得光标
//显示。
HCURSOR CCalculatorsDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

double First = 0;
double Second = 0;
short int Status = 0;
//0:First
//1:Second
short int Point = 0;
//0:No
//1:Yes
short int PointNumber = 1;
short int Way = 0;
/*
* 1:÷
* 2:×
* 3:-
* 4:+
*/

#include<math.h>


double ReturnNumber(double number)
{

	switch (Status)
	{
	case 0:
		if (Point == 0)
		{
			First = First * 10 + number;
			return First;
		}
		else
		{
			int c10times = PointNumber;
			double times = 1;
			while (c10times !=0 )
			{
				times = times / 10;
				c10times--;
			}
			
			First = First  + number* times;
			PointNumber++;
			return First;
		}
		break;
	case 1:
		if (Point == 0)
		{
			Second = Second * 10 + number;
			return Second;
		}
		else
		{
			int c10times = PointNumber;
			int times = 1;
			while (c10times != 0)
			{
				times = times / 10;
				c10times--;
			}
			PointNumber++;
			Second = Second + number * times;
			return Second;
		}
		break;
	}
		
	


}

void CCalculatorsDlg::OnBnClicked1()
{
	ReturnNumber(1);

	if (Status == 0)
	{
		std::string str = std::to_string(First); // 转换为 std::string
		LPCSTR number = str.c_str();
		SetDlgItemText(IDC_jieguo, number);
	}
	else
	{
		std::string str = std::to_string(Second); // 转换为 std::string
		LPCSTR number = str.c_str();
		SetDlgItemText(IDC_jieguo, number);
	}
	UpdateData(FALSE);
}

void CCalculatorsDlg::OnBnClickedxiaoshudian()
{
	if (Point == 1)
	{
		Point = 0;
	}
	else
	{
		Point = 1;
	}
}


void CCalculatorsDlg::OnBnClicked0()
{
	ReturnNumber(0);

	if (Status == 0)
	{
		std::string str = std::to_string(First); // 转换为 std::string
		LPCSTR number = str.c_str();
		SetDlgItemText(IDC_jieguo, number);
	}
	else
	{
		std::string str = std::to_string(Second); // 转换为 std::string
		LPCSTR number = str.c_str();
		SetDlgItemText(IDC_jieguo, number);
	}
	UpdateData(FALSE);
}


void CCalculatorsDlg::OnBnClicked2()
{
	ReturnNumber(2);

	if (Status == 0)
	{
		std::string str = std::to_string(First); // 转换为 std::string
		LPCSTR number = str.c_str();
		SetDlgItemText(IDC_jieguo, number);
	}
	else
	{
		std::string str = std::to_string(Second); // 转换为 std::string
		LPCSTR number = str.c_str();
		SetDlgItemText(IDC_jieguo, number);
	}
	UpdateData(FALSE);
}


void CCalculatorsDlg::OnBnClicked3()
{
	ReturnNumber(3);

	if (Status == 0)
	{
		std::string str = std::to_string(First); // 转换为 std::string
		LPCSTR number = str.c_str();
		SetDlgItemText(IDC_jieguo, number);
	}
	else
	{
		std::string str = std::to_string(Second); // 转换为 std::string
		LPCSTR number = str.c_str();
		SetDlgItemText(IDC_jieguo, number);
	}
	UpdateData(FALSE);
}


void CCalculatorsDlg::OnBnClicked4()
{
	ReturnNumber(4);

	if (Status == 0)
	{
		std::string str = std::to_string(First); // 转换为 std::string
		LPCSTR number = str.c_str();
		SetDlgItemText(IDC_jieguo, number);
	}
	else
	{
		std::string str = std::to_string(Second); // 转换为 std::string
		LPCSTR number = str.c_str();
		SetDlgItemText(IDC_jieguo, number);
	}
	UpdateData(FALSE);
}


void CCalculatorsDlg::OnBnClicked5()
{
	ReturnNumber(5);

	if (Status == 0)
	{
		std::string str = std::to_string(First); // 转换为 std::string
		LPCSTR number = str.c_str();
		SetDlgItemText(IDC_jieguo, number);
	}
	else
	{
		std::string str = std::to_string(Second); // 转换为 std::string
		LPCSTR number = str.c_str();
		SetDlgItemText(IDC_jieguo, number);
	}
	UpdateData(FALSE);
}


void CCalculatorsDlg::OnBnClicked6()
{
	ReturnNumber(6);

	if (Status == 0)
	{
		std::string str = std::to_string(First); // 转换为 std::string
		LPCSTR number = str.c_str();
		SetDlgItemText(IDC_jieguo, number);
	}
	else
	{
		std::string str = std::to_string(Second); // 转换为 std::string
		LPCSTR number = str.c_str();
		SetDlgItemText(IDC_jieguo, number);
	}
	UpdateData(FALSE);
}


void CCalculatorsDlg::OnBnClicked7()
{
	ReturnNumber(7);

	if (Status == 0)
	{
		std::string str = std::to_string(First); // 转换为 std::string
		LPCSTR number = str.c_str();
		SetDlgItemText(IDC_jieguo, number);
	}
	else
	{
		std::string str = std::to_string(Second); // 转换为 std::string
		LPCSTR number = str.c_str();
		SetDlgItemText(IDC_jieguo, number);
	}
	UpdateData(FALSE);
}


void CCalculatorsDlg::OnBnClicked8()
{
	ReturnNumber(8);

	if (Status == 0)
	{
		std::string str = std::to_string(First); // 转换为 std::string
		LPCSTR number = str.c_str();
		SetDlgItemText(IDC_jieguo, number);
	}
	else
	{
		std::string str = std::to_string(Second); // 转换为 std::string
		LPCSTR number = str.c_str();
		SetDlgItemText(IDC_jieguo, number);
	}
	UpdateData(FALSE);
}


void CCalculatorsDlg::OnBnClicked9()
{
	ReturnNumber(9);

	if (Status == 0)
	{
		std::string str = std::to_string(First); // 转换为 std::string
		LPCSTR number = str.c_str();
		SetDlgItemText(IDC_jieguo, number);
	}
	else
	{
		std::string str = std::to_string(Second); // 转换为 std::string
		LPCSTR number = str.c_str();
		SetDlgItemText(IDC_jieguo, number);
	}
	UpdateData(FALSE);
}


void CCalculatorsDlg::OnBnClickedC()
{
	First = 0;
	Second = 0;
	Point = 0;
	PointNumber = 1;
	Status = 0;
	SetDlgItemText(IDC_jieguo, "");
	UpdateData(FALSE);
}


void CCalculatorsDlg::OnBnClickedCe()
{
	if (Status == 0)//first
	{
		First = 0;
		Second = 0;
		Point = 0;
		PointNumber = 1;
		SetDlgItemText(IDC_jieguo, "");
	}
	else
	{
		Second = 0;
		Point = 0;
		PointNumber = 1;
		SetDlgItemText(IDC_jieguo, "");
	}
	UpdateData(FALSE);
}


void CCalculatorsDlg::OnBnClickedbaifen()
{
	if (Status == 0)//first
	{
		First = First / 100;
		std::string str = std::to_string(First); // 转换为 std::string
		LPCSTR number = str.c_str();
		SetDlgItemText(IDC_jieguo, number);
	}
	else
	{
		Second = Second / 100;
		std::string str = std::to_string(Second); // 转换为 std::string
		LPCSTR number = str.c_str();
		SetDlgItemText(IDC_jieguo, number);
	}

	UpdateData(FALSE);
}


void CCalculatorsDlg::OnBnClicked1chuyix()
{
	if (Status == 0)//first
	{
		First = 1 / First;
		std::string str = std::to_string(First); // 转换为 std::string
		LPCSTR number = str.c_str();
		SetDlgItemText(IDC_jieguo, number);
	}
	else
	{
		Second = 1 / Second;
		std::string str = std::to_string(Second); // 转换为 std::string
		LPCSTR number = str.c_str();
		SetDlgItemText(IDC_jieguo, number);
	}
	
	UpdateData(FALSE);
}


void CCalculatorsDlg::OnBnClickedxpingfang()
{
	if (Status == 0)//first
	{
		First = First * First;
		std::string str = std::to_string(First); // 转换为 std::string
		LPCSTR number = str.c_str();
		SetDlgItemText(IDC_jieguo, number);
	}
	else
	{
		Second = Second  * Second;
		std::string str = std::to_string(Second); // 转换为 std::string
		LPCSTR number = str.c_str();
		SetDlgItemText(IDC_jieguo, number);
	}

	UpdateData(FALSE);
}


void CCalculatorsDlg::OnBnClickedkaigenhaox()
{
	if (Status == 0)//first
	{
		First = sqrt(First);
		std::string str = std::to_string(First); // 转换为 std::string
		LPCSTR number = str.c_str();
		SetDlgItemText(IDC_jieguo, number);
	}
	else
	{
		Second = sqrt(Second) ;
		std::string str = std::to_string(Second); // 转换为 std::string
		LPCSTR number = str.c_str();
		SetDlgItemText(IDC_jieguo, number);
	}

	UpdateData(FALSE);
}


void CCalculatorsDlg::OnBnClickedchuyi()
{
	Way = 1;
	Status = 1;
	Point = 0;
	PointNumber = 1;
	SetDlgItemText(IDC_jieguo, "");
	UpdateData(FALSE);
}


void CCalculatorsDlg::OnBnClickedcheng()
{
	Way = 2;
	Status = 1;
	Point = 0;
	PointNumber = 1;
	SetDlgItemText(IDC_jieguo, "");
	UpdateData(FALSE);
}


void CCalculatorsDlg::OnBnClickedjian()
{
	Way = 3;
	Status = 1;
	Point = 0;
	PointNumber = 1;
	SetDlgItemText(IDC_jieguo, "");
	UpdateData(FALSE);
}


void CCalculatorsDlg::OnBnClickedjia()
{
	Way = 4;
	Status = 1;
	Point = 0;
	PointNumber = 1;
	SetDlgItemText(IDC_jieguo, "");
	UpdateData(FALSE);
}


void CCalculatorsDlg::OnBnClickedzhengfu()
{
	if (Status == 0)
	{
		//First
		First = -First;
		std::string str = std::to_string(First); // 转换为 std::string
		LPCSTR number = str.c_str();
		SetDlgItemText(IDC_jieguo, number);
	}
	else
	{
		Second = -Second;
		std::string str = std::to_string(Second); // 转换为 std::string
		LPCSTR number = str.c_str();
		SetDlgItemText(IDC_jieguo, number);
	}
	UpdateData(FALSE);
}


void CCalculatorsDlg::OnBnClickeddenghyu()
{
	std::string str;
	LPCSTR number;
	double result = 0;

	switch (Way)
	{
	case 1:
		// 除以

		result = First / Second;
		str = std::to_string(result); // 转换为 std::string
		number = str.c_str();
		SetDlgItemText(IDC_jieguo, number);

		break;

	case 2:
		//乘
		result = First * Second;
		str = std::to_string(result); // 转换为 std::string
		number = str.c_str();
		SetDlgItemText(IDC_jieguo, number);
		break;

	case 3:
		//減
		result = First - Second;
		str = std::to_string(result); // 转换为 std::string
		number = str.c_str();
		SetDlgItemText(IDC_jieguo, number);
		break;

	case 4:
		//加
		result = First + Second;
		str = std::to_string(result); // 转换为 std::string
		number = str.c_str();
		SetDlgItemText(IDC_jieguo, number);
		break;


	}

	if (Way != 0)
	{
		Way = 0;
		First = result;
		Second = 0;
		Status = 1;
	}
	
	UpdateData(FALSE);
}
