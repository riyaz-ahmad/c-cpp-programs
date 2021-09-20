//this program finds the roots of a quadratic equation
#include<bits/stdc++.h>
using namespace std;

void findRoots(int a, int b, int c){
    //if a =0 equation is linear i.e invld
    if(a==0){
        cout<<"Not Quadratic equation"<<endl;
        return;
    }
    int d = (b*b)-4*a*c;
    int root_d = sqrt(abs(d));
    //based on the value of d we can obtain the roots
    if(d==0){
        cout<<"Real and Equal Roots"<<endl;
        double r = -(double)b/(2*a);
        cout<<r<<endl;
    }
    else if(d>0){
        cout<<"Real and Different Roots"<<endl;
        double r1 = -(double)b+root_d/(2*a);
        double r2 = -(double)b-root_d/(2*a);
        cout<<"R1 = "<<r1<<" and R2 = "<<r2<<endl;
    }
    else{ 
        cout<<"Complex Roots"<<endl;
        cout<<"R1 = "<<-(double)b/(2*a)<<"+"<<root_d/(2*a);
        cout<<" R2 = "<<-(double)b/(2*a)<<"-"<<root_d/(2*a);   
    }

}
int main(){
    int a = 1, b = 1, c = 1;
   
    // Function call
    findRoots(a, b, c);
    return 0;
}