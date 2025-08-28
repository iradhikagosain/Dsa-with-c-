#include <iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> vec1;
    cout<<vec1.size();
    vector<int> vec2={2,4,6,2,2,5,6};
    cout<<"\n"<<vec2.size()<<endl;
    vector<int> vec3(5,-1);
    cout<<vec3.size()<<endl;
    for(int i=0;i<vec2.size();i++)
    {
        cout<<vec2[i]<<"\t";
    }

    return 0;
}