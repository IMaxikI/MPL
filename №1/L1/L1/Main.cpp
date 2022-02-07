#include <iostream>
#include <list>
#include <string>

using namespace std;

int main() {
	setlocale(0, "rus");

	list<string> list;
	string k;
	int n;

	cout << "¬ведите элементы коллекции: " << endl;
	while (true) {
		string el;
		cin >> el;
		if (el != "ex") list.push_back(el);
		else break;
	}

	cout << "¬ведите элемент K: ";
	cin >> k;
	cout << "¬ведите N: ";
	cin >> n;

	int count = 1;
	auto iter = list.cbegin();

	while (iter != list.cend()) {
		++iter;
		++count;
		if (count == n) {
			list.insert(iter, k);
			count = 1;
		}
	}
	
	for (string ast : list) {
		cout << ast<< " ";
	}

	return 0;
}