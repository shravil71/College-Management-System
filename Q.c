// Make a system that can store information of all
// students, teachers & staff of your college in the form
// of structures.
// You can also make this into a C Project with other
// functionalities like cgpa calculation of students,
// storing attendance etc
#include <stdio.h>
#include <string.h>
#define MAX 5
#define NAME_LENGTH 100
struct Student
{
    char sname[NAME_LENGTH];
    int roll_number;
    char branch[100];
    int semester;
    int attendance;
    float cgpa;
};
// -------------------------//

struct Student students[MAX];

struct Teacher
{
    char tname[100];
    char subject[100];
    char teacher_id[100];
    int experience;
    int salary;
};
// -------------------------//
struct Teacher teachers[MAX];

struct Staff
{
    char name[NAME_LENGTH];
    char department[100];
    char designation[100];
    char staff_id[100];
    int age;
    int experience;
    int salary;
    char phone_number[100];
};
struct Staff staffs[MAX];
// --------------------------//

void inputStudents();
void inputStudents(){

for (int i = 0; i < MAX; i++)
    {
        printf("Enter name of student %d: ", i + 1);
        fgets(students[i].sname, sizeof(students[i].sname), stdin);
        students[i].sname[strcspn(students[i].sname, "\n")] = '\0';

        printf("Roll number: ");
        scanf("%d", &students[i].roll_number);
        getchar();

        printf("Branch: ");
        fgets(students[i].branch, sizeof(students[i].branch), stdin);
        students[i].branch[strcspn(students[i].branch, "\n")] = '\0';

        printf("Semester: ");
        scanf("%d", &students[i].semester);

        printf("Attendance: ");
        scanf("%d", &students[i].attendance);

        printf("Enter student cgpa: ");
        scanf("%f", &students[i].cgpa);
        getchar();
    }
}

void displayStudents();
void displayStudents(){

for (int i = 0; i < MAX; i++)
    {
        printf("----- Student %d -----\n", i+1);
        printf("Name: %s\n", students[i].sname);
        printf("Roll number: %d\n", students[i].roll_number);
        printf("Branch: %s\n", students[i].branch);
        printf("Semester: %d\n", students[i].semester);
        printf("Attendance: %d\n", students[i].attendance);
        printf("CGPA: %.1f \n", students[i].cgpa);
        printf(" \n");
        
    }
}

void inputTeachers();
void inputTeachers(){

for (int i = 0; i < MAX; i++)
    {
    
        printf("Enter name of teacher %d: ", i+1);
        fgets(teachers[i].tname, sizeof(teachers[i].tname), stdin);
        teachers[i].tname[strcspn(teachers[i].tname, "\n")]= '\0';

        printf("Subject: ");
        fgets(teachers[i].subject, sizeof(teachers[i].subject), stdin);
        teachers[i].subject[strcspn(teachers[i].subject, "\n")]= '\0';

        printf("Teacher ID: ");
        fgets(teachers[i].teacher_id, sizeof(teachers[i].teacher_id), stdin);
        teachers[i].teacher_id[strcspn(teachers[i].teacher_id, "\n")] = '\0';

        printf("Experience: ");
        scanf("%d", &teachers[i].experience);

        printf("Salary: ");
        scanf("%d", &teachers[i].salary);
        
        getchar();
    }
}

void displayTeachers();
void displayTeachers(){

for (int i = 0; i < MAX; i++)
    {
        printf("----- Teachers %d -----\n", i+1);
        printf("Name: %s\n", teachers[i].tname);
        printf("Subject: %s\n", teachers[i].subject);
        printf("Teacher ID: %s\n", teachers[i].teacher_id);
        printf("Experience: %d \n", teachers[i].experience);
        printf("Salary: %d\n", teachers[i].salary);
        printf(" \n");
        
    }
}

void inputStaff();
void inputStaff(){

for (int i = 0; i < MAX; i++)
{
    printf("Staff %d name: ", i+1);
    fgets(staffs[i].name, sizeof(staffs[i].name), stdin);
    staffs[i].name[strcspn(staffs[i].name, "\n")] = '\0';

    printf("Department: ");
    fgets(staffs[i].department, sizeof(staffs[i].department), stdin);
    staffs[i].department[strcspn(staffs[i].department, "\n")] = '\0';

    printf("Designation: ");
    fgets(staffs[i].designation, sizeof(staffs[i].designation), stdin);
    staffs[i].designation[strcspn(staffs[i].designation, "\n")] = '\0';

    printf("Staff id: ");
    fgets(staffs[i].staff_id, sizeof(staffs[i].staff_id), stdin);
    staffs[i].staff_id[strcspn(staffs[i].staff_id, "\n")] = '\0';

    printf("Age: ");
    scanf("%d", &staffs[i].age);
    
    printf("Experience: ");
    scanf("%d", &staffs[i].experience);

    printf("Salary: ");
    
    scanf("%d", &staffs[i].salary);
    getchar();

    printf("Phone number: +91");
    fgets(staffs[i].phone_number, sizeof(staffs[i].phone_number), stdin);
    staffs[i].phone_number[strcspn(staffs[i].phone_number, "\n")] = '\0';

}
}

void displayStaff();
void displayStaff(){

for (int i = 0; i < MAX; i++)
    {
        printf("----- Staff %d -----\n", i+1);
        printf("Name: %s\n", staffs[i].name);
        printf("Department: %s\n", staffs[i].department);
        printf("Designation: %s\n", staffs[i].designation);
        printf("Staff ID: %s\n", staffs[i].staff_id);
        printf("Age: %d\n", staffs[i].age);
        printf("Experience: %d\n", staffs[i].experience);
        printf("Salary: %d\n", staffs[i].salary);
        printf("Phone number: %s\n", staffs[i].phone_number);
        printf(" \n");
        
    }
}

