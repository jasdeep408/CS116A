//
//  main.cpp
//  Testing1
//
//  Created by Jasdeep Mundra on 9/13/18.
//  Copyright © 2018 Jasdeep Mundra. All rights reserved.
//

#include <iostream>
#include "Vertex.h"
#include "Triangle.h"
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    

    
    Vertex v1(99, 20, 30);
    Vertex v2(10, 20, 30);
    Vertex v3(10, 20, 30);
    Triangle t1(v1, v2, v3);
    
    //cout << "first x cord should be 99: " << t1.firstV.xCord << endl;
    
    Vertex v4(10, 20, 30);
    Vertex v5(10, 20, 30);
    Vertex v6(10, 20, 30);
    Vertex v7(10, 20, 30);
    
    
    cout << "x cord val: " << v1.xCord << endl;
    cout << "y cord val: " << v2.yCord << endl;
    
    
    
    return 0;
}
