#pragma once

#include "opencv2/imgproc.hpp"

using namespace cv;

class CMaxLocation{
public:
    CMaxLocation();
    CMaxLocation(const Point& pnt, double max_val, double rad);
    CMaxLocation(CMaxLocation& other);
    CMaxLocation(CMaxLocation&& other);
    CMaxLocation& operator=(CMaxLocation& other);
    CMaxLocation& operator=(CMaxLocation&& other);

    bool operator<(const CMaxLocation& other) const;
    bool operator>(const CMaxLocation& other) const;

    ~CMaxLocation(){}
    //TODO: Apply rule of 5
    
    Point getLocation() const;
    void setLocation(const Point& loc);

    double getMaxValue() const;
    double getRadius() const;
    //TODO: Upload comparison operator

private:
    Point location;
    double max_value;
    double radius;
};