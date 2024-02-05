int SecondLargestE(int n,vector<int> &a){
    int max=INT_MIN;
    int secmax=INT_MIN;
    for(int i=0;i<n;i++){
        if(max<a[i]){
            secmax=max;
            max=a[i];
        }
        else if(max>a[i] && secmax<a[i]){
            secmax=a[i];
        }
    }
    return secmax;
}
int secondsmallE(int n,vector<int> &a){
    int min=INT_MAX;
    int secmin=INT_MAX;
    for(int i=0;i<n;i++){
        if(min>a[i]){
            secmin=min;
            min=a[i];
        }
        else if(min<a[i] && secmin>a[i]){
            secmin=a[i];
        }
    }
    return secmin;
}
vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    int secondLar=SecondLargestE(n,a);
    int secondSmall=secondsmallE(n,a);
    return {secondLar,secondSmall};
}