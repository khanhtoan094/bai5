// bai5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

double tinhcv(double d, double r) { return (d + r) * 2; }
double tinhdt(double d, double r) { return d * r; }

int main()
{
    cout << "chuong trinh tinh chu vi va dien tich hinh chu nhat\n";

    double d, r;
    cout << "nhap chieu d: ";
    cin >> d;
    cout << "nhap chieu r: ";
    cin >> r;

    //tinh toan
    cout << "cv hinh chu nhat la: " << (d + r) * 2 << endl;
    cout << "dt hinh chu nhat la: " << d * r << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
