#include "stdafx.h"
#include<map>
#include<iostream>
#include<vector>
#include<string>

using namespace std;
//map with string as key (name here) and value is a vector storing two marks of the string
map<string, vector<int>>a;
void special(int t, string h, int e, int f)
{

	map<string, vector<int>>::iterator iter = a.find(h);
	if (iter != a.end())
	{
		if (t == 1)
		{
			(*iter).second[0] = e;
		}
		else if (t == 2)
		{
			(*iter).second[1] = e;

		}
		else
		{
			(*iter).second[0] = e;
			(*iter).second[1] = f;


		}
	}

}
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
	
	cout << "Operations \n 1. Insert new record \n 2.Display all\n 3. Delete this record \n 4. Size \n 5.Change Value\n 6. Count";
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
	case 4:
	{
		cout << a.size();
	}
	break;
	case 5:
	{
		cout << "\n what string;s mark do u want to change?";
		string d;
		cin >> d;
		cout << "which mark?1. for mar1\n 2. for mar 2\n 3 . for both ";
		int opton;
		cin >> opton;
		if (opton == 1)
		{
			cout << "\n enter new mar 1";
			int mar1;
			cin >> mar1;
			special(1,d, mar1, 0);

		}
		if (opton == 2)
		{
			cout << "\n enter new mar 1";
			int mar2;
			cin >> mar2;
			special(2,d, mar2, 0);

		}
		if (opton == 3)
		{
			cout << "\n enter new mar 1";
			int mar1;
			cin >> mar1;
			int mar2;
			cin >> mar2;
			special(3,d, mar1,mar2);

		}
	}
	break;
	case 6:
	{
		string h;
		cout << "\n enter the element whose count u want to return";
//ALWAYS 1 in normal map.
		cin >> h;
		cout << a.count(h);
	}
	break;
	}
	main();
	return 0;

}


