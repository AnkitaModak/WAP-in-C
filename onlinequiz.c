#include <stdio.h>
#include <string.h>

void printquestion();

int main() {
    printquestion();
    return 0;
}

void printquestion() {
    char choice;
    char ans[100];  
    int point = 0;
    FILE *fptr, *file;

    fptr = fopen("questions.txt", "r");
    file = fopen("answer.txt", "r");

    if (fptr == NULL || file == NULL) {
        printf("Error opening file!\n");
        return;
    }

    char question[256];
    char correctanswer[256];

    do { 
        printf("\nDO YOU WANT TO PLAY ONLINE QUIZ? (type 'y' for yes or 'n' for no): ");
        scanf(" %c", &choice);
        getchar(); 

        if(choice == 'y' || choice == 'Y') {
            if (fgets(question, sizeof(question), fptr) != NULL && fgets(correctanswer, sizeof(correctanswer), file) != NULL) {
                
                correctanswer[strcspn(correctanswer, "\n")] = 0;

                printf("\n%s\n", question);
                printf("Enter your answer: ");
                fgets(ans, sizeof(ans), stdin);
                ans[strcspn(ans, "\n")] = 0;  

                if (strcmp(ans, correctanswer) == 0) {
                    printf("You are right!\n");
                    point++;
                } else {
                    printf("Oops, that's wrong!\n");
                }
            } else {
                printf("\nNo more questions available!\n");
                break;
            }
        } else if(choice == 'n' || choice == 'N') {
            printf("Thank you for playing!\n");
            printf("You got %d answers right!\n", point);
            break;
        } else {
            printf("Please provide a correct input!\n");
        }

    } while(1); 

    fclose(fptr);
    fclose(file);
}
