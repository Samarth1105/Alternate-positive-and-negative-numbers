class Solution{
public:

	void rearrange(int arr[], int n) {
	    
	    vector<int>P;
	    vector<int>N;
	    //separate +ve and -ve
	    for (int i =0; i<n ; i++){
	        if(arr[i]<0){
	            N.push_back(arr[i]);
	        }
	        else{
	            P.push_back(arr[i]);
	        }
	    }
	    
	    //merge in new array
	    int i=0, a=0, b=0;
	    int n1= P.size();
	    int n2= N.size();
	    
	    while(a<n1 && b<n2){
	        if(i%2==0){
	            arr[i]= P[a];
	            a++;
	        }
	        else{
	            arr[i]= N[b];
	            b++;
	        }
	        i++;
	    }
	    while(a<n1){
	       arr[i]= P[a];
	       a++;
	       i++;
	    }
	    while(b<n2){
            arr[i]= N[b];
	        b++;
	        i++;
	    }
	}
};
