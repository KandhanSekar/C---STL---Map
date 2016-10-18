#include "stdafx.h"
#include<map>
#include<iostream>
#include<vector>
#include<string>

using namespace std;
//map with string as key (name here) and value is a vector storing two marks of the string
map<string, vector<int>>a;
void insert(string nam, int b, int c)
{
	cout << "here 1";
	vector<int>vec;
	vec.push_back(b);
	vec.push_back(c);
	//first m1 is pushed , then m2
	a.insert(make_pair(nam, vec));
}
int main()
{
	
	cout << "MAP Implementation";
	
	cout << "Operations \n 1. Insert new record \n 2.Display all ";
	int opt;
	cin >> opt;
	switch (opt) {
	case 1:
	{
		cout << "enter name to be inserted";
		string name;
		cin >> name;
		cout << "\nenter the two marks";
		int m1, m2;
		cin >> m1 >> m2;
		insert(name, m1, m2);

		break;
	}
	case 2:
	{
		for (map < string, vector<int>>::iterator bow = a.begin(); bow != a.end(); ++bow)
		{
			cout << "\n printing first ba!";
			cout << "\n" << (*bow).first << "=>";
			for (vector<int>::iterator b = (*bow).second.begin(); b != (*bow).second.end(); ++b)
				cout << *b << "\t";
		}
	}
		break;
	}
	//Operations\n 2. Delete record \n 3. Modify record \n 4. Find and display \n 5
	main();
	return 0;

}

