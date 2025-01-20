//1st c++ program

#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;

int makeRandomNum(int n){
    return rand() %n;
}

int main(){
    
    int randomnum;
    unsigned int seed = static_cast<unsigned int> (time(nullptr));

    // cout<<"give me seed";
    // cin>>seed;
    srand(seed);

    // for (int i=0; i<10; i++){
    //     randomnum = makeRandomNum(10);
    //     cout<<randomnum<<endl;
    // }
    // return 0;


    int guessnum;    
    cout<<"hello world"<<endl;
    randomnum=makeRandomNum(10);
    cout<<"guess my generated num plz!"<<endl;
    cin>>guessnum;
    while (guessnum!=randomnum){
        cout<<"wrong and guess again plz"<<endl;
        cin>>guessnum;
    }
    cout<<"victory!!!!"<<endl;

    return 0;
}