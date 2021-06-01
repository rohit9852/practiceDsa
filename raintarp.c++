    int trap(vector<int>& arr) {
        int res = 0, min =0;
        int n = arr.size();
        for(int i=1;i<n;i++) {
            int left = arr[i];
            for(int j=0;j<i;j++) {
                if(left<arr[j]) {
                    left = arr[j];
                }
            }
            
            int right = arr[i];
            for(int j=i+1;j<n;j++) {
                if(right<arr[j]) {
                    right = arr[j];
                }   
            }
            if(right>left) {
                min = left;
            } else {
                min = right;
            }
            // cout<<left<<" "<<right<<" "<<min<<" ";
            res = res+min-arr[i];
            // cout<<res;
        }
        return res;
    }