# Program Debugging
____
After writing a program the next step is to debug the program.
____
## Error 
- Syntax error
- Runtime error
- Logical error 
____
## 1) &nbsp; Syntax error :-   
Syntax error occurs when we violate any gramatical rules of programming language.  
Ex :-

    main (){
        cout<< "hello" ---> Syntax error(;)
    }

Less time consuming and can easily solved

## 2) &nbsp; Runtime error :-   
Runtime error is error that cause abnormal program termination during execution.    
EX :-

    main(){
        int a;
        a= 12/0; ---> Runtime error(can't divisible)
        cout<< a;
    }

## 3) &nbsp; Logical error :-
A logical error simply an incorrect translation of either the problem statement or the algorithm.   
Ex:-  

    main(){
        int a=2, b=4,c=0;
        float x;
        x = -b + sqrt(b*b- 4*a*c) / (2*a);
        cout<< x;
    }

Most time consuming error.