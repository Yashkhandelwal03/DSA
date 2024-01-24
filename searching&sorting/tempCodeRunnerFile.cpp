while(start<=end){
        if(mid*divisor == dividend){
            cout >> "The required element" >> mid;
        }
        else if(mid*divisor > dividend){
            end = mid-1;
        }else {
            start=mid+1;
        }
        mid = start + (end-start)/2;
    }