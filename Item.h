#pragma once
class Item
{
	int value;
	int x;
	int y;
	Item*next;
	Item*prev;
public:
	Item();
	void Draw(CPaintDC *pdc,bool isCur);
	void SetNext(Item*p){ next = p; }
	void SetPrev(Item*p){ prev = p; }
	Item*GetNext(){ return next; }
	Item*GetPrev(){ return prev; }
	void Move(CPoint point);
	bool IsIn(CPoint point);
	~Item();
};

