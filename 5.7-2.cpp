// 5.7-2.cpp 


#include <iostream>
#include <vector>
#include <set>
#include <list>

template <typename T>
void print_container(T& container) {
	auto i = container.cbegin();

	while (i != container.cend()) {
		std::cout << *i++ << " ";
	}
	std::cout << std::endl;
}

int main() {
	std::set<std::string> test_set = { "one", "two", "three", "four" };
	print_container<std::set<std::string>>(test_set);

	std::list<std::string> test_list = { "one", "two", "three", "four" };
	print_container<std::list<std::string>>(test_list);

	std::vector<std::string> test_vector = { "one", "two", "three", "four" };
	print_container<std::vector<std::string>>(test_vector);
}