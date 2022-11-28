#include <iostream>

using namespace std;
/*
 * Create classes Rectangle and RectangleArea
 */
class Rectangle {
    public:
    int width , height;
    void read_input() {
        cin>>width>>height;
    }
    void display() {
        cout<<width<<"\t"<<height<<endl;
    }
};
class RectangleArea : public Rectangle {
    public:
    void display() {
        cout<<height*width;
    }
};

int main()
{
    /*
     * Declare a RectangleArea object
     */
    RectangleArea r_area;
    
    /*
     * Read the width and height
     */
    r_area.read_input();
    
    /*
     * Print the width and height
     */
    r_area.Rectangle::display();
    
    /*
     * Print the area
     */
    r_area.display();
    
    return 0;
}