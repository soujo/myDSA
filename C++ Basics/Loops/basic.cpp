// • Loops are iterative statements
// • Block of statements are repeatedly executed as long as condition is true
// • Condition given in loop must become false after some finite iterations otherwise its a
// infinite loop
// • Values used in condition must update inside the body of finite loop
// • Four types of loops
// •
// • pre-tested loop while()
// • post-tested loop do..while()
// • counter controlled loop for()
// • for each loop for Collections for_each()

#include <iostream>
#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main()
{
    // Printing numbers from 1-10

    for (int i=1;i<11;i++){
        cout<<i<<endl;
    }
    return 0;
}