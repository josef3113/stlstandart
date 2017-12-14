#include <iostream>
#include <vector>
#include <list>
#include<iterator>


using namespace std;

void main()
{
	vector <char*> v1;
	v1.push_back("3456");
	v1.push_back("4675");
	vector<char*>::iterator i=v1.begin();
	/*for(i=v1.begin();i!=v1.end();i++)
	{
		cout<<*i<<endl;
	}*/
	for(int i=0;i<v1.size();i++)
	{
      cout<<v1[i]<<endl;
	}

	list <int> l1;
	l1.push_front(1);
	l1.push_front(2);
	l1.push_front(3);
	//list<int>::iterator i;
	list<int>::iterator j;
	for (j=l1.begin(); j !=l1.end(); j++)
		{
		cout << *j << " ";
		}
	l1.push_back(5);
	for (j=l1.begin(); j !=l1.end(); j++)
		{
		cout << *j << " ";
		}

		cout << endl;
	system ("pause");
}