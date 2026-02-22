#include<iostream>
using namespace std;

void question_1(){
    int num;
    cout << "Enter a Number";
    cin >> num;
    if(num%2==0){
        cout << "It is an even number";
    } else {
        cout << "It is an odd number";
    }
}
void question_2(int age){
    if(age < 12){
        cout << "You are a child";
    } else if(age >=12 && age <=18){
        cout << "You are teenager";
    } else {
        cout << "You are an adult";
    }
}
void question_3(){
    int num , i = 0 , sum = 0;
    cout << "Enter the value of number :- ";
    cin >> num;
    while(i <= num){
        sum = sum + i;
        i++;
    }
    cout << "The sum of " << num << " numbers is " << sum;
}
void question_4(){
    int num1 , num2 , num3 , num4 , sum = 0;
    cout << "enter the values of 4 numbers :- ";
    cin >> num1 >> num2 >> num3 >> num4;
    do {
        sum = num1 + num2 + num3 + num4 ;
        cout << "The sum of " << num1 << " , " << num2 << " , " << num3 << " , " << num4 << " is " << sum;
    } while(false);
}
void question_5(){
    int num_row , num_column;
    cout << "enter the number of rows :- ";
    cin >> num_row;
    cout << "enter the number of columns :- ";
    cin >> num_column;
    for(int i = 0; i < num_row; i++){
        for(int j = 0; j < num_column; j++){
            cout << "*";
        }
        cout << endl;
    }
}
void question_6(){
    int num_column , num_row;
    cout << "enter the row number :- ";
    cin >> num_row;
    cout << "enter the column number :- ";
    cin >> num_column;
    for(int i = 0; i < num_row; i++){
        for(int j = 0; j < num_column; j++){
            if(i == 0 || j == 0 || i == (num_row-1) || j == (num_column-1)){
                cout << "*";
            } else {
                cout << " ";
            }

        }
        cout << endl;
    }
}
int main(){
    question_6();
    return 0;
}
