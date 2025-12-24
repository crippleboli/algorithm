//
// Created by Macbook on 2025/11/26.
//
#include "iostream"
using namespace std;

int search(int nums[],int length,int target){
    int low = 0;
    int high = length-1;
    int mid = (low+high)/2;

    while(low <= high){

        if(nums[mid]>target){
            high = mid-1;
            mid = (low+high)/2;
        }else if(nums[mid]<target){
            low = mid+1;
            mid = (low+high)/2;
        }else{
            return mid;
        }
    }

    return -1;
}



int main(){
    int my_nums[] = {8, 17, 41, 56, 73, 92, 133, 157, 199, 238, 254, 275, 289, 304, 320, 366, 412, 421, 487, 498};
    int my_target = 88;
    int my_length = sizeof(my_nums) / sizeof(my_nums[0]);

    int ret = search(my_nums,my_length,my_target);
    if (ret != -1){
        cout << "nums数组中第"<<ret+1<<"个是"<<my_target<<endl;
    }else{
        cout<<"nums数组中不存在"<<my_target<<endl;
    }

    return 0;
}
