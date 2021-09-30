vector<int> closestNumbers(vector<int> arr) {
    vector<int> a ;
    int n = arr.size();
    bool check = true;
    sort(arr.begin(),arr.end());

    int pos = 1;
    int min = arr[1] - arr[0];
    for(int i=2;i<n;i++){
        int k = arr[i]-arr[i-1];
        if(k<min){
            min=k;
            if(min==1)break;
        }

    }

    for(int i=1;i<n;i++){
        if(arr[i]-arr[i-1]==min){
            a.push_back(arr[i-1]);
            a.push_back(arr[i]);
        }
    }
    return a;
}
