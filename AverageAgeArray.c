//program that uses an array and calculates the average age of a set of people
#include<stdio.h>
int main()
{
    int ages[5];// the int is the type, age is the name, [5] is the array and shows how many spaces are allocated for it 0-4
    int sum=0;
    float average=0;
    int i;
    printf("Enter the ages of 5 people\n");
    for (i=0; i<5;i++)
    {
        //enter an age
        scanf("%d", &ages[i]);
        //add current value in sum to the age entered eg. keep a running total of ages
        sum=sum+ages[i];
    }//end for loop
    //cast the variable sum to be a float just for this line of code
    average=(float)sum/5;
    printf("The average is %.1f",average);
    return 0;
}//end main 