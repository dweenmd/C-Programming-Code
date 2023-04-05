/*
You are given a string  S of small letters.Now sort the string in ascending order using frequency array.Write the steps to solve this problem with  proper diagram.Lastly write a C program for it and use function in this program. 	   (10)

Note - The given input may contain duplicate characters

Sample input    Sample output
  adsarbrro	    aabdorrrs


*/
#include <stdio.h>
#include <string.h>
void assendingorder(int arr[])
{
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] > 0)
        {
            while (arr[i] != 0)
            {
                printf("%c", i + 97);
                arr[i] -= 1;
            }
        }
    }
}
int main()
{

    char str[100];
    scanf("%s", str);
    int size = strlen(str);
    int arr[26];
    //    for (int i = 0; i < size; i++)
    //    {
    //        printf("%d ", str[i] - 97);
    //    }
    for (int i = 0; i < 26; i++)
    {
        arr[i] = 0;
    }
    for (int i = 0; i < size; i++)
    {
        arr[str[i] - 97]++;
    }
    //    for(int i =0;i<26 ; i++){
    //        printf("\n %d==>%d",i,arr[i]);
    //    }
    printf("\n");
    assendingorder(arr);
}

/*
#include <stdio.h>
#include <string.h>

void Assendingingsort(char dween[], int size);

int main()
{
    char dween[100];
    scanf("%s", dween);
    int size = strlen(dween);
    Assendingingsort(dween, size);
    printf("\n");
    puts(dween);

    return 0;
}

void Assendingingsort(char dween[], int size)
{
    for (int i = 0; i < (size); i++)
    {
        for (int j = 0; j < (size - 1); j++)
        {
            if (dween[j] > dween[j + 1])
            {
                char temp = dween[j];
                dween[j] = dween[j + 1];
                dween[j + 1] = temp;
            }
        }
    }
}
*/
