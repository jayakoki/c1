#include<stdio.h>
#include <stdio.h>
int main()
{
    int low, high, i, flag;
    printf("Enter two numbers(intervals): ");
    scanf("%d %d", &low, &high);

    printf("Prime numbers between %d and %d are: ", low, high);

    while (low < high)
    {
        flag = 0;

        for(i = 2; i <= low/2; ++i)
        {
            if(low % i == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
            printf("%d ", low);

        ++low;
    }

    return 0;
}

Output

Enter two numbers(intervals): 20 
50
Prime numbers between 20 and 50 are: 23 29 31 37 41 43 47

In this program, the while loop is iterated (high - low - 1) times.

In each iteration, whether low is a prime number or not is checked and the value of low is incremented by 1 until low is equal to high.

Visit this page to learn more on how to check whether a number is prime or not.

If the user enters larger number first, this program doesn't work as intended. You can solve this issue by swapping the numbers if the user enters larger number first.
Example #2: Display Prime Numbers Between two Intervals When Larger Number is Entered first

#include <stdio.h>
int main()
{
    int low, high, i, flag, temp;
    printf("Enter two numbers(intevals): ");
    scanf("%d %d", &low, &high);
    if (low > high) {
        temp = low;
        low = high;
        high = temp;
    }

    printf("Prime numbers between %d and %d are: ", low, high);

    while (low < high)
    {
        flag = 0;

        for(i = 2; i <= low/2; ++i)
        {
            if(low % i == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
            printf("%d ", low);

        ++low;
    }

    return 0;
}

 
