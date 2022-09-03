#include <stdio.h>
#include <string.h>

struct student_college_detial
{
    int college_id;
    char college_name[50];
};

struct student_detial
{
    int id;
    char name[20];
    float percentage;
    //structure within structure
    struct student_college_detial clg_data;
}stu_data, *stu_data_ptr;


int main()
{
    struct student_detial stu_data  = {1, "Raju", 90.5, 71145, "Anna University"};

    stu_data_ptr = &stu_data;

    printf(" ID is: %d \n",stu_data_ptr->id);
    printf(" Name is: %s \n",stu_data_ptr->name);
    printf(" Percentage is: %f \n\n",stu_data_ptr->percentage);
    printf(" College Id is : %d \n",stu_data_ptr->clg_data.college_id);
    printf(" College Name is : %d \n",stu_data_ptr->clg_data.college_name);

}
