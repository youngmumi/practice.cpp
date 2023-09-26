#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {

	string password;

	int Capital_letter = 0, Small_letter = 0, Special_character = 0;

	cout << "암호를 입력하시오: ";
	getline(cin, password);

	for (char ch : password) {

        if (isupper(ch))
            Capital_letter++;
        else if (islower(ch))
            Small_letter++;
        else if (ispunct(ch))
            Special_character++;
        else
            continue;
	}

    if (Capital_letter >= 1 && Small_letter >= 1 && Special_character >= 1)
        cout << "안전합니다." << endl;
    else
        cout << "안전하지 않습니다." << endl;

    system("pause");

    return 0;

}
