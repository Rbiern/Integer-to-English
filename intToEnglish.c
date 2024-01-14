#include <stdio.h>


void lookUp(int userInput) {
    switch (userInput){
        case 1: printf("one"); break;
        case 2: printf("two"); break;
        case 3: printf("three"); break;
        case 4: printf("four"); break;
        case 5: printf("five"); break;
        case 6: printf("six"); break;
        case 7: printf("seven"); break;
        case 8: printf("eight"); break;
        case 9: printf("nine"); break;
        case 10: printf("ten"); break;
        case 11: printf("eleven"); break;
        case 12: printf("twelve"); break;
        case 13: printf("thirteen"); break;
        case 14: printf("fourteen"); break;
        case 15: printf("fifteen"); break;
        case 16: printf("sixteen"); break;
        case 17: printf("seventeen"); break;
        case 18: printf("eighteen"); break;
        case 19: printf("nineteen"); break;
        case 20: printf("twenty"); break;
        case 30: printf("thirty"); break;
        case 40: printf("forty"); break;
        case 50: printf("fifty"); break;
        case 60: printf("sixty"); break;
        case 70: printf("seventy"); break;
        case 80: printf("eighty"); break;
        case 90: printf("ninety"); break;
        default: break;
    }
}


int main(void) {   
    int userInput, temp;

    while (userInput != 0) {
        printf("\nPlease enter an integer between 1 and 999 (0 to quit): ");
        scanf("%d", &userInput);

        if ((userInput > 999) || (userInput <= -1)) {
            printf("Invalid input : Integer must be in range of 1-999");
            continue;
        }

        printf("You entered the number ");
        if (userInput > 99) {
            temp = userInput / 100;
            lookUp(temp);
            printf(" hundred");
            userInput = userInput % 100;
            if (userInput) {
                printf(" and ");
            } else {
                // rest userInput to a dummy value so that the program does not terminate at loop
                userInput = 1; 
                continue;
            }
        }
        if (userInput > 19) {
            if (!(userInput % 10)) {
                lookUp(userInput);
                continue;
            }
            temp = (userInput / 10) * 10;
            lookUp(temp);
            userInput = userInput % 10;
            printf("-");
            lookUp(userInput);
        } else {
            lookUp(userInput);
        }
    }
    return 0;
}