#include <iostream>
#include <string>
using namespace std;
 
void init_code()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif // ONLINE_JUDGE
}


int main()
{
	init_code();
	
    string str;
 	string input;
 	getline(cin, str);
    getline(cin, input);
    cout << input.size() << endl;
    cout << "Hello, " << input;
 
    return 0;
}

