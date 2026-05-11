/*
Code File Name: Chapter5Exercise1.cpp
Programmer: Maya Moton
Due Date: 04/26/26
*/

#include <iostream>
using namespace std;

int main() {
    int startingOrgansims;
    int days;
    double daily;
    int finalPopulation;

    // Input
    cout << "Enter starting population (least 2): ";
    cin >> startingOrgansims;

    while (startingOrgansims < 2) {
        cout << "Invalid. Enter a value of at least 2: ";
        cin >> startingOrgansims;
    }
    cout << "Enter average daily increase (%): ";
    cin >> daily;
    while (daily < 0) {
        cout << "Invalid. Enter a postitve number only: ";
        cin >> daily;
    }
    cout << "Enter number of days: ";
    cin >> days;
    while (days < 1) {
        cout << "Invalid. Enter at least 1 day: ";
        cin >> days;
    }
    //percentage to decimal
    double rate = daily / 100.0;
    finalPopulation = startingOrgansims;

    cout << "\nDay\tPopulation\n";
    cout << "-------------------\n";

    // loop for each day
    for (int day = 1; day <= days; day++) {
        cout << day << "\t" << (int)finalPopulation << endl;
        finalPopulation += finalPopulation * rate;
    }
    return 0;
}
