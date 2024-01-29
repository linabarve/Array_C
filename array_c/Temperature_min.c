  // highestMaxTemp,lowestMinTemp, hottestDay, coldestDay.....

 

#include <stdio.h>

int main() {
    int n; 
    printf("Enter the number of days: ");
    scanf("%d", &n);

    int maxTemp[n], minTemp[n]; 
    int sumMaxTemp = 0, sumMinTemp = 0;
    int highestMaxTemp = -100, lowestMinTemp = 100;
    int hottestDay = 0, coldestDay = 0;

    for (int i = 0; i < n; i++) {
        printf("Enter max temperature for day %d: ", i + 1);
        scanf("%d", &maxTemp[i]);

        printf("Enter min temperature for day %d: ", i + 1);
        scanf("%d", &minTemp[i]);

        
        sumMaxTemp += maxTemp[i];
        sumMinTemp += minTemp[i];

        
        if (maxTemp[i] > highestMaxTemp) {
            highestMaxTemp = maxTemp[i];
            hottestDay = i + 1;
        }

        
        if (minTemp[i] < lowestMinTemp) {
            lowestMinTemp = minTemp[i];
            coldestDay = i + 1;
        }
    }

    // Calculate mean temperatures
    float meanMaxTemp = (float)sumMaxTemp / n;
    float meanMinTemp = (float)sumMinTemp / n;

    printf("\nResults:\n");
    printf("Mean Maximum Temperature: %.2f\n", meanMaxTemp);
    printf("Mean Minimum Temperature: %.2f\n", meanMinTemp);
    printf("Highest Maximum Temperature: %d\n", highestMaxTemp);
    printf("Lowest Minimum Temperature: %d\n", lowestMinTemp);
    printf("Hottest Day Number: %d\n", hottestDay);
    printf("Coldest Day Number: %d\n", coldestDay);

    return 0;
}
