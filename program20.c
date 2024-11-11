/* requirement:we want a global variable that is private
to a functio. we want a private variable that doesnot
loose its existence even if the execution control
goes out of the scope of that variable*/
#include<stdio.h>
void myFun(void);
int main()
{
   
    
    myFun();
    myFun();
    myFun();
    myFun();
    

}
void myFun()
{
   static int count=0;
    count=count+1;
    printf("001the function is executed %d times \n",count);
}