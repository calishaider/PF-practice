# include <iostream>
using namespace std ;

int main ()
{
    //Program to make calculator based on operator input by user

    double num1 , num2 , sum , sub , mul , div; 
    // double because user can also put decimal value
    // also it is also possibilty that division of two num results in
    // decimal value so to get full ans in decimal we use double 
    char Operator;
    // as i want to input signs of operator i can't use int so i use char
    // so i can get input of operator which i can store in char

    cout << "Enter first number : ";
    cin >> num1;

    cout << "Enter your operator (+,-,*,/) : ";
    cin >> Operator;

    cout << "Enter second number : ";
    cin >> num2;

    sum = num1 + num2;
    sub = num1 - num2;
    mul = num1 * num2;
    // div is in case / beacuse when i put 0 in num 2 or in both num 1 and 2 it 
    // calculate div first which give error beacuse it result infinity

    switch (Operator)
    {
        case '+':
        // can be  sum = num1 + num2;
        cout << "Your sum is : " << sum ;
        break ;

        case '-':
        // can be sub = num1 - num2;
        cout << "Your subtraction is : " << sub ;
        break ;

        case '*':
        // can be mul = num1 * num2;
        cout << "Your multiplication is : " << mul ;
        break ;

        case '/':

          if ( num2 == 0 ) // a/0 and 0/0 is infinity
          {
              cout << "Infinity" ;
          }
          else 
          {
              div = num1 / num2;
              cout << "Your division is : " << div ;
          }

        break ;

        default :    // if user put wrong operator
        cout << "Wrong operator" ;
        break ;
    }
} 