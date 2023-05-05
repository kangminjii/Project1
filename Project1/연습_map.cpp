#include <map>
#include <iostream>

using namespace std;

int main()
{
	map<char, int> m;

	char s1[7] = "banana";

	m.insert({ 'a', 30});

	for (int i = 0; i < 7; i++)
	{
		if (m.find(s1[i]) != m.end())
		{
			cout << "find 'a'" << endl;
		}
		else
		{
			cout << "not find" << endl;
		}
	}
	





	return 0;
}