/*
 * Author:
 * Date:
 * Name:
 */

#include <iostream>
#include "../include/tasks.h"

int main() {
    int n=0;
    string word;
    cout << "Task 1" << endl;
    int num1;
    int num2;
    cin>>num1;
    cin>>num2;
    // call for task 1
    task_1(num1, num2);//big O(n) where n=num1-num2 or n=num2-num1
    cout << "Task 2" << endl;
    // call for task 2
    cin>>n;
    if(task_2(n)){//big O(log(n))
        cout<<"YES"<<endl;
    } else{
        cout<<"NO"<<endl;
    }
    cout << "Task 3" << endl;
    // call for task 3
    cin>>n;
    cout<<task_3(n)<<endl;//big O(log(n))
    cout << "Task 4" << endl;
    // call for task 4
    cin>>n;
    if(task_4(n, 2)){//big O(n)
        cout<<"YES"<<endl;
    } else{
        cout<<"NO"<<endl;
    }
    cout << "Task 5" << endl;
    // call for task 5
    cin>>word;
    if (task_5(word, 0, word.size()-1)){//big O(n) where n=word.size()
        cout<<"YES"<<endl;
    } else{
        cout<<"NO"<<endl;
    }
    cout<<"Task 6"<<endl;
    int max = 0;
    int secondMax = 0;
    task_6(max, secondMax);//big O(n) where n=number of entered numbers
    cout<<secondMax<<endl;
    cout<<"Task 7"<<endl;
    cin>>n;
    cout<<task_7(n)<<endl;//big O(log(n))
    cout<<"Task 10"<<endl;
    cin>>word;
    cout<<task_10(word)<<endl;//big O(n!)
    return 0;
}

