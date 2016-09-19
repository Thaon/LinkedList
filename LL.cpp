#include "stdafx.h"
#include "LL.h"


LL::LL()
{
	m_head = new Node();
	m_head->m_data = 0;
	m_head->m_next = nullptr;
}


LL::~LL()
{
}

void LL::Add(int toAdd)
{
	Node* element = new Node();
	element->m_data = toAdd;
	element->m_next = nullptr;

	Node* temp = m_head;
	while (temp->m_next != nullptr)
	{
		temp = temp->m_next;
	}
	temp->m_next = element;
}

int LL::Get(int index)
{
	int counter = 0;

	//go through list incrementing counter until you hit the wanted number and return it
	if (m_head->m_next == nullptr)
	{
		return -2;
	}
	Node* temp = m_head->m_next;
	while (temp->m_next != nullptr)
	{
		if (index == counter)
		{
			return temp->m_data;
		}
		counter++;
		temp = temp->m_next;
	}
	if (index == counter)
	{
		return temp->m_data;
	}
	//if we finish the list and we didn't hit the number, we return -1, our error
	if (counter < index)
	{
		return -1;
	}
}

int LL::Lenght()
{
	int counter = 0;
	Node* temp = m_head;
	while (temp->m_next != nullptr)
	{
		counter++;
		temp = temp->m_next;
	}
	return counter;
}
