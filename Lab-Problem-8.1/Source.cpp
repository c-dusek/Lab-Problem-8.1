#include <iostream>
#include <string>
using namespace std;

int countVowel(string str)
{
	int i = str.size();
	int vowelcount = 0;
	for (int n = 0; n <= i; n++)
	{
		char indiv = str[n];
		if (indiv == 'A' || indiv == 'a' || indiv == 'e' || indiv == 'E' || indiv == 'I' || indiv == 'i' || indiv == 'O' || indiv == 'o' || indiv == 'U' || indiv == 'u')
		{
			vowelcount++;
		}
	}
	return vowelcount;
}
int main()
{
	string input;
	while (true)
	{
		cout << "Enter a string or Q to quit: ";
		getline(cin, input);
		if (input == "Q" || input == "q")
			break;
		cout << "Vowel count: " << countVowel(input) << endl;

	}

}
