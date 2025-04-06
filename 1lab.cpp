#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

class Decimate {
public:
    string a, b;

    void initialization() {
        a = "";
        b = "";
    }
    void read() {
        cout << "Enter a: ";
        cin >> a;
        cout << "Enter b: ";
        cin >> b;
    }

    void arithmetic() {
        int sortA = stoi(sortt(a));
        int sortB = stoi(sortt(b));

        cout << "sum: " << sortA + sortB << endl;
        cout << "equals: " << (sortA == sortB ? "true" : "false") << endl;
        cout << "a > b: " << (sortA > sortB ? "true" : "false") << endl;
        multiply(); // Call the new multiply function
    }

    void display() {
        cout << endl;
        
        cout << "Sorted a: " << sortt(a) << endl;
        cout << "Sorted b: " << sortt(b) << endl;
        
        cout << endl;
    }

    string sortt(string& num) {
        bool isNegative = (num[0] == '-');
        string digits = (num[0] == '+' || num[0] == '-') ? num.substr(1) : num;

        sort(digits.rbegin(), digits.rend());

        return isNegative ? "-" + digits : digits;
    }

    // New function to multiply the sorted numbers
    void multiply() {
        int sortA = stoi(sortt(a));
        int sortB = stoi(sortt(b));
        cout << "multiply: " << sortA * sortB << endl;
    }
};

int main() {
    Decimate obj;
    obj.initialization();
    obj.read();
    obj.display();
    obj.arithmetic();

    return 0;
}