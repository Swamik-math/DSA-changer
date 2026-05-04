    #include <bits/stdc++.h>
    using namespace std;


    vector<int> PSE(vector<int> arr){
        int n = arr.size();

        stack<int> st;
        vector<int> pse(n);

        for(int i = 0; i<n; i++){
            while(!st.empty()  && arr[st.top()] >= arr[i]){
                st.pop();
            }

            if(st.empty()) pse[i] = -1;
            else pse[i] = st.top();

            st.push(i);
        }
        return pse;
    }

    vector<int> NSE(vector<int> arr){
        int n = arr.size();

        stack<int> st;
        vector<int> nge(n);

        for(int i = n-1; i>=0; i--){
            while(!st.empty()  && arr[st.top()] >= arr[i]){
                st.pop();
            }

            if(st.empty()) nge[i] = n;
            else nge[i] = st.top();

            st.push(i);
        }
        return nge;
    }


    int largestRectangle(vector<int> arr){

        vector<int> nse = NSE(arr);
        vector<int> pse = PSE(arr);

        if(arr.size() == 0) return 0;

        int maxe = 0;

        for(int i=0; i<arr.size(); i++){

            maxe = max(maxe, arr[i] * (nse[i] - pse[i] - 1));
        }
        return maxe;
    } 



    int main() {
        vector<int> arr = {3, 5, 1, 7, 5, 9};

        cout << largestRectangle(arr) << endl;

        return 0;
    }