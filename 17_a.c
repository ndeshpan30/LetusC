#include<stdio.h>
int main()
{
struct studentdetails
{
  int rollno,year;
  char name[50],dept[50],course[50]; 
};
  struct studentdetails s[450];
  int i,n,y;


 printf("Entre the number of students in the school: ");
 scanf("%d",&n);
 
 
 for(i=1;i<=n;i++)
   {
     printf("Enter the details of student %d\n",i);
     printf("Enter the name of the student: ");
     scanf("%s",s[i].name);
     printf("Enter roll number: ");
     scanf("%d",&s[i].rollno);
     printf("Enter department name: ");
     scanf("%s",s[i].dept);
     printf("Enter year of joining: ");
     scanf("%d",&s[i].year);
   }

 printf("Enter a year: ");
 scanf("%d",&y);

 printf("Student details of all students who joined in the year %d are: \n",s[i].year);
 for(i=1;i<=n;i++)
   {
     if(y==s[i].year)
       printf("name: %s\nroll number: %d\nDepartment name: %s\nYear of joining: %d\n \n",s[i].name,s[i].rollno,s[i].dept,s[i].year);

   }
 return 0;
}
