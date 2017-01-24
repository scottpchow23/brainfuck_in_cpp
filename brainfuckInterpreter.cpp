#include <string>
#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

int main(int argc, char *argv[]) {
	vector<char> v;
	v.push_back('0');
	v.push_back('1');
	vector<char>::iterator it = v.begin();

	for (it; it != v.end(); it++)
		cout << *it << endl;

	return 1;
}
