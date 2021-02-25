// EthanLab4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Queue.h"
#include "Queue.cpp"

using namespace std;

int main() {
    int ch;
    cout << "1) Insert element to queue" << endl;
    cout << "2) Delete element from queue" << endl;
    cout << "3) Display all the elements of queue" << endl;
    cout << "4) Exit" << endl;
    do {
        cout << "Enter your choice : " << endl;
        cin >> ch;
        switch (ch) {
        case 1: Insert();
            break;
        case 2: Delete();
            break;
        case 3: Display();
            break;
        case 4: cout << "Exit" << endl;
            break;
        default: cout << "Invalid choice" << endl;
        }
    } while (ch != 4);
    return 0;
}