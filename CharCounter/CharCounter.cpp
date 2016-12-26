#include<iostream>
#include<map>
using namespace std;

int main(int argc, char *argv[])
{
	char string[] = "some test string !@#$^#!@%$";
	int size = sizeof(string);
	map<char, int> charMap;

	for (int i = 0; i < size; i++)
	{
		if (charMap.count(string[i]) < 1)
		{
			charMap.insert(pair<char, int>(string[i], 1));
		}
		else
		{
			charMap[string[i]]++;
		}
		
	}

	for (map<char, int>::iterator it = charMap.begin(); it != charMap.end(); ++it)
	{
		cout << it->first << ": " << it->second << "\n";
	}

	cout << "\n\nHit ENTER to exit...\n";
	cin.ignore();
}