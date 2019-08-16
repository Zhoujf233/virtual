//
//  Student.h
//  virtual
//
//  Created by JF Zhou on 2019/8/9.
//  Copyright © 2019 JF Zhou. All rights reserved.
//

#ifndef Student_h
#define Student_h

class Student:virtual public Person
{
public:
    Student(string nam,char s,int a,float sco):
    Person(nam,s,a),score(sco){}
protected:
    float score;
};


#endif /* Student_h */
