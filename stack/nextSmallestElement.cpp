#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main(){
    vector<int> k;
    k.push_back(2);
    k.push_back(1);
    k.push_back(4);
    k.push_back(3);

    stack<int> st;
    st.push(-1);

    vector<int> ans(k.size());

    for(int i=k.size()-1;i>=0;i--){
        int curr = k[i];
        while (st.top() >= curr)
        {
            st.pop();    
        }
        ans[i] = st.top();
        st.push(curr);
    }

    cout << "Printing elements" << endl;
    for(int j=0;j<ans.size();j++){
        cout << ans[j] << " ";
    }
}