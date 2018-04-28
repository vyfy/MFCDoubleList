#pragma once
#include "Item.h"
class List
{
	Item*First;
	Item*Last;
	Item*Current;
	Item*Selected;
public:
	List();
	void Add();
	void Delete();
	void Forward()
	{ if (Current && Current->GetNext()) 
	Current = Current->GetNext(); }

	void Backward()
	{ if (Current && Current->GetPrev())
	Current = Current->GetPrev(); }

	void Draw(CPaintDC *pdc);
	void Select(CPoint point);
	void Move(CPoint point);

	~List();
};

