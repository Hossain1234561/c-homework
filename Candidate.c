#include <stdio.h>
int main()
{

    char name[50];
    char Dob;
    char gender;
    char email[20];
    char nationality[20];
    char BMI;
    char primary_skill;
    char secondary_skill;
    char TOPIK;
    char MBTI;
    printf("####################################\n");
    printf("Audition Candidate Data Review\n");
    printf("####################################\n");
    printf("=============================================================================================\n");
    printf("Name\t |Dob\t |gender\t |email\t |nationality\t |BMI\t |primary_skill\t |secondary_skill\t |TOPIK\t| MBTI\n=============================================================================================\n");
    scanf("%s %s %s %s %s %s %s %s %s %s" , &name,&Dob, &gender, &email, &nationality, &BMI, &primary_skill, &secondary_skill, &TOPIK, &MBTI);
    printf("-------------------------------------------------------------------------------------\n");
    printf("A passionate and creative dancer and composer ready to pursue dreams together.     |\n");
    printf("---------------------------------------------------------------------------------------------\n");
    printf("................................... (And so on for all candidates) ...........................\n");

    return 0;
}
