// Name: Danny Casteel
// Program 2 (4 Numbers)
// PGM In class 4 numbers input
//      print increasing, decreasing, largest, small, average

#include <iostream>
#include <iomanip>
using namespace std;

// Insertion sort function
void insertionSort(int arr[], int length) {
    for (int i = 1; i < length; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    // read in 4 values into array
    //  sort array
    //  largest smallest
    //  compute and out average

    int arr[4];
    int sum = 0;
    double numAverage = 0;
    char userChoice = 'Y';

    while (userChoice == 'Y') {

        cout << "Please enter 4 numbers: " << endl;
        for (int i = 0; i < 4; ++i) {
            std::cin >> arr[i]; // std:: is a scope id
            sum += arr[i];
        }

        numAverage = sum / 4;

        // sort array
        insertionSort(arr, 4);

        cout << "The largest value is: " << arr[3] << endl;
        cout << "The smallest value is: " << arr[0] << endl;
        cout << "The average value is: ";
        cout << fixed << setprecision(2) << numAverage; //makes average output to 2 decimal places
        cout << endl;

        cout << "The array in increasing order: ";
        for (int i = 0; i < 4; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;

        cout << "The array in decreasing order: ";
        for (int i = 3; i >= 0; --i) {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << "Would you like to go again? Y or N: ";
        cin >> userChoice;
        userChoice = toupper(userChoice); //makes userChoice a capital character
    }
}