using namespace std; 
#include <iostream>
#include <string>
#include <fstream> // För att läsa skriva fil 
#include <vector>
//ifstram (READ file stream)
//ofstream (WRITE file stream)
void writeOnFile(){
    ofstream input; 
    input.open("tacos.txt");
    for (int i=0; i<10; i++){
        input << i << " xqcL!" << endl;
    }
    input.close();
}
void printElementsInFile(){
    ifstream output("tacos.txt");
    output.open("tacos.txt");
    if (output.is_open())
        cout << output.rdbuf();
    }

int main(){
printElementsInFile();
}