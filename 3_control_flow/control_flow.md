# Control Flow

## 3.1.1. Logical expressions and Relational Operators

![Relational operators.png](Relational_operators.png)

## example:example_3_1
## example:error_compre_example.c

## 3.2.1. The if statement
```
if(expression) statement

if(expression) statement1
else statement2
```

###  這個else 到底是對到哪個if?
```
if(expression)
  if(expression)
    statement
  else
    statement
```


## 3.2.2. The while and do statements
The while is simple:

```
while(expression)
    statement
```

do while
```
do
    statement
while(expression);
```

## 3.2.3. The for statement
```
for (initialize; check; update) statement

```

## 3.2.5. The switch statement
```
switch (expression){
case const1:    statements
case const2:    statements
default:        statements
}
```

## 3.2.6 

### example : example_3_7.c

## 3.2.7 continue
### example : example_3_8.c

## 3.2.8. goto and labels
### example : goto_lable.c