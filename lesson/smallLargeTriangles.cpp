#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std; 

struct Triangles
{
    int a, b, c;
};
double areaCalculation(Triangles triangle){
    double semiPerimeter = (triangle.a+triangle.b+triangle.c)/2.0;
    return sqrt(semiPerimeter*(semiPerimeter-triangle.a)*(semiPerimeter-triangle.b)*(semiPerimeter-triangle.c));
}
bool compare(Triangles triangle1, Triangles triangle2){
    return areaCalculation(triangle1) < areaCalculation(triangle2);
}
int main(){
    int testCases; 
    cin >> testCases;

    Triangles triangle[testCases];
    for (int i=0; i<testCases; i++){
        cin >> triangle[i].a >> triangle[i].b >> triangle[i].c;
    }
    sort(triangle, triangle+testCases, compare);

    for (int i=0; i<testCases; i++){
        cout << triangle[i].a << " " << triangle[i].b << " " << triangle[i].c << endl;
    }
    return 0;

}