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
	print(list);
	list.push_back("coffee");
	print(list);

	//cout << *find(list.begin(), list.end(), "sugar") << endl;

	for (size_t i = 0; i < list.size(); ++i) {
		if (list[i] == "sugar") {
			list[i] = "honey";
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