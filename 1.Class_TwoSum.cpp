#include<iostream>
#include<vector>
using namespace std;
class solution {
    public:
        vector<int> twosum(vector<int> &arr, int target){
            int n=arr.size();
            for(int i=0;i<n;i++){
                for(int j=i+1;j<n;j++){
                    if(arr[i]+arr[j]==target){
                        return {i,j};
                    }
                }
            }
            return {};
        }
};
int main(){
    int n,target;
    cout<<"Enter the size:\n";
    cin>>n;

    vector<int> arr(n);
    cout<<"Enter the Array Elements:\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Enter the target:\n";
    cin>>target;

    solution obj;
    vector<int> result = obj.twosum(arr,target);
    cout<<"Index = "<< result[0]<<" "<<result[1];
    return 0;

}
