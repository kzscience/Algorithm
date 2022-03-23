#include <iostream>
#include <vector>

const int ZERO = []() {
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
	std::cout.tie(nullptr);
	return 0;
}();
template <typename T>
std::vector<T> quicksort(const std::vector<T>& arr) {

    if (arr.size() < 2)
        return arr;

    const T* pivot = &arr.front() + arr.size() / 2 - 1; 
    std::vector<T> less;  
    std::vector<T> greater;  

    for (const T* item = &arr.front(); item <= &arr.back(); item++) {
        if (item == pivot) {
            continue;
        }
        if (*item <= *pivot) {
            less.push_back(*item);
        }
        else greater.push_back(*item);
    }

    std::vector<T> sorted_less = quicksort(less);
    std::vector<T> sorted_greater = quicksort(greater);
    sorted_less.push_back(*pivot);
    sorted_less.insert(sorted_less.end(), sorted_greater.begin(), sorted_greater.end());

    return sorted_less;
}

int main() {
    int size, element;
    std::cin >> size;
    std::vector<int> arr;
    for (int i = 0; i < size; i++) {
        std::cin >> element;
        arr.push_back(element);
    }


    std::vector<int> sorted = quicksort(arr);
    for (int num : sorted) {
        cout << num << " ";
    }
    cout << endl;
}