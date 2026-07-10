# Global class
A class which declosed outside of all the function or block.

## Syntax
    class class_name{
        protected :
            // Data member
        public :
            // member function

    };
    class class_name2 : public class_name1{

    };

# Nested Class
A class which is declared or contain inside another class called nested class.
## syntax 
    class class_name1{
        public : 
            class class_name2{   // member variable
                 // Data member
                public :
                    // member function
            };
    };