string balancedSums(vector<int> arr) {
    int sum1=0;
    int sum2=0;
    for(int i=1;i<arr.size();i++){
        sum2+=arr[i];
    }
    for(int i=0;i<arr.size();i++){
        if(sum1 == sum2)return "YES";
        if(i>=1){
            sum1+=arr[i-1];
            sum2-=arr[i];
        }

    }
    return "NO";
}
