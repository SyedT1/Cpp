#include<iostream>
#include<set>
#include<fstream>
using namespace std;
using ll = long long int;
void IO() {
	freopen("input.txt", "r", stdin);
}
int main() {
	ifstream file;
	file.open("input.txt");
	if (!file.is_open()) {
		cout << "Couldn't be opened\n";
	} else {
		string s;
		while (file.eof() != true) {
			getline(file, s);
			cout << s << '\n';
		}
	}
	file.close();
}
