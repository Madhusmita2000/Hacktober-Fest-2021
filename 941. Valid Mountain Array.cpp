class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        
        int n=arr.size();
        
        if(n<3)
            return false;
        
        int cnt=0,flg=0;
        int ind;
        
        vector<int> tmp(arr.begin(),arr.end());
        
        sort(tmp.begin(),tmp.end(),greater<int>());
        if(arr==tmp)
            return false;
        

        for(int i=0;i<n-1;i++)
        {
            if(arr[i]>arr[i+1])
            {
                cnt++;
                ind=i+1;
                flg=1;
                break;
            }
            
            if(arr[i]==arr[i+1])
                return false;
        }
        
        if(flg!=1)
            return false;
        
        for(int i=ind;i<n-1;i++)
        {
            if(arr[i+1]>arr[i])
            {
                cnt--;
                flg=1;
                break;
            }
            
            if(arr[i]==arr[i+1])
                return false;
            
        }
        
        if(cnt==0)
            return false;
        else
            return true;
        
    }
};
