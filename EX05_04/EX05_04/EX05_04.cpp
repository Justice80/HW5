//12.20 Suffle Vector
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

template <typename T>

void shuffle(vector <T> &v);

int main() {

	int i, a;
	vector < int > v;
	cout << "Enter 10 integers" << endl;
	for (i = 0; i < 10; i++) {
		cin >> a;
		v.push_back(a);
	}

	shuffle(v);

	cout << "Shuffled integers are: " << endl;
	for (int i = 0; i < v.size(); i++){
		cout << v[i] << " ";
	}
	
	cout << endl;

	return 0;
}

template <typename T>
void shuffle(vector <T> &v) {
	srand(time(NULL));
	for (int i = 0; i < v.size(); i++){
		int index = rand() % v.size();
		T temp = v[index];
		v[index] = v[i];
		v[i] = temp;
	}
}