#include <iostream >
#include<fstream>
using namespace std;
main(){
    
    // To Create a file
    ofstream onFile;
    onFile.open("D:\\amit\\cpp\\file.txt");   
         // --> use \\ otherise it will show error
    cout << "File Created Successfully" << endl;
 
    // To update
    onFile << "Thankyou So Much :)" ;
    cout << "Data has been written in the file :)" << endl;
    onFile.close();

    // To get the file data in console
    ifstream inFile;
    string str;
    inFile.open("D:\\amit\\cpp\\file.txt");   
    while(getline(inFile,str)){
    cout << str << endl;
    }
    inFile.close();

    // To copy a file data in another file
    ifstream innFile;
    innFile.open("D:\\amit\\cpp\\file.txt");   
    ofstream onnFile;
    char str2;
    onnFile.open("D:\\amit\\cpp\\file2.txt");   
    while(innFile.get(str2)){
        onnFile.put(str2);
    }
    cout << "Copied!!" << endl;

    innFile.close();
    onnFile.close();

    // To delete a file
    int value = remove("D:\\amit\\cpp\\file2.txt");
    if(value == 0){
        cout << " File Deleted !! ";
    }
    else{
        cout << "File Not Deleted !!" << endl;
    }
}
