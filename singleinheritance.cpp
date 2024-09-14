#include<iostream>
#include<string>
using namespace std;

class UNI {
public:
    string uni = "symbiosis";
    void discipline() {
        cout << "engineering" << endl;
    }
};

class DEPT : public UNI {
public:
    string dept = "Electronics & Telecommunication";
};

int main() {
    DEPT u1;
    u1.discipline();
    cout << u1.uni + " " + u1.dept << endl;
    return 0;
}
