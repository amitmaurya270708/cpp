# Union
Union is a user-define data type that allows you to store different data types in the same memroy location .
## Note
- Union keyword is used to define union
- Size of union depends on the biggest member of union
## Syntax
    union union-name{
        data-type 1;
        data-type 2;
    };

## Example 
    unionemp{
        int age;
        char name[50];
    };

## Note
 Once union is defined, now declare ariables of that type       
 Ex ->  union emp details;