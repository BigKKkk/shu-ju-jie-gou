#include <string>
#include <iostream>
#include <fstream>
using namespace std;

/* read an entire file into a single string */
int fileString()
{
	ifstream in("fileString.cpp");
	string s, line;
	while(getline(in, line))
	{
		s += line + "\n";
	}
	cout << s;
	system("pause");

	return 0;
}