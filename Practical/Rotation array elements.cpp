#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "Enter no. of ele. you want to enter:";
	cin >> n;
	
	int array[10];
	cout << "enter ele:";
	
	for(int i = 0; i<n; i++) {
		cin >> array[i];
	}
	
	char dir;
	cout << "choose between  L/R:";
	cin  >> dir;
	
	int rotate;
	cout << "No. of rot:";
	cin >> rotate;
	
    rotate = rotate % n;

    if (dir == 'L' || dir == 'l') {
        // Left rotation
        for (int r = 0; r < rotate; r++) {
            int first = array[0];
            for (int i = 0; i < n - 1; i++) {
                array[i] = array[i + 1];
            }
            array[n - 1] = first;
        }
    }
    else if (dir == 'R' || dir == 'r') {
        // Right rotation
        for (int r = 0; r < rotate; r++) {
            int last = array[n - 1];
            for (int i = n - 1; i > 0; i--) {
                array[i] = array[i - 1];
            }
            array[0] = last;
        }
    }
    else {
        cout << "Invalid direction entered!" << endl;
        return 0;
    }
    
    cout << "Array after rotation: ";
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}
