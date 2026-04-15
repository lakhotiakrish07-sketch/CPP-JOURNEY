#include <iostream>
using namespace std ;
class Camera{
    public:
    void start(){
        cout<<"camera start"<<endl;
    }
};
class Musicplayer{
    public:
    void start(){
        cout<<"music player starting"<<endl;
    }
};
class Smartphone:public Camera , public Musicplayer{};
int main(){
    Smartphone s ;
    s.Camera::start();
    s.Musicplayer::start();
    return 0 ;
}