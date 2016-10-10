//
//  create_parts.h
//  
//
//  Created by Anena V Sims on 10/9/16.
//
//

#ifndef create_parts_h
#define create_parts_h
#include <iostream>

using namespace std;


class CreateParts
{
    public:
    CreateParts();                  //defalut constructor (sets all private to null)
    void log();
    
    //getters and setters
    void setName( string n );
    string getName();
    void setPartNumber( int numb );
    int getPartNumber();
    void setComponentType( string type );
    string getComponentType();
    void setWeigth( double w );
    double getWeight();
    void setCost( double c );
    double getCost();
    void setDescription( string desc );
    string getDescription();
    
    private:
    string name;
    int partNumber;
    string componentType;
    double weight;
    double cost;
    string description;
    //thre will be a rendered image here
};

#endif /* create_parts_h */
