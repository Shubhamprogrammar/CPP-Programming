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
    fstream FileName;                   
    FileName.open("FileName.txt", ios::in);         
    if (!FileName) {                        
        cout<<"File doesn’t exist.";          
    }
    else {
        char x;                     
        while (1) {         
            FileName>>x;              
            if(FileName.eof())          
                break;              
            cout<<x;                  
        }
    }
    FileName.close();                   
    return 0;
}

