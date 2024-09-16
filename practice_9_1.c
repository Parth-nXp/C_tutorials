# include <stdio.h>
# include <string.h>

struct student{
    char name[100];
    int roll_no;
    float cgpa;
};

int main(){

    struct student s1;
    struct student s2;
    struct student s3;
    s1.roll_no = 1;
    s1.cgpa = 9.4;
    strcpy(s1.name, "Parth");

    s2.roll_no = 2;
    s2.cgpa = 8.1;
    strcpy(s2.name, "Akshay");

    s3.roll_no = 3;
    s3.cgpa = 10.0;
    strcpy(s3.name, "Naman");

    printf("Name of the student is %s\n", s1.name);
    printf("Roll no. of the student is %d\n", s1.roll_no);
    printf("CGPA of the student is %f\n", s1.cgpa);

    printf("Name of the student is %s\n", s2.name);
    printf("Roll no. of the student is %d\n", s2.roll_no);
    printf("CGPA of the student is %f\n", s2.cgpa);
    
    printf("Name of the student is %s\n", s3.name);
    printf("Roll no. of the student is %d\n", s3.roll_no);
    printf("CGPA of the student is %f\n", s3.cgpa);
    return 0;
}