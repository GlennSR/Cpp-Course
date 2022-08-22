/*
Points are scattered in a 2d plane and are described by their polar coordinates, where amplitude was removed (not needed).
Find the max number of points that can be fit within a angle range defined by "range_width" for a observer sitting in the origing of the xy plane.

Suggested signature:

    int Count(double range_width, std::vector<double> points_in_plane);
    
where:

    0 < range_width < 2*PI
    points_in_plane is a list points in polar only (angles only, distances are irrelevant)
                    in the plane. Angles in radian.
*/
#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int Count(double range_width, vector<double> points_in_plane);

int main(){

    

    return 0;
}

int Count(double range_width, vector<double> points_in_plane){
    sort(points_in_plane.begin(), points_in_plane.end());
    int n_max = 0, n = 0;
    
    for(double angle = 0; angle < 360.0; angle + range_width){
        n = 0;
        for(auto p: points_in_plane){
            if(p >= angle && p <= angle + range_width){
                n += 1;
            }
            
        }
        if(n >= n_max){
            n_max = n;
        }
    }
    
    return n_max;
}
