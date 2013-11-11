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
	// 그래프가 그려질 구역의 DC.
	CDC* m_graphDC;
	double m_firstX, m_firstY;
	double m_secondX, m_secondY;
	CRect m_GraphFieldRect;
	CPen* m_GraphPen;
public:
	// 실제 그래프를 그리는 함수
	void Draw(double x, double y);
	void Draw(int firstX, int firstY, int secondX, int secondY);
	// 그래프 시작지점 설정.
	void SetStartPoint(int startX, int startY);
	// 그래프 색상 설정 함수
	void SetGraphStyle(int LineStyle,int width, COLORREF color);
};


