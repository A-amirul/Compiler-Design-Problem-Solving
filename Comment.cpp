#include<conio.h>
#include <iostream>
using namespace std;
int main()
{
    string comment;
    cout << "Enter any comment:" << endl;
    cin >> comment;
    int stringLength = comment.length();
    if(((comment[0] == '-')&&(comment[1] == '-') && (comment[2] == '+')) &&
            ((comment[stringLength-3] == '+')&&(comment[stringLength-2] ==
                    '-')&&(comment[stringLength-1] == '-')))
    {
        cout << "Multi line comment";
    }
    else if((comment[0] == '-') && (comment[1] == '-'))
    {
        cout << "Single line comment" << endl;
    }
    else
    {
        cout << "Not a Comment";
    }
    getch();
}
