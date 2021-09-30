string balancedSums(vector<int> arr) {
    for(int i = 0; i< arr.size(); i++){
        int sumLeft = 0;
        int sumRight = 0;
        for(int j = 0; j < i; j++){
            sumLeft = sumLeft + arr[j];
        }
        for(int j = i+1; j < arr.size(); j++){
            sumRight = sumRight + arr[j];
        }
        if(sumLeft == sumRight){
            return "YES";
        }
    }
    return "NO";

}
