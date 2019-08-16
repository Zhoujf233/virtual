//
//  Graduate.h
//  virtual
//
//  Created by JF Zhou on 2019/8/9.
//  Copyright © 2019 JF Zhou. All rights reserved.
//

#ifndef Graduate_h
#define Graduate_h
#include <iostream>
using namespace std;

class Graduate:public Teacher ,public Student
{
public:
    Graduate(string nam,char s,int a,string t,float sco,float w):
    Person(nam,s,a),Teacher(nam,s,a,t),Student(nam,s,a,sco),wage(w){}
    void show()
    {
        cout<<"name: "<<name<<endl;
        cout<<"age: "<<age<<endl;
        cout<<"sex: "<<sex<<endl;
        cout<<"score: "<<score<<endl;
        cout<<"title: "<<title<<endl;
        cout<<"wages: "<<wage<<endl;
    }
private:
    float wage;
};


#endif /* Graduate_h */
