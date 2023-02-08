#include <stdio.h>

void func(int* param)
{
    param[0] = 10;
    param[1] = 20;
    param[2] = 30;
    param[3] = 10;
}

int* getNumbers() 
{
    static int arr[4] = { 1,2,3,4};
    return arr;
}

int main()
{
    int* num = getNumbers();
    int clase[4] = { 0,0,0,0 };

    func(arr);
    int i;
    int j;
    for(i = 0; i < 4; i++)
    {
        for(j=0; i<4; j++)
        {
            if(num[i] > num[j])
            {
                clase[j]++;
            }
            else if (num[i] < num[j])
            {
                clase[i]++;
            }
        }
    }
    
    for (i = 0; i < 4; i++)
    {
        printf("%d번 학생의 점수: %d | 등수: %d\n", i+1, num[i], clase[i]);
    }
    printf("\n");
    return 0;
}