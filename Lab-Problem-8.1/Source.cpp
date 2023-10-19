#include <iostream>
#include <string>
using namespace std;

int countCharacter(string str)
{
	int i = str.size();
	return i;
}
int main()
{
	string input = "12345678";
	cout << countCharacter(input);
}