#include <bits/stdc++.h> // header file
using namespace std;

/*Example Question
  Constraints:
  1 <= l <= 10^9
  1 <= b <= 10^9

  Input format:
  2  space seprated integer l and b

  Output Format
  Single number which is area of rectangle

  Sample Input:
  3 4

  Sample Output
  12

  */

int main()
{
  int l, b;
  cin >> l >> b;
  // Area of rectangle = Length * breadth
  cout << 1LL * l * b << endl;
}

// Basics

// print -> cout <<
// cout << "Hello World!" << endl;
// input -> cin >>  all the data types input can be taken through cin

// char , int , float , double , bool
// long int , long long int
// char c = 'a';
// int a = 3;
// double b = 3.5;
// a = 3.5;        // a will print 3 only
// bool d = false; //  0 is false and everthing other than 0 is true
// cout << c << " " << a << endl;

// long long int a = 12345 and long long a = 12345 both correct

// Arithematic Operators * , + , - , / , %
// cout << 25 + 7 << endl;
// cout << 25 - 7 << endl;
// cout << 25 * 7 << endl;
// cout << 25 / 7 << endl;
// cout << 25 % 7 << endl;

// a++ -> post increment
// ++a -> pre increment
// c-- -> post decrement
// --c -> pre decrement

// Relational Operator {== , != , > , >= , < , <=}

// Type Casting
// int c = 'a';
// cout << (int)c << endl; // prints ascii value of 'a' = 97

// Power -> Double > Float > Long Long Int > Long Int > Int > Characters
// Calculation is done in higher power data type
// First calculation is done and then stored
// double a = 3/2;
// cout << a; // prints 1 because 3 and 2 both were int and 3/2 is evaluated as 1 only
// cout << 3 / 2.0 << endl; // output -> 1.5
// as 2.0 is of type double and 3 -> int , calculation is done in double type
// 3/2.0 = 1.5;

// For Precedence and Associativity just follow table
// cout << 3 * 7 / 2 << endl; // 3*7/2 -> 21/2 -> 10

// Rough range Of Data Types
// -10^9 < int < 10^9
// -10^12 < long int < 10^12
// -10^18 < long long int < 10^18
// Different compilers may have different range
// but for Online CP use int or long long int only

// Overflow
// int a = 100000; // 10^5
// int b = 100000; // 10^5
// int c = a * b;      //   1410065408
// long int c = a*b;   // 1410065408
// long long int c = a*1LL*b; // 10000000000
// 1LL is a value 1 lonh long data type which is used so that calculation works in long long
// cout << c << endl;
// int mx = INT_MAX; // INT_MIN < int < INT_MAX
// cout << mx;

// when we overflow the int value it cycles back
// like INT_MAX + 1 = INT_MIN

// Double can be used to store very big number
// double a = 100000;
// double b = 100000;
// double c = a * b;
// cout << c << endl; // 1e+010 -> 10^10
// cout << fixed << c << endl; // 10000000000.000000
// cout << fixed << setprecision(0) << c << endl; // 10000000000
// c = 1e24; // 10^24;
// cout << fixed <<  c << endl; // 999999999999999983222784.000000
// Thats the problem with storing very big number in double
// We store big number in double at the cost of accuracy
// never use double float(Precision Erros in both) in cp unless required