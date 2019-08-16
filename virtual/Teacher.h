//
//  Teacher.h
//  virtual
//
//  Created by JF Zhou on 2019/8/9.
//  Copyright © 2019 JF Zhou. All rights reserved.
//

#ifndef Teacher_h
#define Teacher_h
#include <string>
using namespace std;

class Teacher:virtual public Person
{
public:
    Teacher(string nam,char s,int a,string t):Person(nam,s,a){title = t;}
protected:
    string title;
};


#endif /* Teacher_h */
