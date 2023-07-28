#include<bits/stdc++.h>
using namespace std;

void Merge(vector<int>& v, int low, int mid, int high){
    int first_length=0,second_length=0,first_index=0,second_index=0,counter=low;

    first_length=mid-low+1;
    second_length=high-mid;

    vector<int>first_half(first_length);
    vector<int>second_half(second_length);

    for(int i=0;i<first_length;i+=1){first_half[i]=v[low+i];}
    for(int i=0;i<second_length;i+=1){second_half[i]=v[mid+1+i];}

    while(first_index<first_length && second_index<second_length){
        if(first_half[first_index]<=second_half[second_index]){
            v[counter]=first_half[first_index];
            first_index+=1;
        }else{
            v[counter]=second_half[second_index];
            second_index+=1;
        }
        counter+=1;
    }

    while(first_index<first_length){
        v[counter]=first_half[first_index];
        first_index+=1;
        counter+=1;
    }

    while(second_index<second_length){
        v[counter]=second_half[second_index];
        second_index+=1;
        counter+=1;
    }
}

void Divide(vector<int>& v, int low, int high){
    if(low>=high){return;}
    int mid=low+(high-low)/2;
    Divide(v,low,mid);
    Divide(v,mid+1,high);
    Merge(v,low,mid,high);
}

int main(){
    vector<int>v;
    int x,y;

    cout<<"Number of input to Sort: ";
    cin>>x;
    cout<<"Numbers: ";

    for(int i=0;i<x;i+=1){cin>>y;v.push_back(y);}

    cout<<"Unsorterd: ";
    for(int i=0;i<x;i+=1){cout<<v[i]<<" ";}

    Divide(v, 0, v.size()-1);

    cout<<"\nSorted: ";
    for(int i=0;i<x;i+=1){cout<<v[i]<<" ";}

    return 0;
}