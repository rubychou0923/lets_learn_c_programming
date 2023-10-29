# 4 Functions.

another reference
https://www.tutorialspoint.com/cprogramming/c_functions.htm


## Function define
```
return_type function_name( parameter list ) {
   body of the function
}
``` 

example
```
/* function returning the max between two numbers */
int max(int num1, int num2) {

   /* local variable declaration */
   int result;
 
   if (num1 > num2)
      result = num1;
   else
      result = num2;
 
   return result; 
}
```

## Function Declarations
```
return_type function_name( parameter list );
```

example:
```
int max(int num1, int num2);
```

or 
```
int max(int, int);

```

```
void f_name (int,double,...);
int printf (const char *format_string,...)
```
The ellipsis (...) shows that other arguments follow. That's useful because it allows functions like printf to be written. Its declaration is this:


## example: simple_func.c


# 4.2.7. Compound statements and declarations

## Example 4.5
```
int a;                  /* visible from here onwards */

void func(void){
      float a;        /* a different 'a' */
      {
              char a; /* yet another 'a' */
      }
                      /* the float 'a' reappears */
}
      
```

# 4.3. Recursion and argument passing

## 4.3.1. Call by value

## example: example_4_6.c, 
![Relational operators.png](Relational_operators.png)

