#include<iostream>
using namespace std;

void swap_a_b(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main() {
	int a = 10;
	int b = 20;
	int* ap = &a;
	int* bp = &b;
	swap_a_b(ap, bp);
	cout << a << " " << b;
}