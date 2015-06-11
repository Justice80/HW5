//12.2 Linear Search
#include <iostream>
#include <string>

using namespace std;

template <typename S>
S linearSearch(const S list[], S key, int arraySize) {
	for (int i = 0; i < arraySize; i++) {
		if (key == list[i]) {
			cout << key << " is in spot " << i + 1 << endl;
			return key;
		}
	}
	cout << key << " is not in the list\n";
	return key;
}

int main() {

	int list[] = { 1, 4, 4, 2, 5, -3, 6, 2 };
	double list1[] = { 1.5, 2.2, 3.3, 53.51, 511.5, 1.553, 156.5, 12.0 };
	string list2[] = { "apple", "king", "sweet", "pie", "nice", "queen", "nickle", "computer" };
	string h = "king";

	int i = linearSearch(list, 5, 8);
	double j = linearSearch(list1, 1.0, 8);
	string k = linearSearch(list2, h, 8);

	return 0;
}