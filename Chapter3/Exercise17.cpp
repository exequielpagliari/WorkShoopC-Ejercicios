// Vector example.
#include <iostream>
#include <string>
#include <vector>

std::vector<int> myVector {1, 2, 3, 4, 5};

void PrintVector()
{
	for (int i = 0; i < myVector.size(); ++i)
	{
		std::cout << myVector[i];
	}
	std::cout << "\n\n";
}
int main()
{
	std::cout << "Vector Init" << std::endl;
	PrintVector();
	std::cout << "Pop_back" << std::endl;
	myVector.pop_back();
	PrintVector();
	std::cout << "Push_back" << std::endl;
	myVector.push_back(6);
	PrintVector();
	std::cout << "Erase" << std::endl;
	myVector.erase(myVector.begin() + 1);
	PrintVector();
	std::cout << "Insert" << std::endl;
	myVector.insert(myVector.begin() + 3, 8);
	PrintVector();
}
