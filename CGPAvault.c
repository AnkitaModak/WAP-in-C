#include <stdio.h>

int main() {
  FILE *fptr;
    fptr = fopen("student.txt" , "w");
    char name[100];
    char sub[100];
    int sem;
    float cgpa;
    fprintf(fptr, "+----------------------+-----------------+----------+------+\n");
    fprintf(fptr, "| %-20s | %-15s | %-8s | %-4s |\n", "STUDENT NAME", "SUBJECT", "SEMESTER", "CGPA");
    fprintf(fptr, "+----------------------+-----------------+----------+------+\n");
    printf("::Enter Student's Names::")
    for(int i = 0; i < 6; i++){
        printf("Enter student's name: ");
        scanf("%s" , &name);
        printf("Enter sub:");
        scanf("%s" , &sub);
        printf("Enter sem :");
        scanf("%d" , &sem);
        printf("enter cgpa:");
        scanf("%f" , &cgpa);

        fprintf(fptr, "| %-20s | %-15s | %-8d | %-4.2f |\n", name, sub, sem, cgpa);
    }
    fprintf(fptr, "+----------------------+-----------------+----------+------+\n");
    fclose(fptr);
    printf("Thank you!!");
    return 0;
}
