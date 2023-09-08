#include<iostream>
using namespace std;

int main() {
    double num_1 , num_2 , num_3;

    cout<<"Enter three numbers : ";
    cin >> num_1 >> num_2 >> num_3;

    if(num_1>= num_2 && num_1>=num_3) {
        cout << "the greatest number is : " << num_1 << endl;

    }
    else if (num_2 >= num_1 && num_1 >= num_3) {
        cout << "the greatest number  is : " << num_2 << endl;

    }
    else {
        cout << "the greatest number is : " << num_3 << endl;

    }





    return 0;
}
