// Prac4.cpp : Defines the entry point for the application.
//

#include "Prac4.h"
#include <set>
#include <map>
#include <string>
using namespace std;


void PrintCollection(const set<int>& setof) {
	for (int i : setof) {
		cout << i << endl;
	}
	cout << endl;
};

int main()
{
	std::set<int> collectedItems;
	map<int, string> numberMap;
	string number;


	cout << "Enter values, type \"done\" to finish." << endl;
	
	while (true) {
		cout << "Enter Values: " << endl;
		cin >> number;


		if (number == "done") {
			cout << "Thank you for entering your numbers..." << endl;
			break;
		}
		try {
			int num = stoi(number);
			collectedItems.insert(num);
			// does this pase?
		}
		catch (const exception& e) {
			cout << e.what() << endl;
		}
	}
	PrintCollection(collectedItems);
	string anotherNumber;
	cout << "Please enter another numer: " << endl;
	while (true) {
		cin >> anotherNumber;

		try {
			int num = stoi(anotherNumber);
			collectedItems.insert(num);
			if (collectedItems.find(num) != collectedItems.end()) {
				cout << num << " is in the set." << endl;
			}
			else {
				cout << "Number is not in the set." << endl;
			}
		}
		catch (const exception& e) {
			cout << e.what() << endl;
		}
		break;
	}
	//string pair;
	for (int num : collectedItems) {
		cout << "Enter a string associated with: " << num << endl;
		cin >> number;

		collectedItems[num] = number;
	}
	for (const auto& pair : numberMap) {
		cout << "Number: " << endl;
	}


	return 0;
}
