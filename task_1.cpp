#include<iostream>
using namespace std;
void takeinput(){
   #ifndef ONLINE_JUDGE
    freopen("D:\\coding\\input.txt","r",stdin);
    freopen("D:\\coding\\output.txt","w",stdout);
    #endif
}
//22P31A1210
class college{
    private:
    string principle="sanjay";
    int a;
    public:
        static string location;
        string name,code,strength;
        college(string n,string c,string s,int b){
        this->name=n;
        this->code=c;
        this->strength=s; 
        a=b;
        }
        void display(){
            cout<<name<<" "<<code<<" "<<strength<<" "<<principle<<" "<<a<<endl;
        }
        void modify(){
            principle="SANJAY";
            a+=10;
        }
};
int main()
{
    takeinput();
    int b;
    cin>>b;
    college acet("Aditya college of engineering and technology","acet","343423452354",b);
    acet.display();
    acet.modify();
    acet.display();
    acet.modify();
    acet.display();
}