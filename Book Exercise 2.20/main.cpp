//
//  main.cpp
//  Book Exercise 2.15
//
//  Created by ax on 8/29/16.
//  Copyright © 2016 COMP130. All rights reserved.
//
//  Geometry: slope of a line
//

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    // insert code here...
    cout << "Calculate the Slope of a Line \n";
    
    // D
    double x1 = 0.0;
    double y1 = 0.0;
    double x2 = 0.0;
    double y2 = 0.0;

    double slope = 0.0;

    
    // I
    cout << "Enter the coordinates for two points: ";
    cin >> x1 >> y1 >> x2 >> y2;
    
    // P
    
    // slope
    slope = (y2 - y1) / (x2 - x1);
    
    
    // O
    cout << "The slope for the line that connects the points is " << slope << endl;
    
    return 0;
    
}