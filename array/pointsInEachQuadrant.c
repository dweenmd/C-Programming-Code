/*
#question
write a c program which can some 2D points into an array
( the x value is  one array and y value is another array) 
    Display how many points are in each quadrant.
    input
    4
    5 5
    8 8
    4 9
    3 1
*/
/*
#include <stdio.h>

int main()
{
    int numPoints;
    // Enter the number of points:
    scanf("%d", &numPoints);

    int xPoints[numPoints];
    int yPoints[numPoints];

    // input x and y values for each point
    for (int i = 0; i < numPoints; i++)
    {
        // Enter x coordinate for point
        scanf("%d", &xPoints[i]);

        // Enter y coordinate for point
        scanf("%d", &yPoints[i]);
    }

    int q1 = 0, q2 = 0, q3 = 0, q4 = 0;

    // count points in each quadrant
    for (int i = 0; i < numPoints; i++)
    {
        if (xPoints[i] > 0 && yPoints[i] > 0)
        {
            q1++;
        }
        else if (xPoints[i] < 0 && yPoints[i] > 0)
        {
            q2++;
        }
        else if (xPoints[i] < 0 && yPoints[i] < 0)
        {
            q3++;
        }
        else if (xPoints[i] > 0 && yPoints[i] < 0)
        {
            q4++;
        }
    }

    printf("Number of points in :%d %d %d %d\n", q1, q2, q3, q4);

    return 0;
}
*/
/*
from chat Gpt
Here is a C program that takes 2D points as input, stores them in separate arrays for x and y values, and calculates how many points are present in each quadrant:

c
Copy code
#include <stdio.h>

int main()
{
    int numPoints;
    printf("Enter the number of points: ");
    scanf("%d", &numPoints);
    
    int xPoints[numPoints];
    int yPoints[numPoints];
    
    // input x and y values for each point
    for(int i = 0; i < numPoints; i++)
    {
        printf("Enter x coordinate for point %d: ", i+1);
        scanf("%d", &xPoints[i]);
        
        printf("Enter y coordinate for point %d: ", i+1);
        scanf("%d", &yPoints[i]);
    }
    
    int q1 = 0, q2 = 0, q3 = 0, q4 = 0;
    
    // count points in each quadrant
    for(int i = 0; i < numPoints; i++)
    {
        if(xPoints[i] > 0 && yPoints[i] > 0)
        {
            q1++;
        }
        else if(xPoints[i] < 0 && yPoints[i] > 0)
        {
            q2++;
        }
        else if(xPoints[i] < 0 && yPoints[i] < 0)
        {
            q3++;
        }
        else if(xPoints[i] > 0 && yPoints[i] < 0)
        {
            q4++;
        }
    }
    
    printf("Number of points in Q1: %d\n", q1);
    printf("Number of points in Q2: %d\n", q2);
    printf("Number of points in Q3: %d\n", q3);
    printf("Number of points in Q4: %d\n", q4);
    
    return 0;
}
The program first prompts the user to enter the number of points they wish to input. 
Then, it creates two arrays to store the x and y values of each point.
 The program prompts the user to enter the x and y values for each point, and stores them in the respective arrays.

Next, the program initializes four variables to count the number of points in each quadrant. 
It then loops through each point in the arrays, and checks which quadrant the point is in by comparing the signs of the x and y values. 
If the point is in quadrant 1, the q1 counter is incremented, and so on.

Finally, the program displays the number of points in each quadrant.

Note that this program assumes that the user will enter valid integer values for the x and y coordinates of each point.
 If the user enters non-integer values, or the arrays are not large enough to store all the points entered, the program may produce unexpected results or terminate with an error.

*/
/*
#include <stdio.h>

int main() {
    int n, x, y, quadrant1 = 0, quadrant2 = 0, quadrant3 = 0, quadrant4 = 0;
    printf("Enter the number of points: ");
    scanf("%d", &n);

    int points[n][2];

    for (int i = 0; i < n; i++) {
        printf("Enter x and y coordinates of point %d: ", i+1);
        scanf("%d%d", &x, &y);
        points[i][0] = x;
        points[i][1] = y;

        if (x > 0 && y > 0) {
            quadrant1++;
        } else if (x < 0 && y > 0) {
            quadrant2++;
        } else if (x < 0 && y < 0) {
            quadrant3++;
        } else if (x > 0 && y < 0) {
            quadrant4++;
        }
    }

    printf("\nquadrant 1: %d\n", quadrant1);
    printf("quadrant 2: %d\n", quadrant2);
    printf("quadrant 3: %d\n", quadrant3);
    printf("quadrant 4: %d\n", quadrant4);

    return 0;
}
*/
#include <stdio.h>

int main() {
    int n, x, y, q1 = 0, q2 = 0, q3 = 0, q4 = 0;
    printf("Enter the number of points: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("Enter x and y coordinates of point %d: ", i);
        scanf("%d %d", &x, &y);

        if (x > 0 && y > 0) q1++;
        else if (x < 0 && y > 0) q2++;
        else if (x < 0 && y < 0) q3++;
        else if (x > 0 && y < 0) q4++;
    }

    printf("Quadrant 1: %d\n", q1);
    printf("Quadrant 2: %d\n", q2);
    printf("Quadrant 3: %d\n", q3);
    printf("Quadrant 4: %d\n", q4);

    return 0;
}