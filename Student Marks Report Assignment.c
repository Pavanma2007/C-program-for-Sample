#include<stdio.h>
#include<math.h>
int main()
{
    printf("\t ----- STUDENT DETAILS ----- \n\n");
    //Taking Student input
    char Name[50], USN[20];
    int Sem;
    printf("Name : ");
    scanf("%s", Name);
    printf("USN : ");
    scanf("%s", USN);
    printf("Semester : ");
    scanf("%d", &Sem);
    printf("\n\n");
    
    printf("\t ----- STUDENT MARKS ----- \n\n");
    //Taking Student Marks input
    float S1, S2, S3, S4;
    printf("Enter Marks in Subject 1 : ");
    scanf("%f", &S1);
    printf("Enter Marks in Subject 2 : ");
    scanf("%f", &S2);
    printf("Enter Marks in Subject 3 : ");
    scanf("%f", &S3);
    printf("Enter Marks in Subject 4 : ");
    scanf("%f", &S4);
    printf("\n\n");
    
    //Calculation
    float T, A, P;
    T = (S1 + S2 + S3 + S4);
    A = T/4;
    P = (T/400)*100;
    
    //Printing Student Marks Report
    printf("==================================\n");
    printf(" ----- STUDENT MARKS REPORT ----- \n");
    printf("==================================\n");
    printf("Name       :    %s\n", Name);
    printf("USN        :    %s\n", USN);
    printf("Semester   :    %d\n", Sem);
    printf("----------------------------------\n");
    printf("Subject 1  :    %.1f\n", S1);
    printf("Subject 2  :    %.1f\n", S2);
    printf("Subject 3  :    %.1f\n", S3);
    printf("Subject 4  :    %.1f\n", S4);
    printf("----------------------------------\n");
    printf("TOTAL      :    %.2f\n", T);
    printf("AVERAGE    :    %.2f\n", A);
    printf("PERCENTAGE :    %.2f %\n", P);
    printf("----------------------------------\n");
    printf("REPORT - \n\n");
    
    //If-Else Statements for Grades
    {
        if (P >= 85)
        {
            printf("\t FINAL GRADE : A+ (Excellent)\n");
            printf("\t STATUS      : PASS\n");
            printf("\t REMARK      : Outstanding work! Keep it up!\n");
        } 
        else if (P >= 75 && P < 85) 
        {
            printf("\t FINAL GRADE : A (Very Good)\n");
            printf("\t STATUS      : PASS\n");
            printf("\t REMARK      : Great performance! Aim for the top!\n");
        } 
        else if (P >= 55 && P < 75) 
        {
            printf("\t FINAL GRADE : B (Good)\n");
            printf("\t STATUS      : PASS\n");
            printf("\t REMARK      : Solid effort! Push a bit harder next time.\n");
        } 
        else if (P >= 40 && P < 55) 
        {
            printf("\t FINAL GRADE : C (Satisfactory)\n");
            printf("\t STATUS      : PASS\n");
            printf("\t REMARK      : Fair. Needs more focus on core areas.\n");
        } 
        else 
        {
            printf("\t FINAL GRADE : D (Fail)\n");
            printf("\t STATUS      : FAIL\n");
            printf("\t REMARK      : Action required. Academic support advised.\n");
        }
    }
    printf("----------------------------------\n");
    printf("==================================\n");
        
    return 0;
}