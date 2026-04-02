#include<iostream>

using namespace std;

int main(){
    cout<<"Main Grid";

    string arr[3] = {
        "Janseth",
        "Stephen",
        "Carlo"
    };

    string user;

    user = arr[0], arr[1], arr[2];

    cin>>user;

    bool found = false;

    if(user == arr[0] || user == arr[1] || user == arr[2]){
        found = true;
    }
    
    if(found == true){
        cout<<"User Found";
    }

    else {
        cout<<"User not Found";

    }
}