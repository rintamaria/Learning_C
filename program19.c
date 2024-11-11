#include<stdio.h>
void myFun(void);
//int count=0;//autostorage class but changed the scope
static int count=0;
int main()
{
   
    int p; //storage class =auto(by default)
    myFun();
    myFun();
    myFun();
    myFun();
    printf("002the function is executed %d times \n",count);

}
void myFun()
{
   // int count=0;//auto storage class
    count=count+1;
    printf("001the function is executed %d times \n",count);
}