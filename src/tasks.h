/*
 * Author:
 * Date:
 * Name:
 */
#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
void task_1(int num1, int num2){//big O(n) where n=num1-num2 or n=num2-num1
    if (num1<num2){
        cout<<num1<<" ";
        task_1(num1+1,num2);
    } else if (num1>num2){
        cout<<num1<<" ";
        task_1(num1-1, num2);
    } else if(num1==num2){
        cout<<num1<<endl;
    }
}
bool task_2(int n){//big O(log(n)) base is two(but it doesn't matter)
        if (n == 1) {
            return true;
        }
        else if (n < 1 || n % 2 != 0) {
            return false;
        }
        else {
            return task_2(n / 2);
        }
}
int task_3(int n) {//big O(log(n)), base of log is 10
    if (n < 10) {
        return n;
    }
    else {
        return n % 10 + task_3(n / 10);
    }
}
bool task_4(int n, int divisor = 2) {//big O(n), actually function is called n-2 times
    int i=1;
    if (n <= 2) {
        return (n == 2);
    }
    if (n==divisor){
        return true;
    }
    else if (n % divisor == 0) {
        return false;
    }
    return task_4(n, divisor + 1);
}
bool task_5(string& word, int start, int end) {//big O(word.length), actually function is called (word.length)/2 times
    if (start >= end) {
        return true;
    }
    if (word[start] != word[end]) {
        return false;
    }
    return task_5(word, start + 1, end - 1);
}
void task_6(int& max, int& secondMax) {//big O(n) where n=number of entered numbers
    int currentNumber;
    cin >> currentNumber;
    if (currentNumber == 0) {
        return;
    }
    if (currentNumber > max) {
        secondMax = max;
        max = currentNumber;
    } else if (currentNumber > secondMax && currentNumber != max) {
        secondMax = currentNumber;
    }
    task_6(max, secondMax);
}
int task_7(int n) {//big O(log(n))
    if (n < 10) {
        return n;
    }
    return (n % 10) * pow(10, (int)log10(n)) + task_7(n / 10);
}
//task 10
bool isVowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

void permuteString(const string& s, vector<char>& result, int currentIndex, vector<char>& vowels) {
    cout<<"called"<<endl;
    if (currentIndex == s.length()) {
        for (int i = 0, j = 0; i < s.length(); ++i) {
            if (isVowel(s[i])) {
                result[i] = vowels[j++];
            }
        }
        return;
    }
    if (isVowel(s[currentIndex])) {
        vowels.push_back(s[currentIndex]);
        sort(vowels.begin(), vowels.end());
        permuteString(s, result, currentIndex + 1, vowels);
        vowels.pop_back();
    } else {
        result[currentIndex] = s[currentIndex];
        permuteString(s, result, currentIndex + 1, vowels);
    }
}

string task_10(const string& s) {//big O(n!)
    vector<char> result(s.length());
    vector<char> vowels;
    permuteString(s, result, 0, vowels);
    return string(result.begin(), result.end());
}


