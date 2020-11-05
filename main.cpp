#include<iostream>

using namespace std;

int main()
{
    int bucket,mug,newmug;
    cout<<"Enter the size of bucket: "<<endl;
    cin>>bucket;
    cout<<"Enter the size of mug: "<<endl;
    cin>>mug;
    newmug = 0;
    int counter = 0;
    int times = bucket/mug;
    float percent = .8*bucket;
    cout<<percent<<endl;
    if(mug<=bucket)
    {
    for(int i = 0;i<times;i++)
    {
        counter++;
        newmug = newmug + mug;
        cout<<newmug<<endl;
        if(newmug >= percent)
            break;
    }
    cout<<"No of times = "<<counter;
    }
    else
        cout<<"INVALID INPUT"<<endl;
    return 0;
}
