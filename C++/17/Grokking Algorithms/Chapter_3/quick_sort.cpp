#include <iostream>
#include <vector>

const int ZERO = []() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	return 0;
}();

template <typename T>
T sum(std::vector<T> arr) {
	if (arr.empty()) {
		return 0;
	}

    T last_num = arr.back(); 
    arr.pop_back(); 
    return last_num + sum(arr);
}

int main() {
	int size, x;
    std::vector<int> arr;
	std::cin >> size;

	for (int  i = 0; i < size; i++)
	{
		cin >> x;
		arr.push_back(x);
	}

    cout << "Sum ints: " << sum(arr) << endl;
}