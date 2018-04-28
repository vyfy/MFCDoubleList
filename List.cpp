#include "stdafx.h"
#include "List.h"


List::List()
{

	First = Last = Current = Selected = NULL;
}
void List::Add()
{
	Item*p = new Item;
	if (!First)
	{
		First = Last = Current = p;
		return;
	}
	if (Current == Last)
	{
		Last->SetNext(p);
		p->SetPrev(Last);
		Last = p;
		return;
	}
	Current->GetNext()->SetPrev(p);
	p->SetNext(Current->GetNext());
	Current->SetNext(p);
	p->SetPrev(Current);
}
void List::Delete()
{
	if (!First)return;
	if (Current == First)
	{
		First = First->GetNext();
		if (First)First->SetNext(NULL);
		else Last = First;
		delete Current;
		Current = First;
		return;
	}
	if (Current == Last)
	{
		Last = Last->GetPrev();
		Last->SetNext(NULL);
		delete Current;
		Current = Last;
		return;
	}

	Item* p = Current->GetPrev();
	Item*n = Current->GetNext();
	p->SetNext(n);
	n->SetPrev(p);
	Current = p;
}

void List::Draw(CPaintDC *pdc)
{
	for (Item*p = First; p; p = p->GetNext())
		p->Draw(pdc, p == Current);
}
void List::Select(CPoint point)
{
	for (Item*p = First; p; p = p->GetNext())
	if (p->IsIn(point)){Selected = p; return;}


}
void List::Move(CPoint point)
{
	if (Selected)
		Selected->Move(point);
}

List::~List()
{
	while (First)
	{
		Delete();
	}

}
