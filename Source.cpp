#include<iostream>
using namespace std;
//function prototype:
int powerFunc(int x, int n);
int multi = 0;
int main()
{
	//variable declaration:
	int x = 0; int n = 0;
	//input\output:
	cout << "Enter a value for Base case : x : ";
	cin >> x;
	cout << "Enter a value for Exponent case : n : ";
	cin >> n;

	
	cout << "The Answer is: " << powerFunc(x, n);
	cout << endl;
	cout << "The multiplicaton done is: " << multi;
	cout << endl;

	return 0;
}
//Function:
int powerFunc(int x, int n) {
	if (n == 0)
		return 1;
	multi++;
	return powerFunc(x, n - 1) * x;
}
//-------------------------------------------------Problem 1: End
//#include<iostream>
//using namespace std;
//
//void CustomInsertionSort(int array[], int size);
//
//int main()
//{
//    int size;
//    cout << "Enter how many integers you want to be sorted: ";
//    cin >> size;
//
//    cout << endl;
//
//    // Dynamically allocating memory for an array of integers and then populating it with user-inputted values
//    int* elements = new int[size];
//    cout << size << " Integers will be sorted " << endl;
//
//    for (int i = 0; i < size; i++)
//        cin >> elements[i];
//
//    CustomInsertionSort(elements, size);
//
//    cout << "SORTED:   ";
//    for (int i = 0; i < size; i++)
//        cout << elements[i] << ", ";
//
//    delete[] elements; // Deallocate the dynamically allocated memory
//
//    return 0;
//}
//
//void CustomInsertionSort(int array[], int size)
//{
//    if (size <= 1)
//        return; // Base case
//
//    CustomInsertionSort(array, size - 1);
//
//    int lastElement = array[size - 1];
//    int prevIndex = size - 2; // This is an index to move around the array sorting the element's index.
//
//    while (prevIndex >= 0 && array[prevIndex] > lastElement)
//    {
//        array[prevIndex + 1] = array[prevIndex];
//        prevIndex -= 1;
//    }
//
//    array[prevIndex + 1] = lastElement; // After the loop finishes, prevIndex will have the index of the position where lastElement should be inserted.
//}



//---------------------------------------The End Of Problem#2:
// 
//#include <iostream>
//
//using namespace std;
//
//void towerOfHanoi(int tower, char begin, char mid, char end) {
//    if (tower > 0) {
//        towerOfHanoi(tower - 1, begin, end, mid);
//
//        cout << "Move disk " << tower << " from rod " << begin << " to rod " << end << endl;
//
//        towerOfHanoi(tower - 1, mid, begin, end);
//    }
//
//
//}
//
//int main() {
//    int numDisks = 0;
//    cout << "Enter the number of disks: ";
//    cin >> numDisks;
//
//    cout << "The sequence of moves involved in the Tower of Hanoi are:\n\n";
//
//    towerOfHanoi(numDisks, 'A', 'B', 'C');
//
//    return 0;
//}
// ////////////////////////////////////////////
// 
// 
// 
// 
// 
// 
// 
//#include <iostream>
//using namespace std;
//void towerOfHanoi(int tower, char begin, char mid, char end);
//
//void towerOfHanoi(int tower, char begin, char mid, char end) {
//    if (tower > 0) {
//        towerOfHanoi(tower - 1, begin, mid, end);
//        cout << "move disk " << tower << " from: " << begin << " to " << mid << endl;
//        towerOfHanoi(tower - 1, end, mid, begin);
//    }
//}
//int main() {
//    int tower = 0;
//    char begin = 'A';
//    char mid = 'C';
//    char end = 'B';
//    cout << "enter the number of disks: ";
//    cin >> tower;
//    towerOfHanoi(tower, begin, mid, end);
//    return 0;
//}


