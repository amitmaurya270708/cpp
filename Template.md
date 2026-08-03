# Template
Template is the frame which define ts actual memory in a C++ programming. We can draw any logic using template. It will create appropriate code at the time of execution. We can use template in C++ by two way one is function template and another is class template.          
Function template is know as genesis function and class template is aslo known as generic class. 

## Syntax  
### 1) Function template

    template <class_type>
    return_type function_name(parameterized list){
        body;
    }

### Class template
    template<class_type>
    class class_name{
        ...
        public:
        type var;
        type function(type arg)
        ...
    }