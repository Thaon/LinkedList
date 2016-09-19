// LinkedList.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "LL.h"
#include <iostream>

int main()
{
	LL list = LL();

	list.Add(3);
	list.Add(5);
	list.Add(7);
	list.Add(9);

	for (int i = 0; i < list.Lenght(); i++)
	{
		std::cout << list.Get(i) << std::endl;
	}

	system("Pause");
    return 0;
}

