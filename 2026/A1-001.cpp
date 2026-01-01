#include <iostream>

int main(const int argc, const char* const* const argv) {
	std::cin.tie(0)->sync_with_stdio(0);
	std::string firstName;
	std::string lastName;
	std::cin >> firstName >> lastName;
	std::cout << "Hello " << firstName << ' ' << lastName << '\n' << firstName.substr(0, 2) << lastName.substr(0, 2) << std::endl;
	return 0;
}
