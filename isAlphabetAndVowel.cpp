//This program is used to check whether a character is aplhabet and if it is alphabet then check if it is vowel or not
#include<bits/stdc++.h>
using namespace std;
 bool isAlphabet(char c){
     if((c>='a' and c<='z') or (c>='A' and c<='Z'))
        return true;
     else
        return false;
 }

bool isVowel(char c){
    if(c=='a' || c=='e' || c=='i'|| c == 'o' || c=='u'|| c=='A' || c=='E' || c=='I'|| c == 'O' || c=='U')
        return true;
    else   
        return false;
}


int main(){
    char c = '@';
    if(isAlphabet(c)){
        if(isVowel(c))
            cout<<"Alphabet and Vowel";
        else    
            cout<<"Alphabet and Consonent";
    }
        
    else
        cout<<"Not an alphabet";
    return 0;
}