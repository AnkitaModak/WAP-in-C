#include <stdio.h>
#include <ctype.h>
#include <unistd.h>
typedef struct vivekanandaMahavidyalaya {
    char dept[100];       // Department name
    char *student[100];     // Array of character pointers for student names
    char *teacher[100];     // Array of character pointers for teacher names
} vm;
void printinfo(vm coms);
int main() {
    int your_choice;
    printf("\n=============================\n");
    printf("  VIVEKANANDA MAHAVIDYALAYA \n");
    printf("=============================\n\n");

    printf("\n==================================\n");
    printf("  WELCOME TO THE SCIENCE DEPARTMENT!  \n");
    printf("==================================\n\n");
    printf("\nSubjects available:\n");
   
    printf("1. Computer Science\n");
    printf("2. Zoology\n");
    printf("3. Physics\n");
    printf("4. Botany\n");
    printf("5. Chemistry\n");
    printf("6. Mathematics\n");
    printf("7. Nutrition\n");
    printf("\nEnter the subject number of your choice: ");
    scanf("%d" ,&your_choice);
    
    vm coms = {"coms",
            {"Ankita Modak", "Anjali Karmakar", "Nasimuddin", "Suha Mahankuda","Arnab Ganguly", "Anindita Chatterjee", "Subhajit Mukherjee", "Rituparna Das", "Bodhisattva Bhattacharya", "Dipanwita Sarkar", "Sourav Ghosh", "Moushumi Sen", "Priyam Roy", "Tithi Dutta"},
            {"Tanmay Dey", "Sugata Adak", "Indrajit Chatterjee"}
    };
    vm  zoology= {
        "zoology",
        {"Arka Banerjee", "Anindita Chatterjee", "Subhajit Mukherjee", "Rituparna Das", "Bodhisattva Bhattacharya", "Dipanwita Sarkar", "Sourav Ghosh", "Moushumi Sen", "Priyam Roy", "Tithi Dutta"},
        { "Abhijit Bose", "Paromita Paul", "Samiran Debnath", "Ishani Saha", "Swastik Chakraborty", "Sayantika Majumdar", "Ujjwal Ganguly", "Suchismita Basu", "Sougata Mondal", "Labonita Gupta"}
    };
    vm botany = {
        "botany",
        {"Arka Banerjee", "Anindita Chatterjee", "Subhajit Mukherjee", "Rituparna Das", "Bodhisattva Bhattacharya", "Dipanwita Sarkar", "Sourav Ghosh", "Moushumi Sen", "Priyam Roy", "Tithi Dutta"},
        {"Abhijit Bose", "Paromita Paul", "Samiran Debnath", "Ishani Saha", "Swastik Chakraborty", "Sayantika Majumdar", "Ujjwal Ganguly", "Suchismita Basu", "Sougata Mondal", "Labonita Gupta"}
    };

    vm physics = {
        "physics",
        {"Tanmay Dey", "Sugata Adak", "Indrajit Chatterjee", "Rupam Ghosh", "Ritika Sen", "Anubhab Bose", "Sujata Choudhury"},
        {"Rajiv Das", "Pritha Mukherjee", "Sudip Bhattacharya", "Madhumita Paul", "Sourav Majumdar", "Bidisha Banerjee", "Tapan Sarkar"}
    };
    vm mathematics = {
        "mathematics",
        {"Anjali Karmakar", "Rituparna Das", "Bodhisattva Bhattacharya", "Moushumi Sen", "Samiran Debnath", "Paromita Paul"},
        {"Rajiv Das", "Pritha Mukherjee", "Sudip Bhattacharya", "Madhumita Paul", "Sourav Majumdar", "Bidisha Banerjee", "Tapan Sarkar"}
    };
    vm chemistry = {
        "chemistry",
        {"Tanmay Dey", "Sugata Adak", "Indrajit Chatterjee", "Rupam Ghosh", "Ritika Sen", "Anubhab Bose", "Sujata Choudhury"},
        {"Rajiv Das", "Pritha Mukherjee - Organic Chemistry", "Sudip Bhattacharya", "Madhumita Paul", "Sourav Majumdar", "Bidisha Banerjee", "Tapan Sarkar - Physical Chemistry"}
    };
    vm nutrition = {
        "nutrition_sciences",
        {"Ananya Saha", "Debashish Ghosh", "Priyanka Roy", "Bitan Chakraborty", "Rahul Banerjee", "Soma Paul"},
        {"Trina Chatterjee - Dietetics", "Aritra Dey", "Meghna Adak - Food Technology", "Ishani Majumdar", "Tirtha Bhattacharya", "Sourav Modak"}
    };

    switch(your_choice){
        case 1:printinfo(coms);break;
        case 2:printinfo(zoology);break;
        case 3:printinfo(physics);break;
        case 4:printinfo(botany);break;
        case 5:printinfo(chemistry);break;
        case 6:printinfo(mathematics);break;
        case 7:printinfo(nutrition);break;
        default:printf("this is not a science subject!");
    }
    return 0;
}
void printinfo(vm sub){
    int num_students = sizeof(sub.student) / sizeof(sub.student[0]);
    int num_teachers = sizeof(sub.student) / sizeof(sub.teacher[0]);
    printf("Fetching data...\n");
    sleep(2);  // Pauses execution for 2 seconds 
    
    printf("\n=============================\n");
    printf(" Students in %s \n", sub.dept);
    printf("=============================\n\n");



for (int i = 0; i < num_students; i++) {  // Loop through student list
    printf("%s\n", sub.student[i]);
}

    printf("\n=============================\n");
    printf(" Teachers in %s \n", sub.dept);
    printf("=============================\n\n");

    for (int i = 0; i < num_teachers; i++) {  // Loop through teacher list
        printf("%s\n", sub.teacher[i]);}
        
    printf("Thank you for visiting!\n");

}
