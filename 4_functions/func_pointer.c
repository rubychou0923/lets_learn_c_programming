#include <stdio.h> 
// A normal funcction with an int parameter 
// and void return type 
void func(int a) 
{ 
    printf("[%s:%d] Value of a is %d\n", __func__,__LINE__, a); 
} 


void func2(int a) 
{
	a*=10; 
    printf("[%s:%d] Value of a is %d\n", __func__,__LINE__, a); 
} 

  
int main() 
{ 
    // func_ptr is a pointer to funcction func()  
    void (*func_ptr)(int) = &func; 
  
    /* The above line is equivalent of following two 
       void (*func_ptr)(int); 
       func_ptr = &func;  
    */
  
    // Invoking func() using func_ptr 
    (*func_ptr)(10); 
 
	func_ptr=func2;
 
    (*func_ptr)(10); 
    return 0; 
} 