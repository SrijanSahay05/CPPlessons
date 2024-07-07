#include <iostream>

using namespace std;

string getWeekDay(int dayNum){
    string dayName; 
    switch (dayNum){
        case 0:
        dayName = "Sunday";
        break;
        case 1:
        dayName = "Monday";
        break;
        case 2:
        dayName = "Tuesday";
        break;
        case 3:
        dayName = "Wednesday";
        break;
        case 4:
        dayName = "Thursday";
        break;
        case 5:
        dayName = "Friday";
        break;
        case 6:
        dayName = "Saturday";
        break;
        default:
        dayName = "Invalid Day Number";
    }
    return dayName;
}

string getDay(int dayNum){
    string day[8] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Invalid Day Number"};
    if (dayNum <=6 && dayNum>=0){
        return day[dayNum];
    }
    else{
        return day[7];
    }
}   

int main (){
    cout << getWeekDay(5)<<endl;
    cout << getDay(5)<<endl;
    return 0;
}