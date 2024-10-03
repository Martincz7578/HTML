#include <iostream>
#include <cmath>

double n1, n2;
char op;

using namespace std;

cout << "enter 1st number";
cin >> n1;
if(cin.fail()){
cout << "fail";
}

cout << "enter operator";
cin >> op;

cout << "enter 2nd number";
cin >> n2;
if(cin.fail()){
cout << "fail";
}

switch (op){
case '+':
cout << n1 + n2;
break;
case '-';
cout << n1 - n2;
break;
case '*':
cout << n1 * n2;
break;
case '/':
cout << n1 / n2;
break;
