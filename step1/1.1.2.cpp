#include<iostream>
using namespace std;
int main(){
    class Solution {
  public:
    int dataTypeSize(string str) {
        // your code here
        
        if(str == "Character"){
            return 1;
        }
        else if(str == "Integer" || str == "Float"){
            return 4;
        }
        else if(str == "Long" || str == "Double"){
            return 8;
        }
        else return -1;
    }
};
}

