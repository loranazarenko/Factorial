#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int val, i, res;
	cin >> val;
	res = 1;
	for (i = 1; i < val; i++) {
		res = res * i;
		if(res == val) break;
	}
	cout << i;
	return 0;
}