
#include <iostream>
using namespace std;
int main()
{
//     //case aur 1 ke bich me space imp h vrna kaam nhi krega
    cout << "Menu" << endl;
    cout << "1. Add\n"
         << "2. Sub\n"
         << "3. Mul\n"
         << "4. Div\n";
    int option;
    cout << "Enter your choice no." << endl;
    cin >> option;
    int a, b, c;
    cout << "Enter two numbers" << endl;
    cin >> a >> b;
    switch (option)
    {
    case 1:
        c = a + b;
        break;
    case 2:
        c = a - b;
        break;
    case 3:
        c = a * b;
        break;
    case 4:
        c = a / b;
        break;
    }
    cout << c << endl;
    return 0;
}
//QUESTION-1
// Write a Program to offer discounts on total bill Amount
// Program should take Total Amount as input and calculate discount
//             If bill amount < 100 no discount
//             If bill amount is >= 100 and less than 500 then 10 % discount 
//             If bill amount is >= 500 then 20 % discount
#include <iostream>
using namespace std;
int main()
{
    float billAmount;
    float discount=0.0;

cout<<"Enter Bill Amount:";
cin>>billAmount;
if(billAmount>=500)   
{  
   discount=billAmount*20/100;
}
else if(billAmount>=100 && billAmount<500)  
  {
      discount=billAmount*10/100;
  }
cout<<"Bill Amount is:"<<billAmount<<endl;
cout<<"Discount is :"<<discount<<endl;
cout<<"Discounted Amount is:"<<billAmount-discount<<endl;

return 0;
}

//QUESTION-2
// All years which are perfectly divisible by 4 are leap years except for
// century years(years ending with 00)which is leap year only it is
// perfectly divisible by 400.
// For example:2012,2004,1968 etc are leap year but,1971,2006
// etc are not leap year.Similarly,1200,1600,2000,2400 are leap
// years but,1700,1800,1900 etc are not.
//                                      ▸
// In this program below,user is asked to enter a year and this
// program checks whether the year entered by user is leap year or
// not.
#include <iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Enter a year:";
    cin>>year;
    if(year%4==0)
    {
        if(year%100==0)
        {
            if(year%400==0)
            {
                cout<<year<<" is a leap year.";
            }
            else
            {
                cout<<year<<" is not a leap year. ";
            }
        }
        else
        {
            cout<<year<<" is a leap year.";
        }
    }
    else
    {
        cout<<year<<" is not a leap year.";
    }
return 0;
}
