#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;


int main() {

	vector<string> v;
	string n;
	ifstream in("input.txt");
	ofstream out("output.txt");
	while (!in.eof()) {
		getline(in, n);
		v.push_back(n);
	}

	string s = v[0];
	int min = s.length(), kol = 0, pos;

	for (int i = 2; i < v.size(); i++) {
		int k = 0;
		for (int j = 0; j < s.length(); j++)
			if (v[i][j] != v[0][j])
				k++;
		if (k > min) {
			v[i] = "7";

		}
		if (k < min) {
			min = k;
			pos = i;
		}
	}
}