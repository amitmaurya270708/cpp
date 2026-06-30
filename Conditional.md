# Conditional Statement
Conditional statement allow you to make a decision based on the result of condition.

## Types
--> if statement   
--> if else   
--> if else if   
--> nested if  
--> switch statement  

-----

# if statement
if statement is used when we want to test a condition.

## Syntax

        if(condition){
            // statements
        }

## flowchart

[if statement](./Conditional1.tldr)

----

# if else
It is used to execute two statements either if statement or else statement for a single condition.

## Syntax
 
    if(condition){
        // statement
    }
    else{
        // statement
    }

## Flowchart

[if statement](./Conditional2.tldr)

------

# else if ladder
It is used when we have more than two condition.

## Syntax

    if(condition){
        // statement
    }
    else if(condition){
        // statement
    }
    else{
        // statement
    }

## Flowchart

[if statement](./Conditional3.tldr)

-------

# nested if statement
Whenever we define if block inside another if block called nested if statement.

## Syntax

    if(condition){
        if(condition){

        }
    }
    else {
        // statement
    }

-------

# switch statement
Switch statement is nothing but multiple choice selection statement it means when we want to select any one case out of multiple cases .

## Note 
In C++ , we can only use int , char or enum for switch statement.

## Syntax

    switch(exp){
        case 1: statement ;
                break;
        case 2: statement ;
                break;
            .
            .
            .
            .
        case n: statement ;
                break;
        default : statement;
    }