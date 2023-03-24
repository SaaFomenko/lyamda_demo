#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	const std::string in_data = "Входные данные: ";
	const std::string out_data = "Выходные данные: ";
	std::vector<int> arr_vect = { 4, 7, 9, 14, 12 };

	std::cout << in_data;
	std::for_each(
			arr_vect.begin(),
			arr_vect.end(),
			[](int& i)
			{
				std::cout << i << ' ';
			}
			);
	std::cout << std::endl;

	std::cout << out_data;
	std::for_each(
			arr_vect.begin(),
			arr_vect.end(),
			[](int& i)
			{
				bool check = i % 2 != 0;

				if (check) i = i * 3;

				std::cout << i << ' ';
			}
			);
	std::cout << std::endl;



	return 0;
}
