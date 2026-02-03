#include <iostream>
using namespace std;

int main() {
    int num; 
    int sum = 0;
    int digit;
    cout << "Enter a number: ";
    cin >> num;
while(num!=0){
        digit = num % 10;   
        sum += digit;       
        num /= 10;          
    }
    cout <<"The sum of the digits is"<< sum << endl;
    cout<<abs(sum)<<endl;
    return 0;
}