void searchStudent();
void searchStudent(){
    int findRoll;
    int found = 0;
    printf("Enter student's roll number: ");
    scanf("%d", &findRoll);
    for (int i = 0; i < MAX; i++)
    {
        if (students[i].roll_number == findRoll)
        {
            found = 1;
            printf("Student found\n");
            printf("\n");
            printf("Name: %s\n", students[i].sname);
            printf("CGPA: %.1f\n", students[i].cgpa);
            printf("Attendance: %d\n", students[i].attendance);
            break;
        }
        
        
    }
    if (found == 0)
    {
        printf("Student not found \n");
        
    }
    
}

void searchTeacher();
void searchTeacher(){
char findID[100];
int found = 0;
printf("Enter teacher's ID: ");
fgets(findID, sizeof(findID), stdin);
findID[strcspn(findID, "\n")] = '\0';

for (int i = 0; i < MAX; i++)
{
    if (strcmp(findID, teachers[i].teacher_id)==0)
    {
        found=1; 

        printf("Teacher found \n");
        printf(" \n");
        printf("Name: %s\n", teachers[i].tname);
        printf("Subject: %s\n", teachers[i].subject);
        printf("Teacher ID: %s\n", teachers[i].teacher_id);
        printf("Experience: %d \n", teachers[i].experience);
        printf("Salary: %d\n", teachers[i].salary);
        break;
    }
    
}
if (found == 0)
{
    printf("Teacher not found \n");
    
}


}
void searchStaff();
void searchStaff(){
char findID[100];
int found = 0;
printf("Enter staff's ID: ");
fgets(findID, sizeof(findID), stdin);
findID[strcspn(findID, "\n")] = '\0';
for (int i = 0; i < MAX; i++)
{
    if (strcmp(findID, staffs[i].staff_id)==0)
    {
        found=1; 

        printf("Staff found \n");
        printf(" \n");
        printf("Name: %s\n", staffs[i].name);
        printf("Department: %s\n", staffs[i].department);
        printf("Designation: %s\n", staffs[i].designation);
        printf("Staff ID: %s\n", staffs[i].staff_id);
        printf("Age: %d\n", staffs[i].age);
        printf("Experience: %d\n", staffs[i].experience);
        printf("Salary: %d\n", staffs[i].salary);
        printf("Phone number: %s\n", staffs[i].phone_number);
        break;
    }
    
}
if (found == 0)
{
    printf("Staff not found \n");
    
}
}
void Topper();
void Topper(){
int topStudent;
topStudent = 0;
float highest;
highest = students[0].cgpa;

for (int i = 0; i < MAX; i++)
{
    if (students[i].cgpa>highest)
    {
        highest = students[i].cgpa;
        topStudent = i;
        
    }
    
    
}
printf("Topper: %s \n", students[topStudent].sname);
printf("CGPA: %.1f \n", students[topStudent].cgpa);
printf("Roll no.: %d \n", students[topStudent].roll_number);

}

void UpdateStudent();
void UpdateStudent(){


    char confirm;
    int updated = 0;
    int findRoll;
    int found = 0;
    printf("Do you want to update a student's record? (Y for yes, N for no): ");
    int choice;
    scanf("%c", &confirm);
    getchar();

    if (confirm == 'Y' || confirm == 'y') {
        printf("Enter student's roll number to update: ");
        scanf("%d", &findRoll);
    }
    else {
        printf("No update performed.\n");
        return;
    }
    for (int i = 0; i < MAX; i++)
    {
    if (students[i].roll_number==findRoll)
    {
        found = 1;
        printf("Student found! \n");
        printf(" \n");
        
        printf("What do you want to update? \n");
        printf(" \n");
        printf("1. Name\n2. Roll number\n3. Branch\n4. Semester\n5. Attendance\n6. CGPA");
        scanf("%d", &choice);
        
        switch (choice)
        {
        case 1:
            printf("Update student name: ");
            getchar();
            fgets(students[i].sname, sizeof(students[i].sname), stdin);
            students[i].sname[strcspn(students[i].sname, "\n")]='\0';
            updated = 1;
            break;
            
        case 2:
            printf("Update roll number: \n");
            scanf("%d", &students[i].roll_number);
            updated = 1;
            break;

        case 3:
            printf("Update branch: \n");
            getchar();
            fgets(students[i].branch, sizeof(students[i].branch), stdin);
            students[i].branch[strcspn(students[i].branch, "\n")]='\0';
            updated = 1;
            break;
        case 4:
            printf("Update semester: \n");
            scanf("%d", &students[i].semester);
            updated = 1;
            break;
        
        case 5:
            printf("Update attendance: \n");
            scanf("%d", &students[i].attendance);
            updated = 1;
            break;
        
        case 6:
            printf("Update CGPA: \n");
            scanf("%f", &students[i].cgpa);
            updated = 1;
            break;
        default:
            printf("Invalid choice!\n");
            break;
        }
        if (updated)
        {
            printf("Student record updated successfully! \n");
            
        }
        
        
    }
    
    
    
}
if (found == 0)
{
    printf("Student not found! \n");
    
}
    
}
int main(){
    printf("========== COLLEGE MANAGEMENT SYSTEM ==========\n");
    
    inputStudents();
    inputTeachers();
    inputStaff();

    displayStudents();
    displayTeachers();
    displayStaff();
    UpdateStudent();
    
    Topper();
    
    searchStudent();
    searchTeacher();
    searchStaff();
    return 0;
}