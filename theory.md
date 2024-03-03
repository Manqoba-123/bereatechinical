# The theory part of C++
C++ is a low level programming language

# C++ Class

**Questions you should be able to answer**
- Why do we need classes?
- What is a class?
- Access modifiers
- Object of a class
- Member functions
- Constructors
- Destructures

1 **Why do we need classes?**  
When you put it in a real-world entity, we need two things e.g traits and functions. So a class is a machanism of binding these to methods together in a single unit.  

2 **What is a class?**  
A class is a representation of a group of similar objects which holds its own data members and member functions together.  
- **Access specifier :** can be private, public or protected.  
- **Data members :** variables.  
- **Member functions :** Methods to accesss data members.  

**Example(syntax) of a C++ class :**  
````bash
class Class_name {
    Access specifier;

    Data members;

    Memember function()
};
````  
3 **Access Modifiers**  
There 3 types of access modifiers :  
- **Private :** Private members can only be accessed from within the class.  
- **Public :** They can be accessed within as well as outside of the class.  
- **Protected :** They can be accessed within the class and outside the class with the help of friend function  

4 **Object of a class**
An object is classified as instance of a class and has no memory located when we define a class. Onve an object is created then the memory is allocated.  

Exmaple is when we run the programme on a text editor like Git bash .

Here we create a file and it has the main function inside our document folder(directory) and we name it **helloworld.cpp** 
we use the command g++ file_name -o 'object file'. g++ compiles the C++ code and the -o flag creates the object

````bash
*$ pwd
    home/user/documents
*$ vi helloworld.cpp
*$ ls
    helloworld.cpp
*$ g++ helloworld.cpp -o 'test'
*$ ls
    helloworld.cpp test.exe
````  

5 **Member functions**
Any function that is declared as part of a class is called a member function. Memeber functions are invoked by sending messages to an instance of the class.  
The dot (.) operator is used to access public members of a class

**Example** : obj.sum();  

6 **Constructor**
 It is a special type of memeber function of a class that is called automatically wheneever an object is created.  

 ````bash
 TO_BE_UPDATED
 ````
6 **Destructor**
 It is a special type of memeber function that destorys the object as soon as the scope of the object ends.  

 ````bash
 TO_BE_UPDATED
 ````

