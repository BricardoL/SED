#include <iostream>
#include <string>

using namespace std;

void withFor(string);

int main(void){
    string phrase;
    cout<<"Invierta palabra: ";
    getline(cin, phrase); //TO INCLUDE SPACES!!!
    withFor(phrase);
    
    
    return 0;
}

void withFor(string p){
    string matrix[p.size()]; //Matrix where the phrase will be saved
    for(int i = 0; i<= p.size() - 1; i++){ //Full matrix with string
        matrix[i] = p.substr(i, 1);
    }
    for (int i = p.size() - 1; i >= 0; i--) //Reverse matrix
    {
        cout<<matrix[i];
    }
    cout<<"\n";    
}