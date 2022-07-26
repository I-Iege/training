
//control structures

for(int i = 0; i < 10; ++i)
{
    
}

for(auto& item : list)
{
    
}

while(condition)
{
    
}

if(condition)
{
    
}
else if(condition2)
{
    
}
else
{
    
}


//variables

int i = 0;
const int j = 0;
int array[50];

int* ptr = &i;
const int* const_ptr = &j;
const int* const const_ref = &j; //same as const int& constr_ref = &j;


int* ptr = new int();
int* ptr_array = new int[50];
ptr_array[5] = 0;

*ptr= 5; //change value of pointer;
ptr = &i; //change address of pointer 
ptr->do_something(); //call function on pointer same as (*ptr).do_something();

delete ptr;
delete[] ptr_array;


//passing parameters

void func(int param)

void func(int* param)

void func(int& param)

void func(const int& param)

void func(int&& param)





struct point
{
    int x;
    int y;
}

class my_class
{
public:    
    my_class() //constructor
    
   ~my_class() //destructor
   
   //copying/cloning object
   my_class(const my_class& obj)
   operator=(const my_class& obj)
   
   
   //moving object
   my_class(my_class&& obj)
   operator=(my_class&& obj)
   
   
   
   int operator+(const int&) {} // my_class + int operator

private:
int x;
int y;
   
}











