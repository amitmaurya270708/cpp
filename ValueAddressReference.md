# Call by value
In call by value the actual value of variable can't be changed, if you change the value of function parameter it is only changed from current function .

## Syntax
    return-type func-name(p1, p2){
        // block of code
    }

# Call by address
Call by address is used when you want to modify a variable inside a function and want that modification present outside the function .

## Syntax
    return-type func-name(*p3){
        // modification
    }

# Call by reference 
Reference is nothing but alias to an existing variable when you declare a reference, you create a new name for an existing variable and any changes done in reference is treated as if it were the original variable .
