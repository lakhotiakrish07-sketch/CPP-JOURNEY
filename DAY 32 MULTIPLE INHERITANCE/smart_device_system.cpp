#include <iostream>
using namespace std ;
class Camera {
    public:
    void photo(){
        cout<<"take photo"<<endl;

    }
};
class Musicplayer{
    public:
    void playMusic(){
        cout<<"play music"<<endl;
    }
};
class Smartphone : public Camera ,public Musicplayer{

    
};
int main(){
    Smartphone s ;
    s.playMusic();
    s.photo();
    return 0 ;
}