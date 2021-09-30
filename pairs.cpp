int pairs(int k, vector<int> arr) {
    int count = 0;
    int n = arr.size();
    sort(arr.begin(),arr.end());
    for(int i = 0;i<n;i++){
            for(int j = i+1 ;j<n;j++){
                if(arr[j]-arr[i] == k){
                    count++;
                    break;
                }
            }

        }
    return count;
}
