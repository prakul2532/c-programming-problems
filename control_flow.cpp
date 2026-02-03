// // Q1.) Check for Even and Odd numbers
// #include <iostream>
// using namespace std;

// int main(){
//     int num;
//     cout << "enter the value of num :- ";
//     cin >> num;
//     if(num%2==0){
//         cout << "the " << num << " is even" << "\n";
//         cout << "programme is executed";
//     }
//     else{
//         cout << "the " << num << " is odd" << "\n";
//         cout << "programme is executed";
//     }
//     return 0;
// }
// // Q2.) Largest among three
// #include <iostream>
// using namespace std;

// int main(){
//     int n , max=0;
//     cout << "enter the length of an array :- ";
//     cin >> n;
//     int num[n];
//     for(int i=0;i<n;i++){
//         cout << "enter the number :- ";
//         cin >> num[i];
//     }
//     for(int i=0;i<n;i++){
//         if(num[i]>max){
//             max = num[i];
//         } else {
//             continue ;
//         }
//     }
//     cout << "the maximumm number is :- " << max;
//     return 0;
// }
// // Q3.) Vowel consonant check 
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