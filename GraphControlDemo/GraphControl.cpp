// GraphControl.cpp : ���� �����Դϴ�.
//

#include "stdafx.h"
#include "GraphControlDemo.h"
#include "GraphControl.h"


// GraphControl

IMPLEMENT_DYNAMIC(GraphControl, CWnd)

GraphControl::GraphControl()
: m_graphDC(NULL)
{
	m_firstX	= 0;
	m_firstY	= 0;
	m_secondX	= 0;
	m_secondY	= 0;
	SetGraphStyle(PS_SOLID,1,RGB(0,0,0));
}

GraphControl::~GraphControl()
{
	delete m_GraphPen;	
}


BEGIN_MESSAGE_MAP(GraphControl, CWnd)
END_MESSAGE_MAP()



// �׷����� �׷��� PictureBox���� DC�� �޾ƿ�.




bool GraphControl::SetDC(CStatic* GraphField)
{
	m_graphDC = GraphField->GetDC();

	GraphField->GetClientRect(m_GraphFieldRect);

	if(m_graphDC == NULL)
	{
		return false;
	}
	else
	{
		return true;
	}
}


// ���� �׷����� �׸��� �Լ�
void GraphControl::Draw(int firstX, int firstY, int secondX, int secondY)
{
	m_graphDC->MoveTo(firstX,firstY);
	m_graphDC->LineTo(secondX,secondY);
	//GraphField.ReleaseDC(m_graphDC);
}

void GraphControl::Draw(double x, double y)
{
	//int firstX, firstY;
	//int secondX, secondY;

	//HWND hPictureBox = m_graphDC->m_hDC;
	//hPictureBox->GetClientRect();

	int nHeight = m_GraphFieldRect.Height();

	m_secondX = x;
	m_secondY = y;

	CPen* pOldPen;

	pOldPen	=	m_graphDC->SelectObject(m_GraphPen);

	if(  (m_GraphFieldRect.left < m_secondX && m_secondX < m_GraphFieldRect.right)  || (m_GraphFieldRect.bottom < nHeight - m_secondY && nHeight - m_secondY < m_GraphFieldRect.top) )
	{
		m_graphDC->MoveTo((int)m_firstX,(int)(nHeight - m_firstY));
		m_graphDC->LineTo((int)m_secondX,(int)(nHeight - m_secondY));
	}
	m_graphDC->SelectObject(pOldPen);

	m_firstX = m_secondX;
	m_firstY = m_secondY;


}



// �׷��� �������� ����.
void GraphControl::SetStartPoint(int startX, int startY)
{
	m_firstX = startX;
	m_firstY = startY;
}


// �׷��� ���� ���� �Լ�
void GraphControl::SetGraphStyle(int LineStyle,int width, COLORREF color)
{
	m_GraphPen = new CPen(LineStyle, width, color);
}
