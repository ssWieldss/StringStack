//an = n!/(4^n)


#include <iostream>
#include <stack>
#include <string>
#include <vector>

using namespace std;

int fact(int n) {
	int t, answer;
	answer = 1;
	for (t = 1; t <= n; t++)
		answer = answer * (t);
	return(answer);
}

int grader(int n) {
	if (n == 0)
		return 1;
	if (n == 1)
		return 4;
	return 4 * (grader(n - 1));
}

vector<double> counter(vector<double> vec, int n) {

	double an = 0;

	if (n == 0) {
		vec.push_back(0);
		return vec;
	}

	if (n == 1) {
		vec.push_back(0.25);
		return vec;
	}

		an = static_cast<double>(fact(n))/(grader(n));
		vec.push_back(an);

	return vec;
}

int main() {

	system("chcp 1251");

	vector<double> vec;
	for(int i = 0; i < 6; i++)
	vec = counter(vec, i);
	cout << "Vector:" << endl;
	for (int i = 0; i < 6; i++)
		cout << vec[i] << " ";


	return 0;
}