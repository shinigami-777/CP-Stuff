// some random copy paste functions to use. Zero based indexing used

// to find the max and min Continuous Subarray Sum from x index to y (always make sure x<=y)

ll maxContinuousSubarraySumfromxtoyindex(ll arr[],int x,int y){
	ll maxsum=INT_MIN;
	ll currsum=0;
	for(int i=x;i<=y;i++){
		currsum =max(arr[i],currsum+arr[i]);
		maxsum=max(currsum,maxsum);
	}
	return maxsum;
}

ll minContinuousSubarraySumfromxtoyindex(ll arr[],int x,int y){
	ll minsum=INT_MAX;
	ll currsum=0;
	for(int i=x;i<=y;i++){
		currsum =min(arr[i],currsum+arr[i]);
		minsum=min(currsum,minsum);
	}
	return minsum;
}

// Max and Min continuous Subarray sum always having index ind in common. (Make sure ind is valid)

ll maxContinuousSubarraySumWithAParticularIndex(ll arr[],int n,int ind){
	ll maxsum=arr[ind];
	ll currsum=arr[ind];
	for(int i=ind-1;i>=0;i--){
		currsum+=arr[i];
		maxsum=max(maxsum,currsum);
	}
	currsum=maxsum;
	for(int i=ind+1;i<n;i++){
		currsum+=arr[i];
		maxsum=max(maxsum,currsum);
	}
	return maxsum;
}

ll minContinuousSubarraySumWithAParticularIndex(ll arr[],int n,int ind){
	ll minsum=arr[ind];
	ll currsum=arr[ind];
	for(int i=ind-1;i>=0;i--){
		currsum+=arr[i];
		minsum=min(minsum,currsum);
	}
	currsum=minsum;
	for(int i=ind+1;i<n;i++){
		currsum+=arr[i];
		minsum=min(minsum,currsum);
	}
	return minsum;
}
