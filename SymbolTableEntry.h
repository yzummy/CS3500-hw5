#ifndef SYMBOL_TABLE_ENTRY_H
#define SYMBOL_TABLE_ENTRY_H

#include <string>
using namespace std;

// type code declarations
#define UNDEFINED  -1
#define NULL_TYPE   0
/*
  Defining these first five types as powers of two allows XORing
  any number of them together to create the unique type code we 
  need.
  FUNCTION doesn't combine with anything, but also having it as a
  power of two prevents any of the other type codes from adding
  up to it.
*/
#define INT         2
#define STR         4
#define BOOL        8
#define FLOAT       16
#define LIST        32
#define FUNCTION    64

// every unique combination of two type codes
#define INT_OR_STR        6
#define INT_OR_BOOL       10
#define INT_OR_FLOAT      18
#define STR_OR_BOOL       12
#define STR_OR_FLOAT      20
#define BOOL_OR_FLOAT     24
#define LIST_OR_INT       34
#define LIST_OR_STR       36
#define LIST_OR_BOOL      40
#define LIST_OR_FLOAT     48

// every unique combination of three type codes
#define INT_OR_STR_OR_BOOL        14
#define INT_OR_STR_OR_FLOAT       22
#define INT_OR_BOOL_OR_FLOAT      26
#define STR_OR_BOOL_OR_FLOAT      28
#define LIST_OR_INT_OR_STR        38
#define LIST_OR_INT_OR_BOOL       42
#define LIST_OR_INT_OR_FLOAT      50
#define LIST_OR_STR_OR_BOOL       44
#define LIST_OR_STR_OR_FLOAT      52
#define LIST_OR_BOOL_OR_FLOAT     56

// every unique combinations of four type codes
#define INT_OR_STR_OR_FLOAT_OR_BOOL     30
#define LIST_OR_FLOAT_OR_BOOL_OR_STR    60
#define LIST_OR_BOOL_OR_STR_OR_INT      46
#define LIST_OR_FLOAT_OR_STR_OR_INT     54
#define INT_OR_BOOL_OR_FLOAT_OR_LIST    58

// only one combination of five type codes
#define INT_OR_BOOL_OR_STR_OR_FLOAT_OR_LIST     62

#define NOT_APPLICABLE  -1

/*
typedef struct {
  int val_int; 
  float val_float; 
  bool val_bool;    
  string val_string;  
  bool is_null=false;   
} VALUE;
*/
typedef struct RList RList;
struct RList {
    int type;
    int val_int; 
    float val_float; 
    bool val_bool;    
    char val_string[256]; 
    int length;    
    RList* rlist;
};


typedef struct {
  int type;         	// one of the above type codes
  int numParams;    	// # of parameters if function type
  int returnType;   	// return type if function
  bool isParam;		// true if ident is a function param
  int val_int; 
  float val_float; 
  bool val_bool;    
  char val_string[256];  
  bool is_null; 
  RList* rlist;
  bool isIndex;
} TYPE_INFO;





class SYMBOL_TABLE_ENTRY
{
    
private:
  // Member variables
  string name;
  TYPE_INFO typeInfo;
  
  
  
public:
  // Constructors
  SYMBOL_TABLE_ENTRY( ) {
    name = "";
    typeInfo.type = UNDEFINED;
    typeInfo.numParams = UNDEFINED;
    typeInfo.returnType = UNDEFINED;
    typeInfo.isParam = false;
  }

  SYMBOL_TABLE_ENTRY(const string theName, 
                     const TYPE_INFO theType)
  {
    name = theName;
    typeInfo.type = theType.type;
    typeInfo.numParams = theType.numParams;
    typeInfo.returnType = theType.returnType;
    typeInfo.isParam = theType.isParam;
    typeInfo.val_int = theType.val_int;
    typeInfo.val_float = theType.val_float;
    typeInfo.val_bool = theType.val_bool;
    strcpy(typeInfo.val_string, theType.val_string);
    typeInfo.is_null = theType.is_null;
    
    typeInfo.rlist = new RList;
    RList *temp = theType.rlist;
    RList *temp_new = typeInfo.rlist;
    while(temp!=NULL)
    {
        
        temp_new->type = temp->type;
        temp_new->val_bool = temp->val_bool;
        temp_new->val_int = temp->val_int;
        temp_new->val_float = temp->val_float;
        strcpy(temp_new->val_string, temp->val_string);
        temp_new->length = temp->length;
        
        

        
        temp = temp->rlist;
        if(temp!=NULL)
            temp_new->rlist = new RList;
        else
            temp_new->rlist = NULL;
        temp_new = temp_new->rlist;
    }
  }

  // Accessors
  string getName() const { return name; }
  TYPE_INFO getTypeInfo() const { return typeInfo; }

};

#endif  // SYMBOL_TABLE_ENTRY_H
