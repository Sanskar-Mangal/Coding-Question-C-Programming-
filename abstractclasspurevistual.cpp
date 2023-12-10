#include <iostream>

using namespace std;

Class Base{
    public:
    virtual void displ()=0;
};

Class Derived : public Base{
    
    void displ(){
        cout<<"derived class";
    }
    
};

int main()
{ 
     Derived obj;
     obj.displ();
     
    

    return 0;
}