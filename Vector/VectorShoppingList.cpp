#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


using namespace std;

void print(vector<string> list);

int main(){
	vector<string> list;
	print(list);
	list.push_back("eggs");
	list.push_back("milk");
	list.push_back("sugar");
	list.push_back("chocolate");
	list.push_back("flour");
	list.push_back("butter");
	print(list);
	list.push_back("coffee");
	print(list);

	//cout << *find(list.begin(), list.end(), "sugar") << endl;

	// Adding
	for (size_t i = 0; i < list.size(); ++i) {
		if (list[i] == "butter") {
			list[i] = "honey";
		}
	}
	print(list);

	// Removing
	for (size_t i = 0; i < list.size(); ++i) {
		if (list[i] == "milk") {
			list.erase(list.begin() + i);
			--i;
		}
	}
	print(list);

	system("pause");
	return 0;
}

void print(vector<string> list) {
	for (size_t i = 0; i < list.size(); ++i) {
		cout << list[i] << endl;
	}
	cout << endl;
}