#include<iostream>
#include<vector>
using namespace std;

void subsetOfGivenVector(vector<int> nums , int index , vector<vector<int>> & ans){

    vector<int> output;

    //base case
    if(index >= nums.size()){
        ans.push_back(output);
        return ;
    }

    //exclude
    subsetOfGivenVector(nums , index+1,ans);

    //include
    int element = nums[index];
    output.push_back(element);
    subsetOfGivenVector(nums , index+1,ans);

}

int main()
{
    vector < int > a = {1,2,3,4};
    vector< vector <int> > ans;
    
    subsetOfGivenVector(a , 0 , ans);

    for(int i=0 ; i<ans[i][] ; i++ ){
        for(int j=0 ; j<ans[][j] ; j++){
            cout << ans[i][j] << " ";
        }
        cout<<endl;
    }

    return 0;
}