#include <iostream>
#include <vector>
#include "S.cpp"

int main()
{
	S<int> si(5);
	S<char> sc('a');
	S<double> sd(2.5);
	S<std::string> ss("slowo");

	std::vector<int> v1;
	S<std::vector<int>> sv(v1);

	si.get() = 7;
	si.set(12);

	std::cout << si[2] << '\n';

	const S<int> si2(8);
	std::cout << si2[3] << '\n';

	//read_val(si2[3]);

	std::cout << si2[3] << '\n';

	return 0;
}