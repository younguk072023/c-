#include <iostream>
using namespace std;
int main() {
	char ch;
	int vowel = 0, conso = 0;
	cout << "영문자 입력 후 ctrl + z 입력" << endl;
	while (cin >> ch) {
		if ((int)ch < 97 || (int)ch > 122) {
			cout << "Check to Alphabet" << endl;
			continue;

		}
		switch (ch) {
		case 'a':
			vowel++;
			break;
		case 'e':
			vowel++;
			break;
		case 'i':
			vowel++;
			break;
		case 'o':
			vowel++;
			break;
		case 'u':
			vowel++;
			break;
		default:
			conso++;
			break;


		}


	}
	cout << "모음 : " << vowel << endl;
	cout << "자음 : " << conso << endl;


	return 0;
}