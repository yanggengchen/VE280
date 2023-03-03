#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(int argc, char* argv[]) {
	//if (argc == 1) return 0;
	for (int i = 1; i < 6; i++) {
		//string line = argv[i];
		string line;
		cin >> line;
		string out = {};
		istringstream iStream;
		iStream.str(line);
		char ch = {};
		bool flag = 1;
		while (iStream.get(ch)) { //judge if it only consist of characters
			if (((ch >= 'Z') && (ch <= 'a')) || (ch <= 'A') || (ch >= 'z')) {
				flag = 0;
			}
			else out = out + ch;
		}
		if (flag == 1) cout << out << ' ';
		if (i == 5) {
			if (flag == 1) cout << out << endl;
		}
	}
	return 0;
}