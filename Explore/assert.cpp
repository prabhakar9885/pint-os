#include <assert.h>
#include <debug.h>
#include <stdio.h>

#define NDEBUG


void foo(int a){
   assert(a >= 10);
   debug_backtrace_all();
   printf("Integer entered is %d\n", a);
}


int main()
{
   int a;
   char str[50];
	 
   printf("Enter an integer value: ");
   scanf("%d", &a);

   foo(a);
    
   printf("Enter string: ");
   scanf("%s", str);
   assert(str != NULL);
   printf("String entered is: %s\n", str);
	
   return(0);
}
