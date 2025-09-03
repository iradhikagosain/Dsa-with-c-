#include <iostream>
#include<vector>
using namespace std;

vector<int> pairSum(vector<int>vec,int target)
{
    int st=0,end=vec.size()-1;
    int cs=0;
    vector<int> ans;
    while(st<end)
    {
        cs=vec[st]+vec[end];
        if(cs==target)
        {
            ans.push_back(st);
            ans.push_back(end);
            return ans;
        }
        else if(cs>target)
        {
            end--;
        }
        else
        {
            st++;
        }
    
    }
    return ans;
}



int main()
{
    vector<int>vec={2,7,11,15};
    int target=9;
    vector<int> ans = pairSum(vec, target);

    if (!ans.empty())
    {
        cout << "Indices: " << ans[0] << " and " << ans[1] << endl;
        cout << "Values: " << vec[ans[0]] << " and " << vec[ans[1]] << endl;
    }
    else
    {
        cout << "No pair found" << endl;
    }

    return 0;
 
    
}