#include <stdio.h>
#include <stdlib.h>
int main()
{
  int choice1,choice2,choice3,dir;



  while(1){
    printf("1. List files/directories\n");
    printf("2. Change permissions of files/directories\n");
    printf("3. Make/delete files/directories\n");
    printf("4. Create symbolic link files\n");
    printf("5. Copy files/directories\n");
    printf("6. Move files/directories\n");
    printf("7. Use redirection to create or update files\n");
    printf("8. Set and use aliases for common tasks\n");
    printf("9. View file content using cat, head, and tail\n");
    printf("10. Find files or directories using find or grep\n");
    printf("Pick an option: \n");
    scanf("%d",&choice1);
    if(choice1 == 11)
    return 0;
    printf("manager press 1 \n leader press 2 \n employee press 3:  ");
    scanf("%d",&choice2);

    switch(choice1){
      case 1:

        switch(choice2){
          case 1:
            printf("Select directory \n(1. HR Manager 2. Team Leader 3.Eemployee\n");
            scanf("%d",&choice3);
            switch(choice3){
              case 1:
                system(" cd /home/youssef/hrms/HR_managers ; ls");
                break;
              case 2:
                system("cd /home/youssef/hrms/leaders ; ls");
                break;
              case 3:
                system(" cd /home/youssef/hrms/employees ; ls");
                break;
            }
            break;
          case 2:
            printf("Select directory 2. Team Leader 3.Employee");
            scanf("%d",&choice3);
            switch(choice3){
              case 2:
                system("cd /home/youssef/hrms/leaders ; ls");
                break;
              case 3:
                system("cd /home/youssef/hrms/employees ;ls");
                break;
            }
          case 3:
          system("cd /home/youssef/hrms/employees ; ls");
          break;
        }
        break;
        
      case 2:
     
        if(choice2 == 1)
        {   char command[200];
        printf("Enter the file/dir name ");
            char file[100];
            scanf("%s",file);
            printf("Enter the permission u want(int only plz) ");
        
            int perm;
            scanf("%d",&perm);   
            sprintf(command," cd /home/youssef/hrms/HR_managers ;chmod %d %s",perm,file);
            system(command);
        }
        break;
        

      case 3:
              if(choice2 == 1)
              { char command[1000];
                char fileD[100];
                char location[100];
                int option;
                  printf("Enter the file/dir name u want to add or remove\n");
                  
                  scanf("%s",fileD);
                  
                  printf("\n Enter the dir location u want to add dir/file in\n");
                  scanf("%s",location);
                  
                
                  printf("\nto add press 1\n to remove press 2\n=");
                  scanf("%d",&option);
                  if(option == 1)
                  { printf("to add file 1\nto add dir 2\n");
                      int choice;
                      scanf("%d",&choice);
                    if(choice == 1)
                      
                      {sprintf(command,"cd /home/youssef/hrms/%s ; touch %s",location,fileD);
                        system(command);
                      
                  
                  }
                    else if (choice == 2)
                        {
                      sprintf(command,"cd /home/youssef/hrms/%s ; mkdir %s" ,location,fileD);
                      system(command);
                      
                        }
              }
              }
              break;

      case 4:
            if(choice2 == 1)
              {char fileN[100];
              char command[1000];
              char linkN[100];
              printf("Enter the link name \n");
              scanf("%s",linkN);
              printf("Enter the file name \n");
              scanf("%s",fileN);
              sprintf(command,"cd /home/youssef/hrms/HR_managers ; ln -s %s %s",fileN,linkN);
              system(command);
              }
              break;
      case 5:
      
          if(choice2 == 1)
          {
              char fileN[200];
              char command[1000];
          
              
              printf("Enter the file name \n");
              scanf("%s",fileN);
              sprintf(command,"cd /home/youssef/hrms/HR_managers ; cp %s backup",fileN);
              system(command);
          }
          else if (choice2 == 3)
          {
            char fileN[200];
              char command[1000];
          
              
              printf("Enter the file name \n");
              scanf("%s",fileN);
              sprintf(command,"cd /home/youssef/hrms/employees; cp %s backup",fileN);
              system(command);
          }
          break;

      case 6:
                
                if (choice2 == 1)
          {
            char fileN[200];
              char command[1000];
              char Dirn[200];
              
              printf("Enter the file name \n");
              scanf("%s",fileN);
               printf("Enter the Dir name \n");
               scanf("%s",Dirn);
              sprintf(command,"cd /home/youssef/hrms/HR_managers; mv %s %s",fileN,Dirn);
              system(command);}
       
                
                
                
                
                else if (choice2 == 3)
          {
            char fileN[200];
              char command[1000];
              char Dirn[200];
              
              printf("Enter the file name \n");
              scanf("%s",fileN);
               printf("Enter the Dir name \n");
               scanf("%s",Dirn);
              sprintf(command,"cd /home/youssef/hrms/employees; mv %s %s",fileN,Dirn);
              system(command);
          }
          break;
        

      case 7:
      
           if(choice2 == 1)
            {
            
              char cont[200];
              char command[1000];
              scanf("%s",cont);
              
              sprintf(command,"cd /home/youssef/hrms/HR_managers; echo %s >> recruitment",cont);
              system(command);
            }
          
      
            else if(choice2 == 3)
            {
            
              char cont[200];
              char command[1000];
              printf("Enter the data u want 2 append\n:  ");
              scanf("%s",cont);
              
              sprintf(command,"cd /home/youssef/hrms/employees; echo %s >> appraisals",cont);
              system(command);
            }
            break;

      case 8:
      
      char com[200];
      char alias[200];
      char command[1000];
        
            if(choice2 == 1)
            {
                printf("Enter the command u want to put aliases on it\n:");
                scanf("%s",com);
                printf("Enter the alias\n:");
                scanf("%s",alias);
                sprintf(command,"cd /home/youssef/hrms/HR_managers ; alias %s=/'%s/'",alias,com);
                system(command);
            }
              else if (choice2 == 2)
              {
                  printf("Enter the command u want to put aliases on it\n:");
                scanf("%s",com);
                printf("Enter the alias\n:");
                scanf("%s",alias);
                sprintf(command,"cd /home/youssef/hrms/leaders ; alias %s=/'%s/'",alias,com);
                system(command);
              }
              
              else
              {
                printf("Enter the command u want to put aliases on it\n:");
                scanf("%s",com);
                printf("Enter the alias\n:");
                scanf("%s",alias);
                sprintf(command,"cd /home/youssef/hrms/employees ; alias %s=/'%s/'",alias,com);
                system(command);
              }
              break;
      case 9:
      
      if(choice2 == 1)
      {
      
         int choice;
         char fileN[200];
         char command[1000];
         
         printf("Enter the file name\n");
         scanf("%s",fileN);
         printf("Head 1 \n Tail 2 \n all 3 \n");
         scanf("%d",&choice);
         if(choice == 1)
         {
            sprintf(command,"cd /home/youssef/HR_managers ; head %s",fileN);
            system(command);
         }
         else if(choice == 2)
         {
            sprintf(command,"cd /home/youssef/HR_managers ; tail %s",fileN);
            system(command);
         }
         else if(choice == 3)
         {
            sprintf(command,"cd /home/youssef/HR_managers ; cat %s",fileN);
            system(command);
         }
      
      }
      else if(choice2 == 2)
      {
        
              int choice;
         char fileN[200];
         char command[1000];
         
         printf("Enter the file name\n");
         scanf("%s",fileN);
         printf("Head 1 \n Tail 2 \n all 3 \n");
         scanf("%d",&choice);
         if(choice == 1)
         {
            sprintf(command,"cd /home/youssef/leaders ; head %s",fileN);
            system(command);
         }
         else if(choice == 2)
         {
            sprintf(command,"cd /home/youssef/leaders ; tail %s",fileN);
            system(command);
         }
         else if(choice == 3)
         {
            sprintf(command,"cd /home/youssef/leaders ; cat %s",fileN);
            system(command);
         }
      
        
      }
      break;

      case 10:
      if(choice2 == 1)
      {
      
        char fileN[200];
         char command[1000];
         
         printf("Enter the file name\n");
         scanf("%s",fileN);
         
        sprintf(command,"cd /home/youssef/HR_managers ; find %s",fileN);
            system(command);
      
      }
      else if (choice2 == 2)
      {
        char fileN[200];
        char command[1000];
          printf("Enter the file name\n");
         scanf("%s",fileN);
         
        sprintf(command,"cd /home/youssef/leaders ; find %s",fileN);
            system(command);
      }
      break;
      

    }

    }
}
