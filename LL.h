#pragma once
#include <memory>

class LL
{
private:
	struct Node
	{
		int m_data;
		Node* m_next;
	};

	Node* m_head;

public:
	LL();
	~LL();

	void Add(int toAdd);
	int Get(int index);
	int Lenght();
	void Remove(int index);

	//getters and setters
};

