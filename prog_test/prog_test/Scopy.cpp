#include <string>
#include <fstream>
#include <iostream>
using namespace std;

/* copy one file to another, a line at a time */
int scopy()
{
	ifstream in("Scopy.cpp");
	ofstream out("Scopy2.cpp");
	string s;
	while(getline(in, s))
	out << s << "\n";

	return 0;
}