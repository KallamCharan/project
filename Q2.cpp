#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n);

int main() {
int n;
cout << "Enter the no of visitors has been entered: ";
cin >> n;

int arr[n];
cout << "select the this types of visitors upto ** " << n << " ** (0 for the teacher and )(1 for the student):-  " << endl;
for (int i = 0; i < n; i++) {
	cout<<"Enter the**"<< i+1 <<"** types of the visitors:- ";
	cin >> arr[i];
}

bubbleSort(arr, n);
cout << "\n ";
cout << "After all the scheduling\n ";
for (int i = 0; i < n; i++) {
cout << "The process want to wait  " << i <<"ms for taking the book :-" <<arr[i] << "\n ";
}
cout << endl;

return 0;
}

void bubbleSort(int arr[], int n) {
int temp;
for (int i = 0; i < n-1; i++) {
for (int j = 0; j < n-i-1; j++) {
if (arr[j] > arr[j+1]) {
temp = arr[j];
arr[j] = arr[j+1];
arr[j+1] = temp;
}
}
}
}

