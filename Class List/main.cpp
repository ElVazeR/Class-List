#include <iostream>
#include "List.hpp"

int main() {
	setlocale(LC_ALL, "Russian");


	List<int> list1;

	list1.push_back(15);
	list1.push_back(7);
	list1.push_front(42);
	//list1.clear();
	list1.print();
	// list1.reverse_print();
	
	//list1.pop_back();
	list1.pop_front();
	list1.print();

	List<std::string> list2{ "KSI", "Miniminter", "Kai Cenat", "Speedy" };
	list2.print();
	

	return 0;
}

