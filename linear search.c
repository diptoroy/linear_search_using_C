#include<stdio.h>
int main(){
  int student_marks[10];
  int s_marks,num,i,found = 0;

  printf("Enter how many student's marks\n");
  scanf("%d",&num);

  printf("Enter marks one by one\n");
  for(i = 0;i < num;i++){
    scanf("%d",&student_marks[i]);
  }

  printf("Enter your searching marks\n");
  scanf("%d",&s_marks);

  //Linear search
  for(i = 0;i < num;i++){
    if(student_marks[i] == s_marks){
        found = 1;
    }
  }

  if(found == 1){
    printf("Student marks found");
  } else{
  printf("Student marks not found");
  }

  return 0;
}
