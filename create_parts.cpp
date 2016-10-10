//
//  create_parts.cpp
//  
//
//  Created by Anena V Sims on 10/9/16.
//
//

#include <iostream>
#include "create_parts.h"
#include "view.h"
#include "robot_model.h"

using namespace std;


CreateParts::CreateParts()
{
    //default constructor
}

void CreateParts::setName( string n )
{
    name = n;
}

string CreateParts::getName()
{
    return name;
}

void CreateParts::setPartNumber( int numb )
{
    partNumber = numb;
}

int CreateParts::getPartNumber()
{
    return partNumber;
}

void CreateParts::setComponentType( string type )
{
    componentType = type;
}

string CreateParts::getComponentType()
{
    return componentType;
}

void CreateParts::setWeigth( double w )
{
    weight = w;
}

double CreateParts::getWeight()
{
    return weight;
}

void CreateParts::setCost( double c )
{
    cost = c;
}

double CreateParts::getCost()
{
    return cost;
}

void CreateParts::setDescription( string desc )
{
    description = desc;
}

string CreateParts::getDescription()
{
    return description;
}

//there will be a rendered image here
