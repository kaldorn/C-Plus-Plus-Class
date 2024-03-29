//Nate Kaldor
//CSC2430 HW8
//Hobbit header file to form the basis for homework 8

#ifndef _HOBBIT_
#define _HOBBIT_

#include <iostream>
#include <string>

using namespace std;

class Hobbit
{
  public:

    //Parameterized constructor with defaults
    //Parameters: 
    //  The Hobbit's name (a string, default is empty string)
    //  The Hobbit's age (an unsigned short, default is 0, i.e., just born)
    //  The Hobbit's antecedent (a Hobbit*, default is NULL)
    //  The Hobbit's descendent (a Hobbit*, default is NULL)
	//  The Hobbit's sibling (a Hobbit*, default is NULL)
    //Effects: sets all private member variables to parameters passed in, or
    //  defaults.  
    Hobbit(string = "", unsigned short = 0, Hobbit* = NULL, Hobbit* = NULL, Hobbit* = NULL);

    //ACCESSORS

    //Accessor to return Hobbit's descendent
    //Parameters: None
    //Returns: a pointer to the Hobbit's descendent (Hobbit*)
    Hobbit *getDescendent() const;
    
    //Accessor to return Hobbit's antecedent
    //Parameters: None
    //Returns: a pointer to the Hobbit's antecedent (Hobbit*)
    Hobbit *getAntecedent() const;
    
    //Accessor to return Hobbit's name
    //Parameters: None
    //Returns: the Hobbit's name (a string)
    string getName() const;
    
    //Accessor to return Hobbit's age
    //Parameters: None
    //Returns: the Hobbit's age (an unsigned short)
    unsigned short getAge() const;

    //MUTATORS

    //Mutator set Hobbit's descendent
    //Parameters: a pointer to the Hobbit's descendent (Hobbit*)
    //Returns: none
    void setDescendent(Hobbit*);
    
    //Mutator set Hobbit's antecedent
    //Parameters: a pointer to the Hobbit's antecedent (Hobbit*)
    //Returns: none
    void setAntecedent(Hobbit*);
    
    //Mutator set Hobbit's name
    //Parameters: the Hobbit's name (a string)
    //Returns: none
    void setName(string);
    
    //Mutator set Hobbit's age
    //Parameters: the Hobbit's age (a unsigned short)
    //Returns: none
    void setAge(unsigned short);


    //UTILITY FUNCTIONS

    //Utility function to determine if one Hobbit is parent of another
    //Parameters: the potential child (Hobbit*)  of this Hobbit
    //Returns: true if this is parent of parameter
    //  false if this is not parent of parameter
    bool isParentOf(Hobbit *);


	bool searchSibling(string);

	//OVERLOADED OPERATORS




	Hobbit operator=(Hobbit);




	bool operator==(Hobbit);

  private:

    //A pointer to *one* of the Hobbit's children (NULL if none)
    Hobbit *descendent;
    
    //A pointer to *one* of the Hobbit's parents (NULL if none)
    Hobbit *antecedent;

	Hobbit *sibling;

    //The Hobbit's full name (first last)
    //TODO: this member variable will be MyString
    string name;

    //The Hobbit's age (can't be negative!)
    unsigned short age;
};
#endif
