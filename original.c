// Kyle Sappington Ricardo Rodriguez
/* #include <stdio.h>


const int DATA_SIZE = 12;

double calculateAverage(int nums[]);
int getUserInput();
void promptUser();

int main(){
    int userInt = getUserInput();
    printf("The User Entered: %d\n", userInt); 
    int nums[DATA_SIZE];
    nums[0] = userInt;
    for (int i = 1; i < DATA_SIZE; i++){
        nums[i] = i;
    }
    double average = calculateAverage(nums);
    printf("Average Value: %lf\n", average);
    return 0;
}


double calculateAverage(int nums[])
{
    double sum = 0;
    for (int n = 0; n < DATA_SIZE; n++)
    {
        sum += nums[n];
    }

    return sum / DATA_SIZE;
}

void promptUser(){
    printf("Hello. Enter a number: ");
}

int getUserInput()
{
    int userInput;
    promptUser();
    scanf("%d", &userInput);
    return userInput;
}
*/