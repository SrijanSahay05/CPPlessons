#include <iostream>
using namespace std; 

int main(){
    string name = "Drijan Sahay" ;
    cout <<"Length of the name using .length " << name.length() << endl; //prints the length of the string ; SPACE is also treated as a character
    cout <<"Length of the name using .size " << name.size() << endl ; 
    cout <<"Character at 0index using name[0] " <<  name[0] << endl; //prints the character at index position inside the []. indexing starts from 0 
    cout <<"character at 0index using name.at(0) " << name.at(0) << endl; //printe the character at index mentioned 
    name[0] = 'S' ; //can change some speific index character
    cout << "Index of 'S' "  << name.find("S")  << endl ; // string.find("parameter", index); parameter is the phrase to look up in the string and index is the start position to find the match. index value 0 or not specifing the index includes the complete word 
                                      // outputs an int value indicating the index position of the phrase
    cout << "Index of 's' " << name.find("s")  << endl ; // find is CASE Sensitive 
    cout << "Starting 6 index of the string " <<name.substr(0, 6) << endl; // string.substr(startindex, length); grabs a substring 
    string initialName = name.substr(0,6) ; // substr function can also be used to assign value to a new variable    
    string titleName = "Mr." + name ; // string concatenation, using a + sign multiple strings can be joined together 
    cout <<"Including the title "<< titleName << endl;
    string appendString = " aka drone" ; 
    cout <<"Using the append function " << name.append(appendString) << endl; // similar to concatenation function
    cout << "This is how to use special character using cout \" \' \\ \t tab \n new line "<< endl;

    
    //taking strings as user inputs 
    int age; 
    cout << "Enter you age (integers only) " << endl ;
    cin >> age ;  //cin considers a space (whitespace, tabs, etc) as a terminating character, i.e can only store a single word
    cout << name << " is " << age << " years old" << endl;
    
    cin.ignore(); //recommended to use cin.ignore to clear any previous input buffer before taking a new input from the user 
    
    string sibilingName ; 
    cout << "Enter you sibling's Name "<< endl;
    getline(cin, sibilingName);
    cout << "Siblings Name is " <<sibilingName << endl ;
    return 0;
}