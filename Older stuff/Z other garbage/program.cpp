/* 
author : a_neutron_star  (Himanshu Lilhore)
*/
#include <iostream>
using namespace std;

void init_code(){
	//fast_io;
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif // ONLINE_JUDGE
}

int main ()
{
	init_code();
	int age = 0;
	cin >> age;
	cout << "Your age is " << age << endl;
	return 0;
}