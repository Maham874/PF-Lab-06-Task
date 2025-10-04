#include <stdio.h>

int main() {
    int num;

    printf("Enter numbers (enter 0 to stop):\n");

    while (1) {  
        scanf("%d", &num);  

        if (num == 0) {
            break;           
        }

        printf("You entered: %d\n", num);
    }

    printf("Program stopped because you entered 0.\n");

    return 0;
}