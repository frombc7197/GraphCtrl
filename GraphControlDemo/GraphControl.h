#pragma once


// GraphControl

class GraphControl : public CWnd
{
	DECLARE_DYNAMIC(GraphControl)

public:
	GraphControl();
	virtual ~GraphControl();

protected:
	DECLARE_MESSAGE_MAP()
public:
	bool SetDC(CStatic* GraphField);
	// �׷����� �׷��� ������ DC.
	CDC* m_graphDC;
	double m_firstX, m_firstY;
	double m_secondX, m_secondY;
	CRect m_GraphFieldRect;
	CPen* m_GraphPen;
public:
	// ���� �׷����� �׸��� �Լ�
	void Draw(double x, double y);
	void Draw(int firstX, int firstY, int secondX, int secondY);
	// �׷��� �������� ����.
	void SetStartPoint(int startX, int startY);
	// �׷��� ���� ���� �Լ�
	void SetGraphStyle(int LineStyle,int width, COLORREF color);
};


