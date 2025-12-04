#include<iostream>
#include<vector>
using namespace std;

class Solution{
    public:
        vector<string> result;

        void bt(string current, int n){
            if(current.length() == n){
                result.push_back(current);
                return ;
            }
            bt(current + "0", n);
            bt(current + "1", n);
        }

        vector<string> generateBinaryString(int n){
            bt("", n);
            return result;
        }
};

int main(){
    Solution obj;   // create a obj of the solution 

    int n;
    cout << "Enter n : ";
    cin >> n;

    vector<string> ans = obj.generateBinaryString(n);
    for(string &s : ans){
        cout << s << endl;
    }
}
