    #include <iostream>
    #include<string>
    using namespace std;
    class Binary{
        public:
        string s;

        void getNumber(){
            cout<<"enter a number:"<<endl;
            cin>>s;
        }

        void checker(){
            int count=0; 
            for(int i =0 ; i<s.length();i++){
                if(s[i]!='0' && s[i]!='1'){
                    cout<<"it is not a binary number"<<endl;
                    break;
                }
                else{
                    
                    count++;

                }

            }
            if( count == s.length()) {
            cout<<"it is a binary numeber";
            
            }
            
        }

        void result(){
            checker();

        }
    };
    int main(){
        Binary s ;
        s.getNumber();
        s.result();
        return 0;








    }