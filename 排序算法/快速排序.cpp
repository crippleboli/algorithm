//
// Created by Macbook on 2025/12/23.
//
#include "iostream"
#include "cstdlib"   // 用于 rand()
#include "ctime"
#include "vector"
using namespace std;

void Swap(int &a,int &b){
    int temp = a;
    a=b;
    b=temp;
}

// 快速排序 l<r
void QuickSort(vector<int>& nums, int l, int r){
    if(l>=r){return;}

    int i=l,j=r;
    int pivot = nums[l];  // 默认本轮最左边是基准
    while(i<j){
        while(i<j && nums[j]>= pivot){ j--;}
        while(i<j && nums[i]<= pivot){ i++;}
        if(i<j){Swap(nums[i],nums[j]);}
    }

    swap(nums[j],nums[l]);

    QuickSort(nums,l,i-1);
    QuickSort(nums,i+1,r);
}
void test() {
    std::srand(std::time(nullptr)); // 初始化随机种子

    std::vector<int> nums;
    int n = 10; // 数组长度

    // 填充乱序数组，范围 1~100
    for(int i = 0; i < n; i++){
        nums.push_back(rand() % 100 + 1);
    }
    QuickSort(nums,0,9);
    for(int x : nums) {
        cout << x << " ";
    }
}

int main() {
    test();
    return 0;
}

