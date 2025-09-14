#include <iostream>
#include <string>   
#include <limits>


using namespace std;

/* void checkNum(int attempt){
    if(attempt <= 0){
        cout << "No more attempts" << endl;
        return;
    }

    cout << "Type 'q' to exist the program\n";
    for(int i = 0; i < attempt; i++){
        string ask;
        cout << "Enter number to see if is even or odd: ";
        getline(cin, ask);
        if(ask == "quit" || ask == "QUIT" || ask == "q" || ask == "Q"){
            cout << "Bye bye!";
            break;
        }

        int number;

        try {
            number = stoi(ask);
        }
        catch(const invalid_argument& e){
            cout << ask << "Invalid! Please try again" << endl;
            continue;
        }

        if(number % 2 == 0){
            cout << number << " is even number\n\n";
        }
        else{
            cout << number << " is odd number\n\n";
        }
    }
}

int main(){
    checkNum(5);
    return 0;
}
 */

#include <vector>

vector<string> names = {"Ann", "Peter", "Patricia", "Sam", "Katerina"};

string name_counting(){
    int count = 0;
    for(int i = 0; i < names.size(); i++){
        if(names[i].length() <= 5){
            count ++;
        }
    }
    cout << "----- Exercise 1 -----" << endl;
    return "There is/are " + to_string(count) + " people's name that has less than 5 characters";
}

int main(){
    cout << name_counting() << endl;
    return 0;
}

