#include <iostream>

#define SIZE 8

using namespace std;

int main() {
	int count;
	cin >> count;


	int arr[SIZE] = { 0 };
	for (int i = 0; i <count; i++) {
		int x;
		cin >> x;
		arr[x % 9] += 1;
	}

	int counter = 0;
	for (int i = 1; i <=SIZE/2; i++) {
		counter += arr[i] * arr[SIZE - i + 1];
	}
	counter += (arr[0]*(arr[0] - 1))/2;
	cout << counter;
	return 0;
}