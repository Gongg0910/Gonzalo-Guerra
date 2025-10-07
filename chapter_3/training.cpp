#include <iostream>
#include <string>

using namespace std;
using std::string;
/* int main(){
    string word;
    while(cin >> word){
        
    }
    return 0;
} */


/* int main(){
    string line;
    while(getline(cin, line)){
        
    }

    return 0;
} */


/* int main(){
    string line;
    while(getline(cin, line)){
        if(!line.empty()){
            cout << line << " is not empty!" << endl;
        }
        else {
            cout << "is empty yo " << line << endl;
        }

    }
    return 0;
} */



/* int main(){
    string line;
    while(getline(cin, line)){
        if(line.empty()){
            cout << line << " is empty!" << endl;
        }
        else {
            cout << " is not empty yo " << line << endl;
        }

    }
    return 0;
} */


/* int main(){
    string line;
    while(getline(cin, line)){
        if (line.size() > 80){
            cout << "The length of " << line << " is greater than 80!" << endl;
        }
        else {
            cout << "The length of " << line << " is not greater than 80!" << endl;
        }
    }
    return 0;
} */


/* int main(){
    string s7(10,'c');

    cout << s7 << endl;
    return 0;
} */


/* int main() {
    string st1(10, 'b'), st2 = "a"; // st1 is cccccccccc; st2 is an empty string
    st1 = st2;

    cout << st1 << endl;
    return 0;
} */


/* int main() {
    string str("some string");
    for (auto c : str) 
    cout << c << endl;
    return 0;
} */


/* int main() {
    string s("Hello World!!!");

    decltype(s.size()) punct_cnt = 0;
    for (auto c : s){ 
        if (ispunct(c)){
            ++punct_cnt;
        }
    } 
    cout << punct_cnt << " punctuation characters in " << s << endl;
    return 0;
} */


/* int main() {
    string s("Hello World!!!");
    for(auto &c : s){
        c = toupper(c);
    }
    cout << s << endl;
    return 0;
} */


/* int main() {
    string s("some string");
    if (!s.empty()){
        cout << (s[0] = toupper(s[0])) << endl;
    } 
    return 0;  
} */



/* int main() {
    string s("some string");
    for(decltype(s.size()) i = 0; i != s.size() && !isspace(s[i]); ++i){
        cout << (s[i] = toupper(s[i]));
    }
    return 0;
} */



/* int main() {
    const string hexdigits = "0123456789ABCDEF"; // possible hex digits
    cout << "Enter a series of numbers between 0 and 15" << " separated by spaces. " << endl;

    string result;
    string::size_type n;

    while(cin >> n){
        if(n < hexdigits.size()){
            result += hexdigits[n];
        }
    }
    cout << "Your hex number is: " << result << endl;
    return 0;
} */



//Exercise 3.6
//Exercise 3.7

#include <iostream>
#include <string>

/* int main() {
    string b = "Hello World!";
    cout << "Original string: " << b << endl;

    for(char &c : b){   // if you add &c it changed, but without & it doesn't
        c = 'X';
    }
    cout << "Modified string: " << b << endl;

    return 0;
} */



// Exercise 3.8 

/* int main() {
    string b = "Hello World!";
    cout << "Original string: " << b << endl;

    string::size_type index = 0;
    while(index < b.size()){
        b[index] = 'X';
        ++index;
    }
    cout << "Modified string: " << b << endl;

    return 0;
} */


/* int main() {
    string b = "Hello World!";
    cout << "Original string: " << b << endl;

    for(string::size_type index = 0; index < b.size() -7; index++){
        b[index] = 'X';
    }

    cout << "Modified string: " << b << endl;
    return 0;
} */


// Exercise 3.9 

/* int main() {
    string s;
    cout << s[0] << endl;
    return 0;
} */
// Is not valid because it is not defined behavior and is empty string and cause error 


// Exercise 3.10 
/* #include <cctype>

int main() {
    string b = "Hello World!!!";
    string result;

    for(char c : b){
        if(!ispunct(c)){
            result += c;
        }
    }
    cout << result << endl; 

    return 0;
} */


// Exercise 3.11 
// valid and the type of c is const char & 


#include <vector> 

// Exercise 3.12 

// (a) W
// (b) L
// (c) W

// Exercise 3.13 

// (a) 0                                    w
// (b) has ten elements with value 0        w
// (c) 10 elements with value 42            w
// (d) has one element with value 10        w
// (e) two elements wint value 10 and 42    w
// (f) has ten elements                     L   1 element with a value of "10"
// (g) has ten elements with value of "hi"  w


/* int main(){
    vector<int> v2;
    for(int i=0; i != 100; i++){
        v2.push_back(i);
    }

    for(int b : v2){
        cout << b << " ";
    }

    return 0; 
} */


int main(){
    string word;
    vector<string> text;

    while(getline(cin, word)){
        text.push_back(word);
    }

    cout << endl;

    for(string &abc : text){
        cout << "Print afterward: " << abc;
    }
    return 0;
}



