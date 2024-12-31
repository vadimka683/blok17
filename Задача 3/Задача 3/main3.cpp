#include<iostream>
using namespace std;

bool sub(const char* a, const char* b) {
	int i = 0;
	while (*(a + i) != '\0') {
		if (*(a + i) == *(b)) {
			int j = 0;
			while (*(b + j) != '\0')
			{
				if (*(b + j) != *(a + i)) {
					break;
				}
				i++;
				j++;
				if (*(b + j) == '\0') {
					return true;
				}
			}
		}
		else {
			i++;
		}
	}
	return false;
}

int main() {
	const char* a = "1231235";
	const char* b = "1235";
	const char* c = "banana";
	if (sub(a, b)) { cout << "true\n"; }
	else { cout << "false\n"; }
	if(sub(a,c)) { cout << "true"; }
	else { cout << "false"; }
}