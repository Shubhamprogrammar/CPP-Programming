#include<iostream>        
#include<fstream>
using namespace std;

// Creation of File
//int main(){
//    fstream FileName;               
//    FileName.open("FileName.txt", ios::out);    
//    if (!FileName){                 
//        cout<<"Error while creating the file";    
//    }
//    else{
//        cout<<"File created successfully";    
//        FileName.close();           
//    }
//    return 0;
//}

// Writing data into the File if created
//int main() {
//    fstream FileName;                       
//    FileName.open("FileName.txt", ios::out);                
//    if (!FileName) {                            
//        cout<<" Error while creating the file ";          
//    }
//    else {
//        cout<<"File created and data got written to file";    
//        FileName<<"This is Disha Computer Institute";
//        FileName.close();                   
//    }
//    return 0;
//}

//// Reading data from the file
int main() {
    string myText;

    ifstream FileName; 
    FileName.open("filename.txt",iOS::in);

    while (getline (FileName, myText)) {
          cout << myText;
     }
    FileName.close();                   
    return 0;
}

