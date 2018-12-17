#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";


    // Declare second integer, double, and String variables.
    int x;
    double y;
    string z;

    // Read and save an integer, double, and String to your variables.
    cin >> x >> y ;


    // Print the sum of both integer variables on a new line.
    int sum = x + i;
    cout << sum << endl;

    // Print the sum of the double variables on a new line.

    double sum_d = d + y;
    cout << fixed << setprecision(1) << double(sum_d) << endl;
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    getline(cin >> ws, z);

    cout << s + z << endl;

    return 0;
