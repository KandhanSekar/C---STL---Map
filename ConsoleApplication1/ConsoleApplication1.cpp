#include "stdafx.h"
#include<map>
#include<iostream>
#include<vector>
#include<string>

using namespace std;
//map with string as key (name here) and value is a vector storing two marks of the string
map<string, vector<int>>a;

void findanddel(string ar)
{
	map<string,vector<int>>::iterator iter=a.find(ar);
	if (iter != a.end())
	{
		a.erase(ar);
	}
	
}



void insert(string nam, int b, int c)
{
	//cout << "here 1";
	//vector to be pushed as second para
	vector<int>vec;
	vec.push_back(b);
	vec.push_back(c);
	//first m1 is pushed , then m2
	a.insert(make_pair(nam, vec));
	//inserting in the map
}
int main()
{
	
	cout << "\n MAP Implementation \n";
	
	cout << "Operations \n 1. Insert new record \n 2.Display all\n 3. Delete this record ";
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
		//simple map iterator
		for (map < string, vector<int>>::iterator itern = a.begin(); itern != a.end(); ++itern)
		{
			cout << "\n" << (*itern).first << "=>";
			for (vector<int>::iterator b = (*itern).second.begin(); b != (*itern).second.end(); ++b)
				cout << *b << "\t";
		}
	}
		break;



	case 3:
	{
		cout << "\n What do u want to delete";
		string h;
		cin >> h;
		findanddel(h);


	}

	break;
	}
	//Operations\n 2. Delete record \n 3. Modify record \n 4. Find and display \n 5

	main();
	return 0;

}

