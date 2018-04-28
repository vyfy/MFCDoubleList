#include "stdafx.h"
#include "Item.h"


Item::Item()
{
	value = rand() % 100;
	x = rand() % 400;
	y = rand() % 300;
}

void Item::Draw(CPaintDC *pdc, bool isCur)
{
	COLORREF colorPen, colorBrush;
	if (isCur) colorBrush = RGB(255, 255, 0);
	else colorBrush = RGB(200, 200, 200);
	if (!next || !prev) colorPen = RGB(255, 0, 0);
	else colorPen = RGB(0, 0, 255);
	CPen pen;
	pen.CreatePen(PS_SOLID, 2, colorPen);
	CBrush brush;
	brush.CreateSolidBrush(colorBrush);
	pdc->SelectObject(&pen);
	pdc->SelectObject(&brush);
	pdc->Rectangle(x - 20, y - 20, x + 20, y + 20);
	CString str;
	str.Format(_T("%i"), value);
	pdc->TextOutW(x - 10, y - 5, str);
}
void Item::Move(CPoint point)
{
	x = point.x;
	y = point.y;
}
bool Item::IsIn(CPoint point)
{
	if(point.x > x - 20 && point.x < x + 20 &&
		point.y < y - 20 && point.y < y + 20)return true;
	return false;
}
Item::~Item()
{
}
