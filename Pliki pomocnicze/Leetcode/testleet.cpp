#include <iostream>
#include <vector>

using namespace std;
vector<int> nums = {-1,-2,-3,-4,-5};
int target = -8; 
void show_vec(vector<int> s)
{
    for (int i = 0; i < s.size(); i++)
    {
        cout<<s.at(i)<<", ";
    }
    cout<<endl;
    
}
int main() 
{
    
    int a=0;
    int b=0;

    vector<int> sum;
    int i=0;
    int max=nums.at(0);
    int min=nums.at(0);
    cout<<nums.size()<<":size"<<endl;
    while(i<nums.size())
    {
        if(nums.at(i)<min){min = nums.at(i);}
        i++;
    }
    i=0;
    while(i<nums.size())
    {
        sum.push_back(i); 
        i++;
    }
    i=0;
    show_vec(nums);
    show_vec(sum);
    while(i<nums.size())
    {
        if(nums.at(i)>target-min){nums.erase(nums.begin()+i);sum.erase(sum.begin()+i);i--;}
        i++;
    }
    
    bool find = false;
    while (find != true)
    {
    show_vec(nums);
    show_vec(sum);
    i=0;
    max=nums.at(0);
    while(i<nums.size())
    {
        if(nums.at(i)>max){max = nums.at(i);a=i;}
        i++;
    }
    cout<<"max:"<<max<<endl;
    i=0;
    while(i<nums.size())
    {
        if(max+nums.at(i)==target && a!=i){b=sum.at(i);find=true;break;}   
        i++;
    }
    cout<<"find:"<<find<<endl;
    cout<<"a:"<<a<<" b:"<<b<<" i:"<<i<<endl;
    if(find==true)
    {
    i=0;
    while(i<nums.size())
    {
        if(max==nums.at(i)&&sum.at(i)!=b){a=sum.at(i);break;}   
        i++;
    }   
    break;
    }
    cout<<"find:"<<find<<endl;
    cout<<"a:"<<a<<" b:"<<b<<" i:"<<i<<endl;
    nums.erase(nums.begin()+a);
    sum.erase(sum.begin()+a);
    }

	cin.get();
	return 0;
}
