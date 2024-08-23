class Solution {
public:
    void merge(int* nums,int s,int e,int mid){
        // int mid = (s+e)/2;
        int len1 = mid - s + 1;
        int len2 = e - mid;

        int* arr1 = new int[len1];
        int* arr2 = new int[len2];

        int k=s;
        for(int i=0;i<len1;i++){
            arr1[i] = nums[k];
            k++;
        } 

        k=mid+1;
        for(int j=0;j<len2;j++){
            arr2[j] = nums[k];
            k++;
        }

        //merge two sorted arrays
        int leftArrIndex = 0;
        int rightArrIndex = 0;
        int mainArrIndex = s;

        while(leftArrIndex<len1 && rightArrIndex<len2){
            if(arr1[leftArrIndex] < arr2[rightArrIndex]){
                nums[mainArrIndex] = arr1[leftArrIndex];
                leftArrIndex++;
                mainArrIndex++;
            }else{
                nums[mainArrIndex] = arr2[rightArrIndex];
                rightArrIndex++;
                mainArrIndex++;
            }
        }
        while(leftArrIndex<len1){
            nums[mainArrIndex] = arr1[leftArrIndex];
            leftArrIndex++;
            mainArrIndex++;
        }
        while(rightArrIndex<len2){
            nums[mainArrIndex] = arr2[rightArrIndex];
            rightArrIndex++;
            mainArrIndex++;
        }
    }
    void sortArr(int* nums,int s,int e){
        if(s>=e){
            return;
        }
        int mid = (s+e)/2;
        sortArr(nums,s,mid);
        sortArr(nums,mid+1,e);
        merge(nums,s,e,mid);
    }
    vector<int> sortArray(vector<int>& nums) {
        int s = 0;
        int e = nums.size()-1;
        sortArr(&nums[0],s,e);
        return nums;
    }
};