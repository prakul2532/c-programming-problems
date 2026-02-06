// Q1.) Check for Even and Odd numbers
#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "enter the value of num :- ";
    cin >> num;
    if(num%2==0){
        cout << "the " << num << " is even" << "\n";
        cout << "programme is executed";
    }
    else{
        cout << "the " << num << " is odd" << "\n";
        cout << "programme is executed";
    }
    return 0;
}
// Q2.) Largest among three
#include <iostream>
using namespace std;

int main(){
    int n , max=0;
    cout << "enter the length of an array :- ";
    cin >> n;
    int num[n];
    for(int i=0;i<n;i++){
        cout << "enter the number :- ";
        cin >> num[i];
    }
    for(int i=0;i<n;i++){
        if(num[i]>max){
            max = num[i];
        } else {
            continue ;
        }
    }
    cout << "the maximumm number is :- " << max;
    return 0;
}
// Q3.) Vowel consonant check 
#include <iostream>
using namespace std;

int main(){
    char choice, random;

    do {
        cout << "enter the letter :- ";
        cin >> random;

        if(random == 'a' || random == 'e' || random == 'i' || random == 'o' || random == 'u' ||
           random == 'A' || random == 'E' || random == 'I' || random == 'O' || random == 'U') {
            cout << random << " is a vowel\n";
        } else {
            cout << random << " is a consonant\n";
        }

        cout << "do you want to try again (y/n) :- ";
        cin >> choice;

    } while (choice == 'y');

    return 0;
}
// Q4.) Leap year check 
#include <iostream>
using namespace std;

int main(){
    int year;
    cout << "enter the year :- ";
    cin >> year;
    if(year%4==0){
        cout << "it is a leap year" << "\n";
        cout << "thank you for using our program";
    } else {
        cout << "it is not a leap year" << "\n";
        cout << "thank you for using our program";
    }
}
// Q5.) Multiplication table 
#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "enter the number whose table you want to print";
    cin >> num;
    for(int i=1;i<=10;i++){
        cout << num << "X" << i << "=" << num * i << "\n";
    }
    cout << "thank you for using our program";
    return 0;
}
// Q6.) Sum of n natural numbers
#include <iostream>
using namespace std;

int main(){
    int number,sum;
    cout << "enter the value of number " ;
    cin >> number;
    sum = 0;
    for(int i=0;i<=number;i++){
        sum += i;
    }
    cout << "the sum of first " << number << "natural numbers :- " << sum;
    return 0;
}
// Q7.) Factorial of a number
#include <iostream>
using namespace std;

int main(){
    int number,factorial;
    cout << "enter the number whose factorial you want to calculate";
    cin >> number;
    if(number==0 || number ==1){
        cout << "factorial of " << number << " is 1";
    } else {
        factorial = 1;
        for(int i=2;i<=number;i++){
            factorial *= i;
        }
        cout << "factorial of " << number << " is " << factorial;
    }
    return 0;
}
// Q8.) reverse a number
#include <iostream>
using namespace std;

int main(){
    int number,Tens_number,Units_number,new_number;
    cout << "enter the number whose reverse you want to see :- ";
    cin >> number;
    Units_number = number % 10;
    Tens_number = number / 10;
    new_number = (Units_number*10) + Tens_number;
    cout << "The reverse of " << number << " is " << new_number;
    return 0; 
}
// Q9.) HCF of two numbers
#include <iostream>
using namespace std;

int main(){
    int num1,num2;
    cout << "enter the first number :- ";
    cin >> num1;
    cout << "enter the second number :- ";
    cin >> num2;
    while(num1 != num2){
        if(num1 > num2){
            num1 -= num2;
        } else {
            num2 -= num1;
        }
    }
    cout << "The HCF is " << num1;
}
