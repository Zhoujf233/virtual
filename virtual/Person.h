//
//  Person.h
//  virtual
//
//  Created by JF Zhou on 2019/8/9.
//  Copyright © 2019 JF Zhou. All rights reserved.
//

#ifndef Person_h
#define Person_h
#include <string>
using namespace std;

class Person
{
public:
    Person(string nam,char s,int a)
    {name = nam;sex = s;age = a;}
protected:
    string name;
    char sex;
    int age;
};


#endif /* Person_h */
