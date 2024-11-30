#include<iostream>
using namespace std;

void swap_arr(int* ar) {
	cout << sizeof(ar)<<" ";
	for (size_t i = 0; i < 5; i++) {
		/*int temp = *(ar + i);
		*(ar + i) = *(ar + 9 - i);
		*(ar + 9 - i) = temp;*/
		swap(*(ar + i), *(ar + 9 - i));
	}
}

int main() {
	int arr[10];
	for (size_t i = 0; i < sizeof(arr)/sizeof(int); i++) {
		*(arr + i) = i;
	}
	swap_arr(arr);
	for (size_t i = 0; i < sizeof(arr) / sizeof(int); i++) {
		cout << *(arr + i);
	}
}