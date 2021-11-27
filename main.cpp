#include "std_lib_facilities.h"

void quadForm(vector<int> &root, int a , int b, int c){

    int part = (b*b)-4*a*c;

    if(part < 0){
        root.push_back(-1);
        return;
    }
    else{
        int temp = (-b + sqrt(part))/(2*a);
        root.push_back(temp);
        temp = (-b - sqrt(part))/(2*a);
        root.push_back(temp);
    }
    return;
}
int main(){

    int a, b,c;

    cin >> a >> b >> c;

    vector<int> root;
    quadForm(root, a,b,c);
    
    cout << "roots: ";
    for(int i = 0; i<root.size(); ++i){
        
        if(root[0] == -1){
        cout << "N/A, No real roots";
        }
        else
            cout << root[i] <<" ";
    }
    
}