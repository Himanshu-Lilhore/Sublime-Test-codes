/* 
author : a_neutron_star  (Himanshu Lilhore)
*/

#include <bits/stdc++.h>

using namespace std;

void init_code();  // for online judge 
void fastio();     // for fast I/O

int main ()
{
	init_code();
	fastio();

	// inputs
	string what;
	string subdivision;
	int letterNo;
	int day, month, year;
	int sanctionRateInt, sanctionRateDecimal;
	int amtInt, amtDec;
	int agNo;


	// work
	getline(cin,what);
	getline(cin,subdivision);
	cout << "Construction of " << what << " at sub-division " << subdivision << endl;


	// Letter No. + it's date
	cin >> letterNo;
	cin >> day >> month >> year;
	cout << letterNo << "/" << (day<10?"0":"") << day << "-" << (month<10?"0":"") << month << "-20" << year << endl;


	// Sanction Rate
	cin >> sanctionRateInt >> sanctionRateDecimal;
	string dec;
	if(sanctionRateDecimal <10)
		dec = "0";
	else
		dec = "";
	cout << sanctionRateInt << "." << dec << sanctionRateDecimal << "% below" << endl;


	// Amount
	cin >> amtInt >> amtDec;
	string amtt;
	if(amtDec == 0)
		amtt = "00";
	else if(amtDec < 10)
		amtt = "0";
	else
		amtt = "";
	cout << amtInt << "." << amtt << amtDec << endl;


	// Ujjain
	cout << "Ujjain" << endl;


	// agNo
	cin >> agNo;
	cout << agNo << endl;


	// Date
	int dateDay, dateMonth, dateYear;
	cin >> dateDay >> dateMonth >> dateYear;
	cout << (dateDay<10?"0":"") << dateDay << "-" << (dateMonth<10?"0":"") << dateMonth << "-20" << dateYear << endl;


	return 0;
}


void init_code()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif // ONLINE_JUDGE
}
void fastio()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}