#include <iostream>
#include <cstring>
#include <cstdlib>   
#include <cstdio>    
using namespace std;

int main() {
    char str1[50] = "Hello";
    char str2[] = " World";
    char str3[] = "!!!";
    
    //           strcat                                  //
    strcat(str1, str2);
    cout << "After strcat: " << str1 << endl;

    //        strncat                              //
    strncat(str1, str3, 2);
    cout << "After strncat: " << str1 << endl;

    //              strcmp                               //
    char a[] = "apple";
    char b[] = "banana";
    int result = strcmp(a, b);
    cout << "strcmp result: " << result << endl;

    //       string to number                        //
    char numStr[] = "123";
    int num = atoi(numStr);
    cout << "String to int: " << num << endl;

    //          number to string                           //
    int x = 456;
    char buffer[10];
    sprintf(buffer, "%d", x);
    cout << "Int to string: " << buffer << endl;

    return 0;
}
