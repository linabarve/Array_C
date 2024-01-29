	
//  223 babies Mean weight of babies,Maximum weight,Minimum weight....
  

#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of babies born this month: ");
    scanf("%d", &n);

    float weights[n];
    for (int i = 0; i < n; i++) {
        printf("Enter the weight of baby %d (in kg): ", i + 1);
        scanf("%f", &weights[i]);
    }

    if (n == 0) {
        printf("No babies recorded.\n");
    }
    else
    {
        float sum = 0;
        float max = weights[0];
        float min = weights[0];

        for (int i = 0; i < n; i++)
        {
            sum = sum + weights[i];
            if (weights[i] > max)
            {
                max = weights[i];
            }
            if (weights[i] < min)
            {
                min = weights[i];
            }
        }

        float mean = sum / n;

        printf("\nProcessed Results:\n");
        printf("Mean weight of babies: %.2f kg\n", mean);
        printf("Maximum weight babies: %.2f kg\n", max);
        printf("Minimum weight babies: %.2f kg\n", min);
    }

    return 0;
}




