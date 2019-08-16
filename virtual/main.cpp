//
//  main.cpp
//  virtual
//
//  Created by JF Zhou on 2019/8/9.
//  Copyright © 2019 JF Zhou. All rights reserved.
//

#include <iostream>
#include "Person.h"
#include "Student.h"
#include "Teacher.h"
#include "Graduate.h"
using namespace std;

int main(int argc, const char * argv[])
{
    Graduate grad1("Wang-li",'f',24,"assistant",89.5,1234.5);
    grad1.show();
    return 0;
}
