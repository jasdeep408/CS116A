//
//  Vertex.cpp
//  Testing1
//
//  Created by Jasdeep Mundra on 9/13/18.
//  Copyright © 2018 Jasdeep Mundra. All rights reserved.
//

#include <stdio.h>
#include "Vertex.h"

Vertex::Vertex()
{
    xCord = 0;
    yCord = 0;
    zCord = 0;
}

Vertex::Vertex(float x, float y, float z)
{
    xCord = x;
    yCord = y;
    zCord = z;
    
}
