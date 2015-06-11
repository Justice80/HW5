//12.4 Is sorted?
#include <iostream> 

using namespace std;

template <typename T>
bool isSorted(const T list[], int size) {
	T smallest = list[0];
	for (int i = 1; i < size; i++) {
		if (list[i] < smallest)
			return false;
		else {
			smallest = list[i];
		}
	}
	return true;
}

int main() {

	int list[] = { 1, 5, 8, 59, 60, 71, 500 };
	double list1[] = { 1.5, 1.7, 1.9, 2.1, 2.8, 3.8, 3.4 };
	double list2[] = { 1.5, 1.7, 1.9, 2.1, 2.8, 3.8, 3.9 };

	bool i = isSorted(list, 7);
	bool j = isSorted(list1, 7);
	bool k = isSorted(list2, 7);

	cout << boolalpha;
	cout << i << endl;
	cout << j << endl;
	cout << k << endl;

	return 0;
}