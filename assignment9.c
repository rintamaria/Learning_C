#include<stdio.h>
#include<string.h>
#define correctuser "rinta"
#define correctpass "1234rin"
int main()
{
    char username[10],password[10];
    
    
    printf("enter a username");
    scanf("%s",username);
    printf("enter password");
    scanf("%s",password);
    if(username[0]=='\0'|| password[0]=='\0')
    {
        printf("enter a value");
    }
    if (strcmp(username,correctuser)!=0 || strcmp(password,correctpass)!=0) {
        printf("failed authentication");
    }
    else if(strcmp(username,correctuser)==0 && strcmp(password,correctpass)==0)
    {
        printf("authentication successful");
    }
    
        
   
    
    
    

}